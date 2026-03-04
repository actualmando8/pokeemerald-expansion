#!/usr/bin/env python3
"""Generate Johto dungeon wild encounters (part 2). Appends to johto_enc_data.json."""
import json, os

def S(n): return f"SPECIES_{n.upper()}"
def land(rate, mons):
    assert len(mons)==12
    return {"encounter_rate":rate,"mons":[{"min_level":m[1],"max_level":m[2],"species":S(m[0])} for m in mons]}
def water(rate, mons):
    assert len(mons)==5
    return {"encounter_rate":rate,"mons":[{"min_level":m[1],"max_level":m[2],"species":S(m[0])} for m in mons]}
def fish(rate, mons):
    assert len(mons)==10
    return {"encounter_rate":rate,"mons":[{"min_level":m[1],"max_level":m[2],"species":S(m[0])} for m in mons]}
def rock(rate, mons):
    assert len(mons)==5
    return {"encounter_rate":rate,"mons":[{"min_level":m[1],"max_level":m[2],"species":S(m[0])} for m in mons]}

CF = fish(15,[("MAGIKARP",35,38),("MAGIKARP",35,40),("GOLDEEN",38,42),("MAGIKARP",38,42),("BARBOACH",38,42),("GOLDEEN",42,48),("SEAKING",44,50),("WHISCASH",46,52),("GYARADOS",48,52),("MAGIKARP",42,48)])
FF = fish(30,[("MAGIKARP",35,38),("MAGIKARP",35,40),("POLIWAG",38,42),("MAGIKARP",38,42),("GOLDEEN",38,42),("POLIWAG",42,48),("POLIWHIRL",44,50),("GOLDEEN",42,48),("SEAKING",44,50),("GYARADOS",48,52)])
OF = fish(30,[("MAGIKARP",35,38),("MAGIKARP",35,40),("TENTACOOL",38,42),("KRABBY",38,42),("HORSEA",38,42),("TENTACRUEL",44,50),("KINGLER",44,50),("SEADRA",44,50),("STARYU",42,48),("SHELLDER",42,48)])

BASE = os.path.dirname(os.path.abspath(__file__))
with open(os.path.join(BASE, "johto_enc_data.json")) as f:
    E = json.load(f)

start = len(E)

# === SPROUT TOWER ===
for fl, lv in [("1F",37),("2F",38),("3F",39)]:
    rare1 = ("RATICATE",lv+3,lv+5) if fl!="3F" else ("GENGAR",lv+5,lv+7)
    rare2 = ("HAUNTER",lv+3,lv+5) if fl!="3F" else ("MISDREAVUS",lv+4,lv+6)
    E.append({"map":f"MAP_SPROUT_TOWER_{fl}","base_label":f"gSproutTower{fl}_Johto","land_mons":land(10,[("RATTATA",lv,lv+3),("GASTLY",lv,lv+3),("RATTATA",lv+1,lv+4),("GASTLY",lv+1,lv+4),("RATTATA",lv+2,lv+5),("GASTLY",lv+2,lv+5),("RATTATA",lv,lv+3),("GASTLY",lv,lv+3),("RATICATE",lv+2,lv+5),("HAUNTER",lv+2,lv+5),rare1,rare2])})

# === DARK CAVE ===
E.append({"map":"MAP_DARK_CAVE_SOUTH_SIDE","base_label":"gDarkCaveSouth_Johto",
    "land_mons":land(10,[("ZUBAT",37,40),("GEODUDE",37,40),("ZUBAT",38,41),("GEODUDE",38,41),("TEDDIURSA",37,40),("DUNSPARCE",37,40),("ZUBAT",39,42),("GEODUDE",39,42),("TEDDIURSA",38,41),("WOBBUFFET",38,41),("URSARING",42,44),("DUNSPARCE",39,42)]),
    "rock_smash_mons":rock(20,[("GEODUDE",37,40),("GEODUDE",38,41),("GRAVELER",40,43),("GEODUDE",36,39),("GRAVELER",42,44)]),
    "water_mons":water(4,[("MAGIKARP",37,40),("MAGIKARP",36,39),("GOLDEEN",39,42),("MAGIKARP",35,38),("SEAKING",42,45)]),
    "fishing_mons":CF})
