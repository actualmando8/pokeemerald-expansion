#!/usr/bin/env python3
"""
Phase 3: Fix ALL remaining Johto stub scripts.
Identifies label:: followed by \treturn on the next line,
generates appropriate replacement based on label name context.
"""
import os
import re

BASE = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
MAPS_DIR = os.path.join(BASE, "data", "maps")

JOHTO_KW = [
    "NewBark", "Cherrygrove", "Violet", "Azalea", "Goldenrod",
    "Ecruteak", "Olivine", "Cianwood", "Mahogany", "Blackthorn",
    "Ilex", "LakeOfRage", "SproutTower", "TinTower", "WhirlIsland",
    "SlowpokeWell", "IcePath", "UnionCave", "MtSilver", "MtMortar",
    "DarkCave", "DragonsDen", "RadioTower", "NationalPark",
    "BurnedTower", "Tohjo", "SafariZone", "Gate_",
    "Route2", "Route3", "Route4", "Fuchsia",
]

# Must stay as stubs (story triggers, hidden NPCs)
SKIP_RE = re.compile(
    r"(Trigger|Rocket\d|RocketEvent|Silver|Music|Door|Leave|"
    r"Giovanni|KurtBefore|Suicune|Cutscene|PreBattle|"
    r"MerchantTrigger|TriggerSurf|Elm.*Trigger)", re.I)

# Pokemon keywords -> species constant
POKEMON = {
    "Poliwag": "SPECIES_POLIWAG", "Bellsprout": "SPECIES_BELLSPROUT",
    "Pichu": "SPECIES_PICHU", "Eevee": "SPECIES_EEVEE",
    "Vulpix": "SPECIES_VULPIX", "Snubbull": "SPECIES_SNUBBULL",
    "Slowpoke": "SPECIES_SLOWPOKE", "Mime": "SPECIES_MR_MIME",
    "Corsola": "SPECIES_CORSOLA", "Krabby": "SPECIES_KRABBY",
    "Staryu": "SPECIES_STARYU", "Marill": "SPECIES_MARILL",
    "Growlithe": "SPECIES_GROWLITHE", "Seel": "SPECIES_SEEL",
    "Machoke": "SPECIES_MACHOKE", "Gyarados": "SPECIES_GYARADOS",
    "Dragonite": "SPECIES_DRAGONITE", "Miltank": "SPECIES_MILTANK",
    "Tauros": "SPECIES_TAUROS", "Sentret": "SPECIES_SENTRET",
    "Wooper": "SPECIES_WOOPER", "Quagsire": "SPECIES_QUAGSIRE",
    "Ponyta": "SPECIES_PONYTA", "Natu": "SPECIES_NATU",
    "Xatu": "SPECIES_XATU", "Teddiursa": "SPECIES_TEDDIURSA",
    "Murkrow": "SPECIES_MURKROW", "Pidgey": "SPECIES_PIDGEY",
    "Rattata": "SPECIES_RATTATA", "Geodude": "SPECIES_GEODUDE",
    "Machop": "SPECIES_MACHOP", "Magikarp": "SPECIES_MAGIKARP",
    "Dratini": "SPECIES_DRATINI", "Rapidash": "SPECIES_RAPIDASH",
    "Abra": "SPECIES_ABRA", "Ampharos": "SPECIES_AMPHAROS",
    "Oddish": "SPECIES_ODDISH", "Caterpie": "SPECIES_CATERPIE",
    "Weedle": "SPECIES_WEEDLE", "Butterfree": "SPECIES_BUTTERFREE",
    "Beedrill": "SPECIES_BEEDRILL", "Ledyba": "SPECIES_LEDYBA",
    "Spinarak": "SPECIES_SPINARAK", "Scyther": "SPECIES_SCYTHER",
    "Pinsir": "SPECIES_PINSIR", "Heracross": "SPECIES_HERACROSS",
    "Sudowoodo": "SPECIES_SUDOWOODO", "Stantler": "SPECIES_STANTLER",
    "Farfetchd": "SPECIES_FARFETCHD", "Skarmory": "SPECIES_SKARMORY",
    "Houndour": "SPECIES_HOUNDOUR", "Chansey": "SPECIES_CHANSEY",
    "Psyduck": "SPECIES_PSYDUCK", "Meowth": "SPECIES_MEOWTH",
    "Zubat": "SPECIES_ZUBAT", "Golbat": "SPECIES_GOLBAT",
    "Graveler": "SPECIES_GRAVELER", "Onix": "SPECIES_ONIX",
    "Swinub": "SPECIES_SWINUB", "Jynx": "SPECIES_JYNX",
    "Lapras": "SPECIES_LAPRAS", "Tentacool": "SPECIES_TENTACOOL",
    "Goldeen": "SPECIES_GOLDEEN", "Poliwhirl": "SPECIES_POLIWHIRL",
}

