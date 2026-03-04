import json
data = json.load(open(r"C:\Users\Mandito\Desktop\New folder\pokeemerald-expansion\src\data\wild_encounters.json"))
mg = data["wild_encounter_groups"][0]
# Check Kindle Road, Cape Brink, Bond Bridge, Berry Forest, etc
for e in mg["encounters"]:
    m = e.get("map","")
    if any(x in m for x in ["KINDLE","CAPE_BRINK","BOND_BRIDGE","BERRY_FOREST","FIVE_ISLAND_MEADOW","WATER_PATH","SEVAULT"]):
        bl = e["base_label"]
        print(f"{m} ({bl})")
        if "land_mons" in e:
            for mon in e["land_mons"]["mons"]:
                print(f"  {mon['species']} Lv{mon['min_level']}-{mon['max_level']}")
            print()