E.append({"map":"MAP_DARK_CAVE_NORTH_SIDE","base_label":"gDarkCaveNorth_Johto",
    "land_mons":land(10,[("ZUBAT",40,43),("GEODUDE",40,43),("GOLBAT",42,45),("GRAVELER",42,45),("TEDDIURSA",40,43),("DUNSPARCE",40,43),("ZUBAT",41,44),("GEODUDE",41,44),("WOBBUFFET",41,44),("GOLBAT",43,46),("URSARING",44,46),("GRAVELER",43,46)]),
    "rock_smash_mons":rock(20,[("GEODUDE",40,43),("GRAVELER",42,45),("GRAVELER",43,46),("GEODUDE",39,42),("GOLEM",45,48)]),
    "water_mons":water(4,[("MAGIKARP",40,43),("MAGIKARP",38,42),("GOLDEEN",42,45),("MAGIKARP",37,40),("SEAKING",44,48)]),
    "fishing_mons":CF})

# === UNION CAVE ===
E.append({"map":"MAP_UNION_CAVE_1F","base_label":"gUnionCave1F_Johto",
    "land_mons":land(10,[("GEODUDE",39,42),("ZUBAT",39,42),("ONIX",39,42),("RATTATA",39,42),("SANDSHREW",39,42),("WOOPER",39,42),("GEODUDE",40,43),("ZUBAT",40,43),("ONIX",40,43),("RATTATA",40,43),("QUAGSIRE",42,44),("STEELIX",44,46)]),
    "water_mons":water(4,[("WOOPER",39,42),("WOOPER",38,41),("QUAGSIRE",42,45),("MAGIKARP",37,40),("QUAGSIRE",44,47)]),
    "fishing_mons":CF})
E.append({"map":"MAP_UNION_CAVE_B1F","base_label":"gUnionCaveB1F_Johto",
    "land_mons":land(10,[("GEODUDE",40,43),("ZUBAT",40,43),("ONIX",40,43),("RATTATA",40,43),("SANDSHREW",40,43),("GOLBAT",42,45),("GEODUDE",41,44),("ZUBAT",41,44),("ONIX",41,44),("RATTATA",41,44),("RATICATE",43,46),("GRAVELER",43,46)]),
    "water_mons":water(4,[("WOOPER",40,43),("WOOPER",39,42),("QUAGSIRE",43,46),("MAGIKARP",38,41),("QUAGSIRE",45,48)]),
    "fishing_mons":CF})
E.append({"map":"MAP_UNION_CAVE_B2F","base_label":"gUnionCaveB2F_Johto",
    "land_mons":land(10,[("GOLBAT",42,45),("GRAVELER",42,45),("ONIX",42,45),("RATICATE",42,45),("SANDSLASH",42,45),("QUAGSIRE",42,45),("GOLBAT",43,46),("GRAVELER",43,46),("ONIX",43,46),("RATICATE",43,46),("STEELIX",46,48),("QUAGSIRE",44,47)]),
    "water_mons":water(4,[("QUAGSIRE",42,46),("WOOPER",40,44),("QUAGSIRE",44,48),("MAGIKARP",38,42),("LAPRAS",48,52)]),
    "fishing_mons":CF})

# === SLOWPOKE WELL ===
E.append({"map":"MAP_SLOWPOKE_WELL_B1F","base_label":"gSlowpokeWellB1F_Johto",
    "land_mons":land(10,[("SLOWPOKE",38,41),("ZUBAT",38,41),("SLOWPOKE",39,42),("ZUBAT",39,42),("SLOWPOKE",40,43),("ZUBAT",40,43),("SLOWPOKE",38,41),("ZUBAT",38,41),("SLOWPOKE",39,42),("ZUBAT",39,42),("SLOWBRO",42,44),("GOLBAT",42,44)]),
    "water_mons":water(4,[("SLOWPOKE",38,42),("SLOWPOKE",37,41),("SLOWBRO",42,46),("MAGIKARP",36,40),("SLOWKING",44,48)]),
    "fishing_mons":CF})
E.append({"map":"MAP_SLOWPOKE_WELL_B2F","base_label":"gSlowpokeWellB2F_Johto",
    "land_mons":land(10,[("SLOWPOKE",39,42),("ZUBAT",39,42),("SLOWPOKE",40,43),("ZUBAT",40,43),("SLOWPOKE",41,44),("GOLBAT",41,44),("SLOWPOKE",39,42),("ZUBAT",39,42),("SLOWBRO",42,45),("GOLBAT",42,45),("SLOWBRO",43,46),("SLOWKING",44,46)]),
    "water_mons":water(4,[("SLOWPOKE",39,43),("SLOWPOKE",38,42),("SLOWBRO",43,47),("MAGIKARP",37,41),("SLOWKING",45,49)]),
    "fishing_mons":CF})