POKEMON_TEXTS = {
    "SPECIES_POLIWAG": "POLIWAG is splashing happily.$",
    "SPECIES_BELLSPROUT": "BELLSPROUT is swaying gently.$",
    "SPECIES_PICHU": "PICHU's cheeks are sparking!$",
    "SPECIES_EEVEE": "EEVEE is playing happily.$",
    "SPECIES_VULPIX": "VULPIX is grooming its tails.$",
    "SPECIES_SNUBBULL": "SNUBBULL is wagging its tail.$",
    "SPECIES_SLOWPOKE": "SLOWPOKE is staring blankly.\\n... ... ... ...$",
    "SPECIES_MR_MIME": "MR. MIME is mimicking you!$",
    "SPECIES_MACHOKE": "MACHOKE is flexing proudly.$",
    "SPECIES_GYARADOS": "GYARADOS looks ferocious!$",
    "SPECIES_DRAGONITE": "DRAGONITE gazes calmly.$",
    "SPECIES_MILTANK": "MILTANK is mooing contentedly.$",
    "SPECIES_TAUROS": "TAUROS is pawing the ground!$",
    "SPECIES_PSYDUCK": "PSYDUCK is holding its head.$",
    "SPECIES_MEOWTH": "MEOWTH is purring softly.$",
    "SPECIES_CHANSEY": "CHANSEY is smiling warmly.$",
    "SPECIES_AMPHAROS": "AMPHAROS is glowing brightly!$",
    "SPECIES_LAPRAS": "LAPRAS sings a gentle melody.$",
    "SPECIES_SUDOWOODO": "SUDOWOODO is standing very\\nstill...$",
    "SPECIES_MARILL": "MARILL is bouncing around!$",
}

# Item label patterns (case-insensitive matching)
ITEMS = {
    "hyperpotion": "ITEM_HYPER_POTION", "superpotion": "ITEM_SUPER_POTION",
    "hyper_potion": "ITEM_HYPER_POTION", "super_potion": "ITEM_SUPER_POTION",
    "potion": "ITEM_POTION", "maxpotion": "ITEM_MAX_POTION",
    "max_potion": "ITEM_MAX_POTION",
    "fullrestore": "ITEM_FULL_RESTORE", "full_restore": "ITEM_FULL_RESTORE",
    "fullheal": "ITEM_FULL_HEAL", "full_heal": "ITEM_FULL_HEAL",
    "revive": "ITEM_REVIVE", "maxrevive": "ITEM_MAX_REVIVE",
    "max_revive": "ITEM_MAX_REVIVE",
    "rarecandy": "ITEM_RARE_CANDY", "rare_candy": "ITEM_RARE_CANDY",
    "ultraball": "ITEM_ULTRA_BALL", "ultra_ball": "ITEM_ULTRA_BALL",
    "ether": "ITEM_ETHER", "maxether": "ITEM_MAX_ETHER",
    "max_ether": "ITEM_MAX_ETHER",
    "elixir": "ITEM_ELIXIR", "maxelixir": "ITEM_MAX_ELIXIR",
    "max_elixir": "ITEM_MAX_ELIXIR",
    "nugget": "ITEM_NUGGET", "ppup": "ITEM_PP_UP", "pp_up": "ITEM_PP_UP",
    "calcium": "ITEM_CALCIUM", "iron": "ITEM_IRON",
    "carbos": "ITEM_CARBOS", "protein": "ITEM_PROTEIN",
    "hp_up": "ITEM_HP_UP", "hpup": "ITEM_HP_UP",
    "escaperope": "ITEM_ESCAPE_ROPE", "escape_rope": "ITEM_ESCAPE_ROPE",
    "repel": "ITEM_REPEL", "superrepel": "ITEM_SUPER_REPEL",
    "super_repel": "ITEM_SUPER_REPEL",
    "maxrepel": "ITEM_MAX_REPEL", "max_repel": "ITEM_MAX_REPEL",
    "antidote": "ITEM_ANTIDOTE",
    "pechaberry": "ITEM_PECHA_BERRY", "pecha_berry": "ITEM_PECHA_BERRY",
    "tinymushroom": "ITEM_TINY_MUSHROOM", "starpiece": "ITEM_STAR_PIECE",
    "star_piece": "ITEM_STAR_PIECE",
    "shockwave": "ITEM_TM_SHOCK_WAVE", "sunnyday": "ITEM_TM_SUNNY_DAY",
    "shadowball": "ITEM_TM_SHADOW_BALL",
    "red_flute": "ITEM_RED_FLUTE", "redflute": "ITEM_RED_FLUTE",
    "dragonfang": "ITEM_DRAGON_FANG", "dragon_fang": "ITEM_DRAGON_FANG",
    "tm_shadowball": "ITEM_TM_SHADOW_BALL",
    "tm_waterfall": "ITEM_TM_WATERFALL",
    "tm_whirlpool": "ITEM_TM_WHIRLPOOL",
    "xattack": "ITEM_X_ATTACK", "x_attack": "ITEM_X_ATTACK",
    "xdefend": "ITEM_X_DEFEND", "x_defend": "ITEM_X_DEFEND",
    "xspeed": "ITEM_X_SPEED", "x_speed": "ITEM_X_SPEED",
    "xspecial": "ITEM_X_SPECIAL", "x_special": "ITEM_X_SPECIAL",
    "smokeball": "ITEM_SMOKE_BALL", "smoke_ball": "ITEM_SMOKE_BALL",
    "blackbelt_item": "ITEM_BLACK_BELT",
    "twistedspoon": "ITEM_TWISTED_SPOON",
    "nevermeltice": "ITEM_NEVER_MELT_ICE",
    "magnet": "ITEM_MAGNET",
}

