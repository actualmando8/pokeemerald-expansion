#!/usr/bin/env python3
"""
Revert Sevii Island wild encounters from Johto species back to original FRLG data.
Reads original from git commit 97e83ebe6a (the FRLG import commit).
"""
import json, subprocess, os

ROOT = r"C:\Users\Mandito\Desktop\New folder\pokeemerald-expansion"
TARGET = os.path.join(ROOT, "src", "data", "wild_encounters.json")

# Get original FRLG wild_encounters.json from git
result = subprocess.run(
    ["wsl", "bash", "-c",
     "cd '/mnt/c/Users/Mandito/Desktop/New folder/pokeemerald-expansion' && "
     "git show 97e83ebe6a:src/data/wild_encounters.json"],
    capture_output=True, text=True
)
if result.returncode != 0:
    print("Git error:", result.stderr)
    exit(1)

original = json.loads(result.stdout)
current = json.load(open(TARGET))

# Identify Sevii map names
SEVII_KEYWORDS = [
    "KINDLE", "CAPE_BRINK", "BOND_BRIDGE", "BERRY_FOREST", "ICEFALL",
    "WATER_PATH", "RUIN_VALLEY", "CANYON", "TREASURE", "LOST_CAVE",
    "PATTERN", "TANOBY", "ONE_ISLAND", "TWO_ISLAND", "THREE_ISLAND",
    "FOUR_ISLAND", "FIVE_ISLAND", "SIX_ISLAND", "SEVEN_ISLAND",
    "SEVAULT", "MEMORIAL", "MEADOW", "RESORT", "MT_EMBER",
    "ROCKET_WAREHOUSE", "DOTTED_HOLE", "ALTERING_CAVE_FRLG",
]

def is_sevii(map_name):
    return any(kw in map_name for kw in SEVII_KEYWORDS)

# Build lookup of original Sevii encounters by (map, base_label)
orig_group = original["wild_encounter_groups"][0]
orig_sevii = {}
for enc in orig_group["encounters"]:
    m = enc.get("map", "")
    bl = enc.get("base_label", "")
    if is_sevii(m):
        orig_sevii[(m, bl)] = enc

print(f"Original Sevii encounters in git: {len(orig_sevii)}")

# Replace current Sevii encounters with originals
cur_group = current["wild_encounter_groups"][0]
replaced = 0
kept_current = []
for enc in cur_group["encounters"]:
    m = enc.get("map", "")
    bl = enc.get("base_label", "")
    key = (m, bl)
    if is_sevii(m) and key in orig_sevii:
        kept_current.append(orig_sevii[key])
        replaced += 1
    elif is_sevii(m) and key not in orig_sevii:
        # Check if we have original by map only (label might differ)
        found = False
        for ok, ov in orig_sevii.items():
            if ok[0] == m:
                kept_current.append(ov)
                replaced += 1
                found = True
                break
        if not found:
            print(f"  WARNING: No original found for {m} ({bl}), keeping current")
            kept_current.append(enc)
    else:
        kept_current.append(enc)

cur_group["encounters"] = kept_current

# Also add any original Sevii encounters that aren't in current
current_maps = {(e["map"], e["base_label"]) for e in kept_current}
added = 0
for key, enc in orig_sevii.items():
    if key not in current_maps:
        cur_group["encounters"].append(enc)
        added += 1
        print(f"  Added missing: {key[0]} ({key[1]})")

print(f"Replaced {replaced} Sevii encounters with originals")
if added:
    print(f"Added {added} missing original encounters")
print(f"Total encounters: {len(cur_group['encounters'])}")

with open(TARGET, "w") as f:
    json.dump(current, f, indent=2)
    f.write("\n")
print("Done!")

# Verify a sample
for enc in cur_group["encounters"]:
    if "KINDLE" in enc.get("map", ""):
        print(f"\nVerify {enc['map']}:")
        if "land_mons" in enc:
            for mon in enc["land_mons"]["mons"][:4]:
                print(f"  {mon['species']} Lv{mon['min_level']}-{mon['max_level']}")
        break