# === ILEX FOREST ===
E.append({"map":"MAP_ILEX_FOREST","base_label":"gIlexForest_Johto",
    "land_mons":land(15,[("CATERPIE",42,45),("METAPOD",42,45),("WEEDLE",42,45),("KAKUNA",42,45),("PARAS",42,45),("ODDISH",42,45),("ZUBAT",42,45),("PIDGEY",42,45),("HOOTHOOT",42,45),("PSYDUCK",42,45),("PIKACHU",44,47),("LEAFEON",48,50)]),
    "water_mons":water(4,[("PSYDUCK",42,46),("PSYDUCK",40,44),("GOLDUCK",44,48),("PSYDUCK",38,42),("GOLDUCK",46,50)]),
    "fishing_mons":FF})

# === BURNED TOWER ===
E.append({"map":"MAP_BURNED_TOWER_1F","base_label":"gBurnedTower1F_Johto",
    "land_mons":land(10,[("RATTATA",44,47),("KOFFING",44,47),("ZUBAT",44,47),("RATICATE",45,48),("KOFFING",45,48),("GOLBAT",45,48),("RATTATA",44,47),("KOFFING",44,47),("ZUBAT",44,47),("WEEZING",47,50),("RATICATE",46,49),("MAGMAR",48,50)])})
E.append({"map":"MAP_BURNED_TOWER_B1F","base_label":"gBurnedTowerB1F_Johto",
    "land_mons":land(10,[("KOFFING",45,48),("RATTATA",45,48),("WEEZING",47,50),("RATICATE",47,50),("GOLBAT",46,49),("MAGMAR",46,49),("KOFFING",46,49),("RATTATA",46,49),("ZUBAT",45,48),("WEEZING",48,51),("MAGMAR",48,51),("MAGMORTAR",52,54)])})

# === TIN TOWER ===
for fl in range(1,10):
    lv = 44 + fl
    rare = [("GENGAR",lv+6,lv+8),("MISDREAVUS",lv+5,lv+7)] if fl>=6 else [("RATICATE",lv+3,lv+5),("HAUNTER",lv+3,lv+5)]
    E.append({"map":f"MAP_TIN_TOWER_{fl}F","base_label":f"gTinTower{fl}F_Johto",
        "land_mons":land(10,[("RATTATA",lv,lv+3),("GASTLY",lv,lv+3),("RATICATE",lv+1,lv+4),("HAUNTER",lv+1,lv+4),("RATTATA",lv+1,lv+4),("GASTLY",lv+1,lv+4),("RATICATE",lv+2,lv+5),("HAUNTER",lv+2,lv+5),("RATTATA",lv,lv+3),("GASTLY",lv,lv+3),rare[0],rare[1]])})

# === WHIRL ISLANDS ===
E.append({"map":"MAP_WHIRL_ISLANDS_1F","base_label":"gWhirlIslands1F_Johto",
    "land_mons":land(10,[("ZUBAT",48,51),("GOLBAT",48,51),("SEEL",48,51),("KRABBY",48,51),("ZUBAT",49,52),("GOLBAT",49,52),("SEEL",49,52),("KRABBY",49,52),("DEWGONG",50,53),("KINGLER",50,53),("SEEL",48,51),("ZUBAT",49,52)]),
    "water_mons":water(4,[("TENTACOOL",48,52),("HORSEA",48,52),("TENTACRUEL",50,54),("SEADRA",50,54),("KINGDRA",54,56)]),
    "fishing_mons":OF})
E.append({"map":"MAP_WHIRL_ISLANDS_B1F","base_label":"gWhirlIslandsB1F_Johto",
    "land_mons":land(10,[("GOLBAT",50,53),("SEEL",50,53),("KRABBY",50,53),("ZUBAT",49,52),("GOLBAT",51,54),("SEEL",51,54),("DEWGONG",52,55),("KINGLER",52,55),("ZUBAT",50,53),("KRABBY",51,54),("DEWGONG",53,56),("KINGLER",53,56)]),
    "water_mons":water(4,[("HORSEA",48,52),("TENTACOOL",48,52),("SEADRA",50,54),("TENTACRUEL",50,54),("KINGDRA",54,56)]),
    "fishing_mons":OF})
