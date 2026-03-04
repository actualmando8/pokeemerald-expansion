#!/usr/bin/env python3
"""Restore cross-gen evolutions ONLY in 1% slots where they fit level-wise (>=44)."""
import json

TARGET = r"C:\Users\Mandito\Desktop\New folder\pokeemerald-expansion\src\data\wild_encounters.json"
with open(TARGET) as f:
    data = json.load(f)

# Reverse map: base form -> evolved form (only restore these)
RESTORE = {
    "SPECIES_TANGELA": "SPECIES_TANGROWTH",
    "SPECIES_SNEASEL": "SPECIES_WEAVILE",
    "SPECIES_PILOSWINE": "SPECIES_MAMOSWINE",
    "SPECIES_SWINUB": "SPECIES_GLACEON",       # was Glaceon slot replaced with Swinub
    "SPECIES_ONIX": "SPECIES_STEELIX",
    "SPECIES_SEADRA": "SPECIES_KINGDRA",
    "SPECIES_RHYDON": "SPECIES_RHYPERIOR",
    "SPECIES_MISDREAVUS": "SPECIES_MISMAGIUS",
    "SPECIES_MAGMAR": "SPECIES_MAGMORTAR",
    "SPECIES_EEVEE": "SPECIES_LEAFEON",
    "SPECIES_GLIGAR": "SPECIES_GLISCOR",
    "SPECIES_PUPITAR": "SPECIES_TYRANITAR",
}

# Only restore in these specific maps (high-level areas where they fit)
ALLOWED_MAPS = {
    "gRoute28_Johto",           # Lv58-64
    "gRoute45_Johto",           # Lv50-58
    "gIcePathB2F_Johto",        # Lv52-58
    "gIcePathB3F_Johto",        # Lv52-58
    "gMtSilverOutside_Johto",   # Lv55-61
    "gMtSilverMountainSide_Johto", # Lv57-62
    "gMtSilver2F_Johto",        # Lv58-64
    "gMtSilver3F_Johto",        # Lv59-65
    "gMtSilverSnow_Johto",      # Lv58-65
    "gWhirlIslands1F_Johto",    # Lv48-56
    "gWhirlIslandsB1F_Johto",   # Lv48-56
    "gWhirlIslandsB2F_Johto",   # Lv50-58
    "gVictoryRoadKanto1F_Johto", # Lv52-60
    "gVictoryRoadKantoB1F_Johto", # Lv53-60
    "gCliffEdgeCave_Johto",     # Lv50-56
    "gBurnedTowerB1F_Johto",    # Lv45-54
    "gIlexForest_Johto",        # Lv42-50
    "gUnionCaveB2F_Johto",      # Lv42-48
}

MIN_LEVEL = 44  # Minimum level for a cross-gen evo to appear in wild

# 1% slot indices: land slots 10,11 (0-indexed); water slot 4; fish slots 8,9
ONE_PERCENT_LAND = {10, 11}
ONE_PERCENT_WATER = {4}
ONE_PERCENT_FISH = {8, 9}

count = 0
for group in data["wild_encounter_groups"]:
    for enc in group.get("encounters", []):
        bl = enc.get("base_label", "")
        if bl not in ALLOWED_MAPS:
            continue
        for field, pct_slots in [
            ("land_mons", ONE_PERCENT_LAND),
            ("water_mons", ONE_PERCENT_WATER),
            ("fishing_mons", ONE_PERCENT_FISH),
        ]:
            if field not in enc:
                continue
            mons = enc[field]["mons"]
            for i in pct_slots:
                if i >= len(mons):
                    continue
                mon = mons[i]
                if mon["species"] in RESTORE and mon["min_level"] >= MIN_LEVEL:
                    old = mon["species"]
                    mon["species"] = RESTORE[old]
                    count += 1
                    print(f"  {bl} {field}[{i}]: {old} -> {mon['species']} (Lv{mon['min_level']}-{mon['max_level']})")

with open(TARGET, "w") as f:
    json.dump(data, f, indent=2)
    f.write("\n")

print(f"\nRestored {count} cross-gen evos in 1% slots (level >= {MIN_LEVEL})")