# NPC type -> generic dialogue
NPC_DIALOGUE = {
    "clerk": 'Welcome! Let me know if you\\nneed anything.$',
    "nurse": 'Your POKeMON look healthy!\\nKeep up the good work!$',
    "sailor": 'The seas around JOHTO are\\nfull of adventure!$',
    "fisher": 'Fishing is the best hobby!\\nYou just need patience!$',
    "fisherman": 'The fishing here is great!\\nYou should try it!$',
    "sage": 'Wisdom comes with patience\\nand understanding.$',
    "monk": 'This is a place of training\\nand meditation.$',
    "gentleman": 'Good day! I hope your journey\\nis going well.$',
    "beauty": 'A TRAINER should take care of\\ntheir appearance too!$',
    "lass": 'I love this area! It is so\\npeaceful here.$',
    "youngster": 'I want to be the best TRAINER\\nin all of JOHTO!$',
    "boy": 'POKeMON are so cool! I want\\nto catch them all!$',
    "girl": 'I heard there are rare POKeMON\\nnearby!$',
    "woman": 'Be careful out there! Wild\\nPOKeMON can be dangerous!$',
    "man": 'This is a nice place.\\nThe people here are friendly.$',
    "gramps": "I've seen a lot in my years.\\nTreasure your POKeMON!$",
    "granny": 'Would you like some tea, dear?\\nYou look tired from traveling.$',
    "hiker": 'The caves around JOHTO are\\nfull of surprises!$',
    "blackbelt": 'Hiyaah! A strong body makes\\nfor strong POKeMON!$',
    "cooltrainerf": 'Only the best TRAINERS\\nmake it to the LEAGUE!$',
    "cooltrainerm": 'Keep training! You will get\\nstronger every day!$',
    "cooltrainer": 'Keep pushing yourself!\\nThat is the path to victory!$',
    "pokefanm": 'My POKeMON is the cutest!\\nDo you not agree?$',
    "pokefanf": 'I adore my POKeMON!\\nThey are like family!$',
    "picnicker": 'I love having lunch with\\nmy POKeMON outdoors!$',
    "camper": 'Nothing beats camping under\\nthe stars with POKeMON!$',
    "scientist": 'My research is progressing\\nwell. Fascinating data!$',
    "swimmer": 'The water is perfect today!\\nCome swim with us!$',
    "photographer": 'Say cheese! I love taking\\nphotos of POKeMON!$',
    "engineer": "I am working on improving\\nthe infrastructure here.$",
    "captain": 'Ahoy! The seas are calling!$',
    "nerd": "I have been researching the\\nlocal POKeMON population.$",
    "kid": "I am going to be a TRAINER\\nsomeday! Just you wait!$",
    "twin": 'My sibling and I both love\\nPOKeMON!$',
    "teacher": 'Knowledge is the key to\\nbecoming a great TRAINER!$',
    "bill": "I manage the PC Storage\\nSystem. Need help?$",
    "elm": "POKeMON research never ends!\\nThere is always more to learn!$",
    "oak": 'POKeMON and people live\\ntogether in harmony.$',
    "lance": 'A true champion bonds with\\ntheir POKeMON deeply.$',
    "pryce": 'Years of patience have made\\nme who I am today.$',
    "kurt": 'Bring me APRICORNS and I will\\nmake you a special BALL!$',
    "pharmacist": 'Our herbal remedies work\\nwonders for POKeMON!$',
    "guide": 'Follow me! I will show you\\naround town!$',
    "guardin": 'Please have your pass ready\\nto proceed.$',
    "guard": 'Please have your pass ready\\nto proceed.$',
    "gatekeeper": 'This gate connects the areas.\\nPlease pass through safely.$',
    "hermit": 'I live simply out here.\\nNature is all I need.$',
    "punisher": 'Do not cause trouble around\\nhere, you hear?$',
    "rocker": 'Rock and roll! POKeMON\\nbattles get me fired up!$',
    "bugcatcher": 'BUG POKeMON are the best!\\nI love catching them!$',
    "birdkeeper": 'My bird POKeMON soar through\\nthe skies!$',
    "ace_trainer": 'Only strong TRAINERS can\\nhandle this area!$',
    "receptionist": 'Welcome! How may I help you?$',
    "gymguide": 'Yo! CHAMP in the making!\\nGood luck in the GYM!$',
    "elderli": 'Take care on your journey,\\nyoungster.$',
    "attendant": 'Welcome! Please let me know\\nif you need assistance.$',
    "husband": 'I love spending time with\\nmy family and POKeMON.$',
    "wife": 'My husband works so hard.\\nI appreciate him!$',
    "daughter": 'I love POKeMON! They are\\nso cute!$',
    "son": 'I want to go on a POKeMON\\njourney someday!$',
    "granddaughter": 'Grandpa is the best!\\nHe knows everything!$',
}