E.append({"map":"MAP_WHIRL_ISLANDS_B2F","base_label":"gWhirlIslandsB2F_Johto",
    "land_mons":land(10,[("GOLBAT",51,54),("SEEL",51,54),("KRABBY",51,54),("DEWGONG",52,55),("GOLBAT",52,55),("SEEL",52,55),("KINGLER",52,55),("DEWGONG",53,56),("ZUBAT",50,53),("KRABBY",52,55),("CROBAT",54,56),("KINGLER",53,56)]),
    "water_mons":water(4,[("HORSEA",50,54),("TENTACOOL",48,52),("SEADRA",52,56),("TENTACRUEL",52,56),("KINGDRA",54,58)]),
    "fishing_mons":OF})

# === MT. MORTAR ===
E.append({"map":"MAP_MT_MORTAR_1F_SOUTH","base_label":"gMtMortar1FSouth_Johto",
    "land_mons":land(10,[("ZUBAT",48,51),("MACHOP",48,51),("GEODUDE",48,51),("RATTATA",48,51),("ZUBAT",49,52),("MACHOP",49,52),("GEODUDE",49,52),("GOLBAT",50,53),("MACHOKE",50,53),("GRAVELER",50,53),("RATICATE",50,53),("MARILL",48,51)]),
    "water_mons":water(4,[("GOLDEEN",48,52),("GOLDEEN",46,50),("SEAKING",50,54),("MAGIKARP",44,48),("SEAKING",52,56)]),
    "fishing_mons":CF})
E.append({"map":"MAP_MT_MORTAR_1F_NORTH","base_label":"gMtMortar1FNorth_Johto",
    "land_mons":land(10,[("ZUBAT",48,51),("MACHOP",48,51),("GEODUDE",48,51),("RATTATA",48,51),("GOLBAT",50,53),("MACHOKE",50,53),("GRAVELER",50,53),("RATICATE",50,53),("ZUBAT",49,52),("MACHOP",49,52),("MARILL",48,51),("AZUMARILL",52,54)]),
    "water_mons":water(4,[("GOLDEEN",48,52),("GOLDEEN",46,50),("SEAKING",50,54),("MAGIKARP",44,48),("SEAKING",52,56)]),
    "fishing_mons":CF})
E.append({"map":"MAP_MT_MORTAR_2F","base_label":"gMtMortar2F_Johto",
    "land_mons":land(10,[("GOLBAT",50,53),("MACHOKE",50,53),("GRAVELER",50,53),("RATICATE",50,53),("GOLBAT",51,54),("MACHOKE",51,54),("GRAVELER",51,54),("ZUBAT",49,52),("MACHOP",49,52),("GEODUDE",49,52),("MARILL",49,52),("AZUMARILL",52,54)])})
E.append({"map":"MAP_MT_MORTAR_B1F","base_label":"gMtMortarB1F_Johto",
    "land_mons":land(10,[("GOLBAT",51,54),("MACHOKE",51,54),("GRAVELER",51,54),("RATICATE",51,54),("GOLBAT",52,55),("MACHOKE",52,55),("GRAVELER",52,55),("MARILL",50,53),("MACHOP",50,53),("GEODUDE",50,53),("TYROGUE",50,53),("AZUMARILL",52,55)]),
    "water_mons":water(4,[("GOLDEEN",50,54),("GOLDEEN",48,52),("SEAKING",52,56),("MAGIKARP",46,50),("SEAKING",54,58)]),
    "fishing_mons":CF})

# === ICE PATH ===
E.append({"map":"MAP_ICE_PATH_1F","base_label":"gIcePath1F_Johto",
    "land_mons":land(10,[("SWINUB",50,53),("ZUBAT",50,53),("GOLBAT",51,54),("JYNX",50,53),("SWINUB",51,54),("DELIBIRD",50,53),("ZUBAT",51,54),("GOLBAT",52,55),("SWINUB",52,55),("JYNX",51,54),("PILOSWINE",54,56),("SNEASEL",52,55)]),
    "rock_smash_mons":rock(20,[("GEODUDE",50,53),("GEODUDE",51,54),("GRAVELER",53,56),("GEODUDE",49,52),("GRAVELER",55,58)])})
