import json
data = json.load(open(r"C:\Users\Mandito\Desktop\New folder\pokeemerald-expansion\src\data\wild_encounters.json"))
mg = data["wild_encounter_groups"][0]
sevii_keywords = ["KINDLE","CAPE_BRINK","BOND_BRIDGE","BERRY_FOREST","ICEFALL","WATER_PATH",
    "RUIN_VALLEY","CANYON","TREASURE","LOST_CAVE","PATTERN","TANOBY",
    "ONE_ISLAND","TWO_ISLAND","THREE_ISLAND","FOUR_ISLAND","FIVE_ISLAND",
    "SIX_ISLAND","SEVEN_ISLAND","SEVAULT","MEMORIAL","MEADOW","RESORT"]
sevii = [e for e in mg["encounters"] if any(x in e.get("map","") for x in sevii_keywords)]
print("Sevii encounter maps:", len(sevii))
for e in sevii[:8]:
    m = e["map"]
    bl = e["base_label"]
    print(f"  {m} ({bl})")
    if "land_mons" in e:
        for mon in e["land_mons"]["mons"][:3]:
            print(f"    {mon['species']} Lv{mon['min_level']}-{mon['max_level']}")