# Map-specific sign texts
SIGN_TEXTS = {}


def get_suffix(label):
    """Extract the part after EventScript_ or Script_"""
    for sep in ["EventScript_", "EventScript", "Script_", "Script"]:
        if sep in label:
            idx = label.index(sep) + len(sep)
            return label[idx:].rstrip(":")
    return label.rstrip(":")


def should_skip(label):
    suffix = get_suffix(label)
    if SKIP_RE.search(suffix):
        return True
    # Skip MapScripts
    if "MapScripts" in label:
        return True
    return False


def find_pokemon(suffix):
    """Check if suffix contains a Pokemon name"""
    s_lower = suffix.lower()
    for name, species in POKEMON.items():
        if name.lower() in s_lower:
            return species
    return None


def find_item(suffix):
    """Check if suffix indicates an item pickup"""
    s_lower = suffix.lower()
    # Must have "item" somewhere in the label for item pickups
    if "item" not in s_lower:
        return None
    # Try each pattern
    for pat, const in ITEMS.items():
        if pat in s_lower:
            return const
    # Fallback: if label is just "Item_Something", try the Something part
    parts = suffix.split("_")
    for p in parts:
        pl = p.lower()
        if pl in ITEMS:
            return ITEMS[pl]
    return None


def is_sign_label(suffix):
    s_lower = suffix.lower()
    return any(w in s_lower for w in ["sign", "blackboard", "bookshelf",
                                       "panel", "poster", "plaque",
                                       "notice", "bulletin", "book",
                                       "statue"])


def find_npc_type(suffix):
    s_lower = suffix.lower()
    for npc_type, dialogue in NPC_DIALOGUE.items():
        if npc_type in s_lower:
            return dialogue
    return None


def make_text_label(label):
    """Convert EventScript label to Text label"""
    lbl = label.rstrip(":")
    lbl = lbl.replace("EventScript_", "Text_")
    lbl = lbl.replace("EventScript", "Text_")
    lbl = lbl.replace("Script_", "Text_")
    lbl = lbl.replace("Script", "Text_")
    # Clean up double underscores
    while "__" in lbl:
        lbl = lbl.replace("__", "_")
    return lbl


def generate_sign_text(label, map_name):
    """Generate appropriate sign text based on context"""
    suffix = get_suffix(label)
    s = suffix.lower()
    # City/Town sign
    if "citysign" in s or "townsign" in s or s == "sign":
        clean = map_name.replace("_", " ")
        return clean + "$"
    if "gymsign" in s:
        return map_name.replace("_", " ") + " GYM$"
    # Generic
    clean = map_name.replace("_", " ")
    return clean + "$"


