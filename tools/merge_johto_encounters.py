#!/usr/bin/env python3
"""Merge Johto encounters into wild_encounters.json"""
import json, os

BASE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(BASE)
TARGET = os.path.join(ROOT, "src", "data", "wild_encounters.json")

# Load existing
with open(TARGET) as f:
    data = json.load(f)

# Load Johto encounters
with open(os.path.join(BASE, "johto_enc_data.json")) as f:
    johto = json.load(f)

# Remove any existing Johto entries (by base_label containing _Johto)
main_group = data["wild_encounter_groups"][0]
existing = [e for e in main_group["encounters"] if "_Johto" not in e.get("base_label", "")]
removed = len(main_group["encounters"]) - len(existing)
if removed:
    print(f"Removed {removed} existing Johto entries")

# Add Johto encounters
main_group["encounters"] = existing + johto
print(f"Added {len(johto)} Johto encounter entries")
print(f"Total encounters: {len(main_group['encounters'])}")

# Write back
with open(TARGET, "w") as f:
    json.dump(data, f, indent=2)
    f.write("\n")

print(f"Updated {TARGET}")
