#!/usr/bin/env python3
"""Generate Johto wild encounters based on HGSS+Crystal. Cross-gen evos in rare slots."""
import json, os

TARGET = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))),
                      "src", "data", "wild_encounters.json")

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

FF = fish(30,[("MAGIKARP",35,38),("MAGIKARP",35,40),("POLIWAG",38,42),("MAGIKARP",38,42),("GOLDEEN",38,42),("POLIWAG",42,48),("POLIWHIRL",44,50),("GOLDEEN",42,48),("SEAKING",44,50),("GYARADOS",48,52)])
OF = fish(30,[("MAGIKARP",35,38),("MAGIKARP",35,40),("TENTACOOL",38,42),("KRABBY",38,42),("HORSEA",38,42),("TENTACRUEL",44,50),("KINGLER",44,50),("SEADRA",44,50),("STARYU",42,48),("SHELLDER",42,48)])
CF = fish(15,[("MAGIKARP",35,38),("MAGIKARP",35,40),("GOLDEEN",38,42),("MAGIKARP",38,42),("BARBOACH",38,42),("GOLDEEN",42,48),("SEAKING",44,50),("WHISCASH",46,52),("GYARADOS",48,52),("MAGIKARP",42,48)])

E = []  # encounters list

# ROUTES
E.append({"map":"MAP_ROUTE29","base_label":"gRoute29_Johto","land_mons":land(20,[("PIDGEY",35,37),("SENTRET",35,37),("PIDGEY",36,38),("SENTRET",36,38),("RATTATA",35,37),("RATTATA",36,38),("HOOTHOOT",35,37),("SPINARAK",35,37),("AIPOM",36,38),("POLIWAG",35,37),("DITTO",38,40),("FURRET",38,40)])})
E.append({"map":"MAP_ROUTE30","base_label":"gRoute30_Johto","land_mons":land(20,[("PIDGEY",36,38),("CATERPIE",36,38),("METAPOD",36,38),("WEEDLE",36,38),("KAKUNA",36,38),("POLIWAG",36,38),("LEDYBA",36,38),("SPINARAK",36,38),("ZUBAT",36,38),("PIDGEY",37,39),("CATERPIE",37,39),("BUTTERFREE",38,40)]),"water_mons":water(4,[("POLIWAG",38,42),("POLIWAG",36,40),("POLIWHIRL",40,44),("POLIWAG",35,38),("POLIWHIRL",42,46)]),"fishing_mons":FF})
E.append({"map":"MAP_ROUTE31","base_label":"gRoute31_Johto","land_mons":land(20,[("PIDGEY",36,38),("BELLSPROUT",36,38),("CATERPIE",36,38),("WEEDLE",36,38),("METAPOD",37,39),("KAKUNA",37,39),("LEDYBA",36,38),("SPINARAK",36,38),("ZUBAT",36,38),("POLIWAG",36,38),("BELLSPROUT",37,39),("HOPPIP",37,39)]),"water_mons":water(4,[("POLIWAG",38,42),("POLIWAG",36,40),("POLIWHIRL",40,44),("POLIWAG",35,38),("POLITOED",44,48)]),"fishing_mons":FF})
E.append({"map":"MAP_ROUTE32","base_label":"gRoute32_Johto","land_mons":land(20,[("EKANS",38,41),("BELLSPROUT",38,41),("RATTATA",38,41),("MAREEP",38,41),("HOPPIP",38,41),("WOOPER",38,41),("ZUBAT",38,41),("EKANS",39,42),("BELLSPROUT",39,42),("MAREEP",39,42),("RATTATA",39,42),("FLAAFFY",42,44)]),"water_mons":water(4,[("TENTACOOL",38,42),("TENTACOOL",36,40),("TENTACRUEL",42,46),("QUAGSIRE",42,46),("TENTACRUEL",44,48)]),"fishing_mons":fish(30,[("MAGIKARP",35,38),("MAGIKARP",35,40),("TENTACOOL",38,42),("MAGIKARP",38,42),("QWILFISH",38,42),("TENTACOOL",42,48),("TENTACRUEL",44,50),("QWILFISH",42,48),("REMORAID",42,48),("OCTILLERY",46,50)])})
E.append({"map":"MAP_ROUTE33","base_label":"gRoute33_Johto","land_mons":land(20,[("RATTATA",38,41),("HOPPIP",38,41),("EKANS",38,41),("GEODUDE",38,41),("ZUBAT",38,41),("RATTATA",39,42),("HOPPIP",39,42),("SPEAROW",38,41),("GEODUDE",39,42),("EKANS",39,42),("RATTATA",40,42),("SKIPLOOM",42,44)])})
E.append({"map":"MAP_ROUTE34","base_label":"gRoute34_Johto","land_mons":land(25,[("RATTATA",42,45),("ABRA",42,45),("DROWZEE",42,45),("DITTO",42,45),("RATTATA",43,46),("ABRA",43,46),("DROWZEE",43,46),("JIGGLYPUFF",42,45),("PIDGEY",42,45),("PIDGEOTTO",44,47),("SNUBBULL",42,45),("RALTS",42,45)]),"water_mons":water(4,[("TENTACOOL",40,44),("TENTACOOL",38,42),("TENTACRUEL",44,48),("STARYU",42,46),("TENTACRUEL",46,50)]),"fishing_mons":OF})
E.append({"map":"MAP_ROUTE35","base_label":"gRoute35_Johto","land_mons":land(25,[("PIDGEY",42,45),("NIDORAN_F",42,45),("NIDORAN_M",42,45),("GROWLITHE",42,45),("ABRA",42,45),("DITTO",42,45),("YANMA",42,45),("PIDGEY",43,46),("NIDORAN_F",43,46),("NIDORAN_M",43,46),("SNUBBULL",42,45),("YANMEGA",48,50)]),"water_mons":water(4,[("PSYDUCK",42,46),("PSYDUCK",40,44),("GOLDUCK",44,48),("PSYDUCK",38,42),("GOLDUCK",46,50)]),"fishing_mons":FF})
E.append({"map":"MAP_ROUTE36","base_label":"gRoute36_Johto","land_mons":land(20,[("PIDGEY",44,47),("STANTLER",44,47),("BELLSPROUT",44,47),("GROWLITHE",44,47),("NIDORAN_F",44,47),("NIDORAN_M",44,47),("VULPIX",44,47),("PIDGEOTTO",45,48),("STANTLER",45,48),("HOOTHOOT",44,47),("SUDOWOODO",44,47),("STANTLER",46,48)])})
E.append({"map":"MAP_ROUTE37","base_label":"gRoute37_Johto","land_mons":land(20,[("PIDGEY",44,47),("PIDGEOTTO",45,48),("STANTLER",44,47),("GROWLITHE",44,47),("VULPIX",44,47),("LEDYBA",44,47),("SPINARAK",44,47),("NOCTOWL",46,49),("STANTLER",45,48),("ARIADOS",46,49),("LEDIAN",46,49),("ARCANINE",50,52)])})
E.append({"map":"MAP_ROUTE38","base_label":"gRoute38_Johto","land_mons":land(20,[("RATICATE",46,49),("MEOWTH",46,49),("TAUROS",46,49),("MILTANK",46,49),("MAGNEMITE",46,49),("FARFETCHD",46,49),("RATTATA",46,49),("SNUBBULL",46,49),("RATICATE",47,50),("MEOWTH",47,50),("PERSIAN",48,51),("MAGNETON",50,52)])})
E.append({"map":"MAP_ROUTE39","base_label":"gRoute39_Johto","land_mons":land(20,[("RATICATE",46,49),("MEOWTH",46,49),("TAUROS",46,49),("MILTANK",46,49),("MAGNEMITE",46,49),("FARFETCHD",46,49),("RATTATA",46,49),("MEOWTH",47,50),("RATICATE",47,50),("PERSIAN",48,51),("MILTANK",47,50),("MAGNEZONE",52,54)])})
E.append({"map":"MAP_ROUTE40","base_label":"gRoute40_Johto","water_mons":water(10,[("TENTACOOL",46,50),("TENTACOOL",44,48),("TENTACRUEL",48,52),("TENTACOOL",42,46),("TENTACRUEL",50,54)]),"fishing_mons":OF})
E.append({"map":"MAP_ROUTE41","base_label":"gRoute41_Johto","water_mons":water(10,[("TENTACOOL",46,50),("TENTACRUEL",48,52),("MANTINE",48,52),("TENTACOOL",44,48),("MANTINE",50,54)]),"fishing_mons":fish(30,[("MAGIKARP",35,38),("MAGIKARP",35,40),("TENTACOOL",38,42),("CHINCHOU",38,42),("HORSEA",38,42),("TENTACRUEL",44,50),("LANTURN",46,52),("SEADRA",44,50),("CHINCHOU",42,48),("SHELLDER",42,48)])})
E.append({"map":"MAP_ROUTE42","base_label":"gRoute42_Johto","land_mons":land(20,[("MANKEY",48,51),("SPEAROW",48,51),("MAREEP",48,51),("FLAAFFY",48,51),("RATTATA",48,51),("RATICATE",49,52),("MANKEY",49,52),("SPEAROW",49,52),("FEAROW",50,53),("PRIMEAPE",50,53),("FLAAFFY",49,52),("AMBIPOM",52,54)]),"water_mons":water(4,[("GOLDEEN",46,50),("GOLDEEN",44,48),("SEAKING",48,52),("GOLDEEN",42,46),("SEAKING",50,54)]),"fishing_mons":FF})
E.append({"map":"MAP_ROUTE43","base_label":"gRoute43_Johto","land_mons":land(20,[("PIDGEOTTO",48,51),("FLAAFFY",48,51),("GIRAFARIG",48,51),("VENONAT",48,51),("PIDGEOTTO",49,52),("FLAAFFY",49,52),("GIRAFARIG",49,52),("NOCTOWL",49,52),("VENOMOTH",50,53),("FARFETCHD",48,51),("RATICATE",49,52),("AMPHAROS",52,54)]),"water_mons":water(4,[("MAGIKARP",46,50),("MAGIKARP",44,48),("MAGIKARP",48,52),("MAGIKARP",42,46),("GYARADOS",50,54)]),"fishing_mons":FF})
E.append({"map":"MAP_ROUTE44","base_label":"gRoute44_Johto","land_mons":land(20,[("TANGELA",50,53),("LICKITUNG",50,53),("POLIWAG",50,53),("POLIWHIRL",50,53),("BELLSPROUT",50,53),("WEEPINBELL",50,53),("TANGELA",51,54),("LICKITUNG",51,54),("POLIWHIRL",51,54),("WEEPINBELL",51,54),("TANGROWTH",54,56),("LICKILICKY",54,56)]),"water_mons":water(4,[("POLIWAG",48,52),("POLIWAG",46,50),("POLIWHIRL",50,54),("MAGIKARP",44,48),("POLIWRATH",52,56)]),"fishing_mons":FF})
E.append({"map":"MAP_ROUTE45","base_label":"gRoute45_Johto","land_mons":land(20,[("GEODUDE",50,53),("GRAVELER",51,54),("GLIGAR",50,53),("TEDDIURSA",50,53),("DONPHAN",52,55),("SKARMORY",50,53),("GEODUDE",51,54),("GLIGAR",51,54),("TEDDIURSA",51,54),("PHANPY",50,53),("URSARING",54,56),("GLISCOR",54,56)]),"water_mons":water(4,[("MAGIKARP",48,52),("MAGIKARP",46,50),("GOLDEEN",50,54),("MAGIKARP",44,48),("GYARADOS",52,56)]),"fishing_mons":FF})
E.append({"map":"MAP_ROUTE46","base_label":"gRoute46_Johto","land_mons":land(20,[("GEODUDE",36,39),("SPEAROW",36,39),("RATTATA",36,39),("JIGGLYPUFF",36,39),("GEODUDE",37,40),("SPEAROW",37,40),("RATTATA",37,40),("GEODUDE",38,41),("SPEAROW",38,41),("RATTATA",38,41),("PHANPY",38,41),("GRAVELER",40,42)])})
E.append({"map":"MAP_ROUTE47","base_label":"gRoute47_Johto","land_mons":land(20,[("DITTO",50,54),("MILTANK",50,54),("FARFETCHD",50,54),("GLOOM",50,54),("RATICATE",50,54),("FEAROW",50,54),("DITTO",51,55),("MILTANK",51,55),("RATICATE",51,55),("PERSIAN",51,55),("VILEPLUME",54,56),("BELLOSSOM",54,56)]),"water_mons":water(4,[("TENTACOOL",48,52),("TENTACOOL",46,50),("TENTACRUEL",50,54),("SEEL",48,52),("DEWGONG",52,56)]),"fishing_mons":OF})
E.append({"map":"MAP_ROUTE48","base_label":"gRoute48_Johto","land_mons":land(20,[("HOPPIP",50,54),("FARFETCHD",50,54),("TAUROS",50,54),("GLOOM",50,54),("DIGLETT",50,54),("VULPIX",50,54),("SKIPLOOM",51,55),("FEAROW",51,55),("TAUROS",51,55),("DIGLETT",51,55),("DUGTRIO",54,56),("JUMPLUFF",54,56)])})
E.append({"map":"MAP_ROUTE26","base_label":"gRoute26_Johto","land_mons":land(20,[("DODUO",52,56),("PONYTA",52,56),("RATICATE",52,56),("ARBOK",52,56),("SANDSLASH",52,56),("DODRIO",54,58),("RAPIDASH",54,58),("FEAROW",54,58),("RATICATE",54,58),("NOCTOWL",54,58),("QUAGSIRE",54,58),("URSARING",56,58)]),"water_mons":water(4,[("TENTACOOL",50,54),("TENTACOOL",48,52),("TENTACRUEL",52,56),("TENTACOOL",46,50),("TENTACRUEL",54,58)]),"fishing_mons":OF})
E.append({"map":"MAP_ROUTE26NORTH","base_label":"gRoute26North_Johto","land_mons":land(20,[("DODUO",52,56),("PONYTA",52,56),("RATICATE",52,56),("SANDSLASH",52,56),("ARBOK",52,56),("DODRIO",54,58),("RAPIDASH",54,58),("FEAROW",54,58),("NOCTOWL",54,58),("QUAGSIRE",54,58),("URSARING",56,58),("DONPHAN",56,58)])})
E.append({"map":"MAP_ROUTE27","base_label":"gRoute27_Johto","land_mons":land(20,[("DODUO",52,56),("PONYTA",52,56),("RATICATE",52,56),("ARBOK",52,56),("SANDSLASH",52,56),("QUAGSIRE",52,56),("DODRIO",54,58),("RAPIDASH",54,58),("NOCTOWL",54,58),("FEAROW",54,58),("PONYTA",54,58),("DODRIO",56,58)]),"water_mons":water(4,[("TENTACOOL",50,54),("TENTACOOL",48,52),("TENTACRUEL",52,56),("TENTACOOL",46,50),("TENTACRUEL",54,58)]),"fishing_mons":OF})
E.append({"map":"MAP_ROUTE28","base_label":"gRoute28_Johto","land_mons":land(20,[("PONYTA",55,58),("RAPIDASH",56,59),("TANGELA",55,58),("URSARING",56,59),("DONPHAN",56,59),("ARBOK",55,58),("SNEASEL",55,58),("MURKROW",55,58),("POLIWHIRL",55,58),("DODRIO",56,59),("TANGROWTH",58,60),("WEAVILE",58,60)]),"water_mons":water(4,[("POLIWAG",52,56),("POLIWAG",50,54),("POLIWHIRL",54,58),("MAGIKARP",48,52),("POLIWRATH",56,60)]),"fishing_mons":FF})

