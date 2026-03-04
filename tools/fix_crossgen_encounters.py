#!/usr/bin/env python3
"""Remove cross-gen evolved forms from Johto wild encounters, replace with base forms."""
import json

TARGET = r"C:\Users\Mandito\Desktop\New folder\pokeemerald-expansion\src\data\wild_encounters.json"

with open(TARGET) as f:
    data = json.load(f)

REPLACEMENTS = {
    "SPECIES_TANGROWTH": "SPECIES_TANGELA",
    "SPECIES_LICKILICKY": "SPECIES_LICKITUNG",
    "SPECIES_YANMEGA": "SPECIES_YANMA",
    "SPECIES_AMBIPOM": "SPECIES_AIPOM",
    "SPECIES_GLISCOR": "SPECIES_GLIGAR",
    "SPECIES_WEAVILE": "SPECIES_SNEASEL",
    "SPECIES_MAMOSWINE": "SPECIES_PILOSWINE",
    "SPECIES_MAGNEZONE": "SPECIES_MAGNETON",
    "SPECIES_MAGMORTAR": "SPECIES_MAGMAR",
    "SPECIES_LEAFEON": "SPECIES_EEVEE",
    "SPECIES_GLACEON": "SPECIES_SWINUB",
    "SPECIES_MISMAGIUS": "SPECIES_MISDREAVUS",
    "SPECIES_HONCHKROW": "SPECIES_MURKROW",
    "SPECIES_RHYPERIOR": "SPECIES_RHYDON",
    "SPECIES_STEELIX": "SPECIES_ONIX",
    "SPECIES_ELECTIVIRE": "SPECIES_ELECTABUZZ",
    "SPECIES_FROSLASS": "SPECIES_SNORUNT",
    "SPECIES_KINGDRA": "SPECIES_SEADRA",
    "SPECIES_TYRANITAR": "SPECIES_PUPITAR",
}

count = 0
for group in data["wild_encounter_groups"]:
    for enc in group.get("encounters", []):
        if "_Johto" not in enc.get("base_label", ""):
            continue
        for field in ["land_mons", "water_mons", "fishing_mons", "rock_smash_mons"]:
            if field in enc:
                for mon in enc[field]["mons"]:
                    if mon["species"] in REPLACEMENTS:
                        old = mon["species"]
                        mon["species"] = REPLACEMENTS[old]
                        count += 1
                        label = enc["base_label"]
                        print(f"  {label}: {old} -> {mon['species']}")

with open(TARGET, "w") as f:
    json.dump(data, f, indent=2)
    f.write("\n")

print(f"\nReplaced {count} cross-gen evo instances")
