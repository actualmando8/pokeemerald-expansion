#!/usr/bin/env python3
"""Fix slots that were incorrectly promoted by the restore script.
These slots always had the base form - only slot 11 had the evo."""
import json

TARGET = r"C:\Users\Mandito\Desktop\New folder\pokeemerald-expansion\src\data\wild_encounters.json"
with open(TARGET) as f:
    data = json.load(f)

# (base_label, field, slot_index, wrong_species, correct_species)
FIXES = [
    ("gBurnedTowerB1F_Johto", "land_mons", 10, "SPECIES_MAGMORTAR", "SPECIES_MAGMAR"),
    ("gMtSilverOutside_Johto", "land_mons", 11, "SPECIES_MISMAGIUS", "SPECIES_MISDREAVUS"),
    ("gMtSilverMountainSide_Johto", "land_mons", 10, "SPECIES_TYRANITAR", "SPECIES_PUPITAR"),
    ("gMtSilver2F_Johto", "land_mons", 10, "SPECIES_TYRANITAR", "SPECIES_PUPITAR"),
    ("gMtSilver3F_Johto", "land_mons", 10, "SPECIES_TYRANITAR", "SPECIES_PUPITAR"),
    ("gVictoryRoadKanto1F_Johto", "land_mons", 10, "SPECIES_RHYPERIOR", "SPECIES_RHYDON"),
    ("gVictoryRoadKantoB1F_Johto", "land_mons", 10, "SPECIES_RHYPERIOR", "SPECIES_RHYDON"),
]

count = 0
for group in data["wild_encounter_groups"]:
    for enc in group.get("encounters", []):
        bl = enc.get("base_label", "")
        for fix_bl, field, idx, wrong, correct in FIXES:
            if bl == fix_bl and field in enc:
                mon = enc[field]["mons"][idx]
                if mon["species"] == wrong:
                    mon["species"] = correct
                    count += 1
                    print(f"  Fixed {bl}[{idx}]: {wrong} -> {correct}")

with open(TARGET, "w") as f:
    json.dump(data, f, indent=2)
    f.write("\n")

print(f"\nCorrected {count} false-positive restorations")