E.append({"map":"MAP_ICE_PATH_B1F","base_label":"gIcePathB1F_Johto",
    "land_mons":land(10,[("SWINUB",51,54),("GOLBAT",51,54),("JYNX",51,54),("DELIBIRD",51,54),("SWINUB",52,55),("GOLBAT",52,55),("ZUBAT",51,54),("SWINUB",53,56),("DELIBIRD",52,55),("JYNX",52,55),("PILOSWINE",54,57),("SNEASEL",52,55)])})
E.append({"map":"MAP_ICE_PATH_B2F","base_label":"gIcePathB2F_Johto",
    "land_mons":land(10,[("SWINUB",52,55),("GOLBAT",52,55),("JYNX",52,55),("DELIBIRD",52,55),("SWINUB",53,56),("GOLBAT",53,56),("JYNX",53,56),("DELIBIRD",53,56),("PILOSWINE",54,57),("SNEASEL",53,56),("MAMOSWINE",56,58),("WEAVILE",56,58)])})
E.append({"map":"MAP_ICE_PATH_B3F","base_label":"gIcePathB3F_Johto",
    "land_mons":land(10,[("SWINUB",52,55),("GOLBAT",52,55),("JYNX",52,55),("DELIBIRD",52,55),("SWINUB",53,56),("GOLBAT",53,56),("PILOSWINE",54,57),("SNEASEL",53,56),("JYNX",53,56),("DELIBIRD",53,56),("MAMOSWINE",56,58),("GLACEON",56,58)]),
    "water_mons":water(4,[("SEEL",50,54),("SEEL",48,52),("DEWGONG",52,56),("SEEL",46,50),("DEWGONG",54,58)])})

# === DRAGONS DEN ===
DF = fish(30,[("MAGIKARP",44,48),("MAGIKARP",42,46),("DRATINI",46,50),("MAGIKARP",44,48),("DRATINI",48,52),("DRAGONAIR",50,54),("DRAGONAIR",52,56),("DRATINI",48,52),("DRAGONAIR",54,58),("DRAGONITE",58,60)])
E.append({"map":"MAP_DRAGONS_DEN_CAVERN","base_label":"gDragonsDenCavern_Johto",
    "water_mons":water(4,[("MAGIKARP",50,54),("MAGIKARP",48,52),("DRATINI",50,54),("MAGIKARP",46,50),("DRAGONAIR",54,58)]),
    "fishing_mons":DF})
E.append({"map":"MAP_DRAGONS_DEN_ENTRANCE","base_label":"gDragonsDenEntrance_Johto",
    "water_mons":water(4,[("MAGIKARP",50,54),("MAGIKARP",48,52),("DRATINI",50,54),("MAGIKARP",46,50),("DRAGONAIR",54,58)]),
    "fishing_mons":DF})

# === MT. SILVER ===
E.append({"map":"MAP_MT_SILVER_OUTSIDE","base_label":"gMtSilverOutside_Johto",
    "land_mons":land(15,[("TANGELA",55,58),("PONYTA",55,58),("DODRIO",56,59),("DONPHAN",56,59),("URSARING",56,59),("SNEASEL",55,58),("MURKROW",55,58),("RAPIDASH",57,60),("POLIWHIRL",55,58),("QUAGSIRE",56,59),("TANGROWTH",58,61),("MISDREAVUS",56,59)]),
    "water_mons":water(4,[("POLIWAG",54,58),("POLIWAG",52,56),("POLIWHIRL",56,60),("MAGIKARP",50,54),("POLIWRATH",58,62)]),
    "fishing_mons":FF})
E.append({"map":"MAP_MT_SILVER_MOUNTAIN_SIDE","base_label":"gMtSilverMountainSide_Johto",
    "land_mons":land(10,[("GOLBAT",57,60),("GRAVELER",57,60),("URSARING",58,61),("DONPHAN",58,61),("SNEASEL",57,60),("LARVITAR",55,58),("ONIX",57,60),("MACHOKE",57,60),("GOLDUCK",57,60),("MISDREAVUS",57,60),("PUPITAR",58,61),("WEAVILE",60,62)]),
    "water_mons":water(4,[("GOLDEEN",56,60),("GOLDEEN",54,58),("SEAKING",58,62),("MAGIKARP",52,56),("SEAKING",60,64)]),
    "fishing_mons":CF})
E.append({"map":"MAP_MT_SILVER_2F","base_label":"gMtSilver2F_Johto",
    "land_mons":land(10,[("GOLBAT",58,61),("GRAVELER",58,61),("URSARING",59,62),("DONPHAN",59,62),("SNEASEL",58,61),("LARVITAR",56,59),("ONIX",58,61),("MACHOKE",58,61),("MISDREAVUS",58,61),("GOLDUCK",58,61),("PUPITAR",60,63),("STEELIX",62,64)])})