print(f"Routes: {len(E)} encounters")

# TOWNS
E.append({"map":"MAP_LAKE_OF_RAGE","base_label":"gLakeOfRage_Johto","land_mons":land(20,[("RATICATE",48,52),("FEAROW",48,52),("VENONAT",48,52),("VENOMOTH",49,53),("PIDGEOTTO",48,52),("RATICATE",49,53),("FEAROW",49,53),("VENONAT",49,53),("NOCTOWL",50,53),("PIDGEOTTO",50,53),("VENOMOTH",50,54),("DITTO",50,54)]),"water_mons":water(10,[("MAGIKARP",48,52),("MAGIKARP",46,50),("GYARADOS",50,54),("MAGIKARP",44,48),("GYARADOS",52,56)]),"fishing_mons":fish(30,[("MAGIKARP",35,38),("MAGIKARP",35,40),("MAGIKARP",40,44),("MAGIKARP",38,42),("MAGIKARP",38,42),("GYARADOS",44,50),("GYARADOS",46,52),("MAGIKARP",42,48),("GYARADOS",48,54),("GYARADOS",50,56)])})
E.append({"map":"MAP_NATIONAL_PARK_NORMAL","base_label":"gNationalParkNormal_Johto","land_mons":land(20,[("CATERPIE",44,47),("METAPOD",44,47),("BUTTERFREE",45,48),("WEEDLE",44,47),("KAKUNA",44,47),("BEEDRILL",45,48),("PIDGEY",44,47),("PIDGEOTTO",45,48),("SUNKERN",44,47),("HOOTHOOT",44,47),("SUNFLORA",48,50),("YANMEGA",50,52)])})
E.append({"map":"MAP_NATIONAL_PARK_BUG_CONTEST","base_label":"gNationalParkBugContest_Johto","land_mons":land(25,[("CATERPIE",44,47),("WEEDLE",44,47),("SCYTHER",46,49),("PINSIR",46,49),("BUTTERFREE",46,49),("BEEDRILL",46,49),("VENONAT",44,47),("PARAS",44,47),("WURMPLE",44,47),("NINCADA",44,47),("HERACROSS",48,50),("VOLBEAT",48,50)])})
E.append({"map":"MAP_BELLCHIME_TRAIL","base_label":"gBellchimeTrail_Johto","land_mons":land(15,[("PIDGEY",44,47),("PIDGEOTTO",45,48),("BELLSPROUT",44,47),("ODDISH",44,47),("HOOTHOOT",44,47),("NOCTOWL",46,49),("LEDYBA",44,47),("SPINARAK",44,47),("SUNKERN",44,47),("STANTLER",45,48),("SUNFLORA",48,50),("WEEPINBELL",46,49)])})

print(f"Towns+parks: {len(E)} total")
# Save part 1
with open(os.path.join(os.path.dirname(os.path.abspath(__file__)),"johto_enc_data.json"),"w") as f:
    json.dump(E, f, indent=2)
print("Saved part 1 (routes+towns)")