def process_file(filepath):
    with open(filepath, "r", encoding="utf-8") as f:
        lines = f.readlines()

    map_name = os.path.basename(os.path.dirname(filepath))
    new_lines = []
    new_texts = []
    modified = False
    existing_labels = set()
    i = 0

    # First pass: collect existing text labels to avoid duplicates
    for line in lines:
        m = re.match(r'^(\S+):', line)
        if m:
            existing_labels.add(m.group(1).rstrip(":"))

    while i < len(lines):
        line = lines[i]
        # Check for label:: on this line
        label_match = re.match(r'^(\S+)::\s*$', line.rstrip())

        if (label_match and i + 1 < len(lines)
                and lines[i + 1].strip() == "return"):
            label = label_match.group(1)
            suffix = get_suffix(label)

            # Skip story triggers etc.
            if should_skip(label):
                new_lines.append(line)
                i += 1
                continue

            text_label = make_text_label(label)

            # --- Item pickup ---
            item = find_item(suffix)
            if item:
                new_lines.append(line)
                new_lines.append("\tfinditem " + item + "\n")
                new_lines.append("\tend\n")
                i += 2  # skip label + return
                modified = True
                continue

            # --- Pokemon overworld ---
            species = find_pokemon(suffix)
            if species:
                poke_text = POKEMON_TEXTS.get(
                    species, suffix.upper() + " looks content.$")
                new_lines.append(line)
                new_lines.append("\tlock\n")
                new_lines.append(
                    "\tplaymoncry " + species + ", CRY_MODE_NORMAL\n")
                new_lines.append(
                    "\tmsgbox " + text_label + ", MSGBOX_DEFAULT\n")
                new_lines.append("\twaitmoncry\n")
                new_lines.append("\trelease\n")
                new_lines.append("\tend\n")
                if text_label not in existing_labels:
                    new_texts.append(
                        "\n" + text_label + ":\n"
                        '\t.string "' + poke_text + '"\n')
                    existing_labels.add(text_label)
                i += 2
                modified = True
                continue

            # --- Sign / object interaction ---
            if is_sign_label(suffix):
                sign_text = generate_sign_text(label, map_name)
                new_lines.append(line)
                new_lines.append(
                    "\tmsgbox " + text_label + ", MSGBOX_SIGN\n")
                new_lines.append("\tend\n")
                if text_label not in existing_labels:
                    new_texts.append(
                        "\n" + text_label + ":\n"
                        '\t.string "' + sign_text + '"\n')
                    existing_labels.add(text_label)
                i += 2
                modified = True
                continue

            # --- NPC dialogue ---
            dialogue = find_npc_type(suffix)
            if dialogue:
                new_lines.append(line)
                new_lines.append(
                    "\tmsgbox " + text_label + ", MSGBOX_NPC\n")
                new_lines.append("\tend\n")
                if text_label not in existing_labels:
                    new_texts.append(
                        "\n" + text_label + ":\n"
                        '\t.string "' + dialogue + '"\n')
                    existing_labels.add(text_label)
                i += 2
                modified = True
                continue

            # --- Fallback: generic NPC ---
            # Only if it looks like an NPC (not a coordinate event)
            if suffix and not suffix[0].isdigit():
                fallback = '...$'
                new_lines.append(line)
                new_lines.append(
                    "\tmsgbox " + text_label + ", MSGBOX_NPC\n")
                new_lines.append("\tend\n")
                if text_label not in existing_labels:
                    new_texts.append(
                        "\n" + text_label + ":\n"
                        '\t.string "' + fallback + '"\n')
                    existing_labels.add(text_label)
                i += 2
                modified = True
                continue

        new_lines.append(line)
        i += 1

    if modified:
        # Append new text labels at end of file
        content = "".join(new_lines)
        if new_texts:
            # Ensure file ends with newline before adding texts
            if not content.endswith("\n"):
                content += "\n"
            content += "".join(new_texts)
            if not content.endswith("\n"):
                content += "\n"
        with open(filepath, "w", encoding="utf-8") as f:
            f.write(content)
        return True
    return False


def is_johto_map(dirname):
    name = os.path.basename(dirname)
    if re.match(r"Route(2[6-9]|3\d|4[0-8])", name):
        return True
    return any(kw.lower() in name.lower() for kw in JOHTO_KW)


def main():
    fixed = 0
    for entry in sorted(os.listdir(MAPS_DIR)):
        map_dir = os.path.join(MAPS_DIR, entry)
        if not os.path.isdir(map_dir):
            continue
        if not is_johto_map(map_dir):
            continue
        script_file = os.path.join(map_dir, "scripts.inc")
        if not os.path.exists(script_file):
            continue
        # Quick check: does file contain a stub?
        with open(script_file, "r") as f:
            content = f.read()
        if "\treturn\n" not in content:
            continue
        if process_file(script_file):
            fixed += 1
            print("Fixed:", entry)
    print(f"\nTotal fixed: {fixed} files")


if __name__ == "__main__":
    main()