E.append({"map":"MAP_MT_SILVER_3F","base_label":"gMtSilver3F_Johto",
    "land_mons":land(10,[("GOLBAT",59,62),("GRAVELER",59,62),("URSARING",60,63),("DONPHAN",60,63),("SNEASEL",59,62),("LARVITAR",57,60),("ONIX",59,62),("MACHOKE",59,62),("MISDREAVUS",59,62),("QUAGSIRE",59,62),("PUPITAR",62,65),("TYRANITAR",64,65)])})
E.append({"map":"MAP_MT_SILVER_SNOW","base_label":"gMtSilverSnow_Johto",
    "land_mons":land(10,[("SWINUB",58,61),("GOLBAT",58,61),("SNEASEL",59,62),("DELIBIRD",58,61),("PILOSWINE",60,63),("JYNX",59,62),("SWINUB",59,62),("GOLBAT",59,62),("SNEASEL",60,63),("DELIBIRD",59,62),("MAMOSWINE",62,65),("WEAVILE",62,65)])})

# === TOHJO FALLS ===
E.append({"map":"MAP_TOHJO_FALLS_CAVERN","base_label":"gTohjoFallsCavern_Johto",
    "land_mons":land(10,[("GOLBAT",52,55),("RATTATA",52,55),("RATICATE",53,56),("SLOWPOKE",52,55),("GOLBAT",53,56),("ZUBAT",51,54),("RATICATE",54,57),("SLOWPOKE",53,56),("GOLBAT",54,57),("SLOWBRO",54,57),("CROBAT",56,58),("SLOWKING",56,58)]),
    "water_mons":water(4,[("SLOWPOKE",52,56),("GOLDEEN",50,54),("SLOWBRO",54,58),("MAGIKARP",48,52),("SEAKING",56,60)]),
    "fishing_mons":CF})

# === CLIFF EDGE CAVE ===
E.append({"map":"MAP_CLIFF_EDGE_CAVE","base_label":"gCliffEdgeCave_Johto",
    "land_mons":land(10,[("ZUBAT",50,53),("GOLBAT",51,54),("GEODUDE",50,53),("GRAVELER",51,54),("MISDREAVUS",50,53),("MACHOP",50,53),("KRABBY",50,53),("KINGLER",52,55),("ZUBAT",51,54),("GEODUDE",51,54),("MACHOKE",52,55),("MISMAGIUS",54,56)]),
    "water_mons":water(4,[("TENTACOOL",48,52),("KRABBY",48,52),("TENTACRUEL",50,54),("KINGLER",50,54),("TENTACRUEL",52,56)]),
    "fishing_mons":OF})

# === VICTORY ROAD KANTO ===
E.append({"map":"MAP_VICTORY_ROAD_KANTO_1F","base_label":"gVictoryRoadKanto1F_Johto",
    "land_mons":land(10,[("GOLBAT",52,55),("GRAVELER",52,55),("ONIX",52,55),("MACHOKE",52,55),("RHYHORN",52,55),("GEODUDE",51,54),("GOLBAT",53,56),("GRAVELER",53,56),("ONIX",53,56),("MACHOKE",53,56),("RHYDON",55,58),("RHYPERIOR",58,60)])})
E.append({"map":"MAP_VICTORY_ROAD_KANTO_B1F","base_label":"gVictoryRoadKantoB1F_Johto",
    "land_mons":land(10,[("GOLBAT",53,56),("GRAVELER",53,56),("ONIX",53,56),("MACHOKE",53,56),("RHYHORN",53,56),("GEODUDE",52,55),("GOLBAT",54,57),("GRAVELER",54,57),("ONIX",54,57),("MACHOKE",54,57),("RHYDON",56,59),("STEELIX",58,60)])})

# === RUINS OF ALPH (Unown) ===
E.append({"map":"MAP_RUINS_OF_ALPH_B1F","base_label":"gRuinsOfAlphB1F_Johto",
    "land_mons":land(5,[("UNOWN",40,44),("UNOWN",40,44),("UNOWN",41,45),("UNOWN",41,45),("UNOWN",42,46),("UNOWN",42,46),("UNOWN",43,47),("UNOWN",43,47),("UNOWN",40,44),("UNOWN",41,45),("UNOWN",42,46),("UNOWN",43,47)])})

# === SAFARI ZONE JOHTO ===
for area, label in [("MAP_SAFARI_ZONE1","gSafariZone1_Johto"),("MAP_SAFARI_ZONE2","gSafariZone2_Johto"),("MAP_SAFARI_ZONE3","gSafariZone3_Johto")]:
    E.append({"map":area,"base_label":label,
        "land_mons":land(25,[("GEODUDE",42,46),("MAGIKARP",42,46),("NATU",42,46),("WOOPER",42,46),("MARILL",42,46),("GIRAFARIG",42,46),("MISDREAVUS",43,47),("STANTLER",43,47),("TEDDIURSA",43,47),("LARVITAR",43,47),("XATU",46,48),("URSARING",46,48)]),
        "water_mons":water(4,[("MAGIKARP",42,46),("MAGIKARP",40,44),("GOLDEEN",44,48),("MAGIKARP",38,42),("SEAKING",46,50)]),
        "fishing_mons":FF})

# Safari Zone extensions
for area, label, mons in [
    ("MAP_SAFARI_ZONE_LOW_LEFT","gSafariZoneLowLeft_Johto",[("ODDISH",44,48),("GLOOM",45,49),("BELLSPROUT",44,48),("WEEPINBELL",45,49),("TANGELA",44,48),("EXEGGCUTE",44,48),("HOPPIP",44,48),("SKIPLOOM",45,49),("PARAS",44,48),("PARASECT",46,50),("JUMPLUFF",48,50),("TANGROWTH",50,52)]),
    ("MAP_SAFARI_ZONE_LOW_MID","gSafariZoneLowMid_Johto",[("NIDORAN_F",44,48),("NIDORAN_M",44,48),("NIDORINA",46,50),("NIDORINO",46,50),("RHYHORN",44,48),("PHANPY",44,48),("SANDSHREW",44,48),("CUBONE",44,48),("MAROWAK",46,50),("DONPHAN",46,50),("RHYDON",48,50),("SANDSLASH",48,50)]),
    ("MAP_SAFARI_ZONE_LOW_RIGHT","gSafariZoneLowRight_Johto",[("MAGNEMITE",44,48),("VOLTORB",44,48),("MAGNETON",46,50),("ELECTRODE",46,50),("PIKACHU",44,48),("ELEKID",44,48),("ELECTABUZZ",46,50),("MAREEP",44,48),("FLAAFFY",45,49),("AMPHAROS",48,50),("MAGNEZONE",50,52),("ELECTIVIRE",50,52)]),
    ("MAP_SAFARI_ZONE_TOP_LEFT","gSafariZoneTopLeft_Johto",[("MURKROW",44,48),("MISDREAVUS",44,48),("SNEASEL",44,48),("HOUNDOUR",44,48),("HOUNDOOM",46,50),("ABSOL",44,48),("GASTLY",44,48),("HAUNTER",46,50),("GENGAR",48,50),("MISMAGIUS",48,50),("HONCHKROW",48,50),("WEAVILE",50,52)]),
    ("MAP_SAFARI_ZONE_TOP_MID","gSafariZoneTopMid_Johto",[("PONYTA",44,48),("GROWLITHE",44,48),("VULPIX",44,48),("MAGBY",44,48),("MAGMAR",46,50),("HOUNDOUR",44,48),("SLUGMA",44,48),("MAGCARGO",46,50),("RAPIDASH",48,50),("ARCANINE",48,50),("NINETALES",48,50),("MAGMORTAR",50,52)]),
    ("MAP_SAFARI_ZONE_TOP_RIGHT","gSafariZoneTopRight_Johto",[("SEEL",44,48),("SHELLDER",44,48),("SWINUB",44,48),("SNORUNT",44,48),("DEWGONG",46,50),("CLOYSTER",46,50),("PILOSWINE",46,50),("GLALIE",46,50),("JYNX",46,50),("DELIBIRD",44,48),("MAMOSWINE",48,50),("FROSLASS",50,52)]),
]:
    E.append({"map":area,"base_label":label,"land_mons":land(25,mons)})

print(f"Dungeons added: {len(E)-start}")
print(f"Total encounters: {len(E)}")

with open(os.path.join(BASE, "johto_enc_data.json"), "w") as f:
    json.dump(E, f, indent=2)
print("Saved complete johto_enc_data.json")
