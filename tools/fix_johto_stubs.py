#!/usr/bin/env python3
"""
Phase 2: Fix broken string formatting in generated Johto scripts.
The initial generator missed \\n between .string lines and broke multi-line strings.
"""

import os
import re
import glob

BASE = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
MAPS_DIR = os.path.join(BASE, "data", "maps")

# Johto map name patterns
JOHTO_PATTERNS = [
    "NewBark", "Cherrygrove", "Violet", "Azalea", "Goldenrod", "Ecruteak",
    "Olivine", "Cianwood", "Mahogany", "Blackthorn", "Ilex", "LakeOfRage",
    "Route2[6-9]", "Route3[0-9]", "Route4[0-8]", "SproutTower", "TinTower",
    "WhirlIslands", "SlowpokeWell", "IcePath", "UnionCave", "MtSilver",
    "MtMortar", "DarkCave", "DragonsDen", "RadioTower", "NationalPark",
    "BurnedTower", "Tohjo", "Gate_Azalea", "Gate_Ilex", "Gate_Route",
    "Gate_Goldenrod", "Gate_Ecruteak", "Gate_Olivine", "Gate_Cianwood",
    "Gate_Mahogany", "Gate_Blackthorn", "Gate_LakeOfRage", "Gate_NationalPark",
    "SafariZoneGate_Pokemon", "SafariZoneGate_Safari",
    "Route26", "Route27", "Route28", "Route29", "Route30", "Route31",
    "Route32", "Route33", "Route34", "Route35", "Route36", "Route37",
    "Route38", "Route39", "Route40", "Route41", "Route42", "Route43",
    "Route44", "Route45", "Route46", "Route47", "Route48",
]

# NPC dialogue templates based on common label name patterns
# Format: (regex_pattern_on_label, dialogue_text)
# We match the last part of the label (after EventScript_)

NPC_DIALOGUE = {
    # Generic NPC types
    "Lass": "I love walking around town.\n"
            "The fresh air is wonderful!$",
    "Youngster": "I want to catch every kind of\n"
                 "POKeMON in JOHTO!$",
    "Boy": "Did you know there are POKeMON\n"
           "you can only find at night?$",
    "Girl": "I heard some POKeMON only evolve\n"
            "when they really trust you!$",
    "Gramps": "I've lived in JOHTO my whole life.\n"
              "It's a beautiful region.\p"
              "Take your time and enjoy\n"
              "the journey, youngster.$",
    "FatMan": "Heh heh! POKeMON are amazing\n"
              "companions! I go everywhere\l"
              "with mine!$",
    "Woman": "Be sure to stock up on supplies\n"
             "before heading out on your\l"
             "journey!$",
    "Man": "JOHTO has so many places to\n"
           "explore. Have you been to\l"
           "the NATIONAL PARK yet?$",
    "Beauty": "A true TRAINER cares for their\n"
              "POKeMON's beauty as well\l"
              "as their strength!$",
    "Hiker": "The mountains of JOHTO are\n"
             "treacherous but rewarding.\p"
             "Be sure to bring ROCK SMASH!$",
    "Fisher": "You can fish up all sorts of\n"
              "rare POKeMON in JOHTO's waters!\p"
              "You just need patience!$",
    "Fisherman": "The fishing spots around JOHTO\n"
                 "are some of the best in the\l"
                 "world!$",
    "Gentleman": "Ah, a fellow TRAINER.\n"
                 "Best of luck on your travels!$",
    "PokefanM": "My POKeMON is the cutest!\n"
                "Don't you think so too?$",
    "PokefanF": "I just adore my POKeMON!\n"
                "They're like family to me!$",
    "Cooltrainer": "Only serious TRAINERS make it\n"
                   "to the POKeMON LEAGUE.\p"
                   "Are you up to the challenge?$",
    "CooltrainerF": "Training POKeMON isn't just\n"
                    "about winning battles.\p"
                    "It's about building bonds.$",
    "CooltrainerM": "A strong TRAINER raises their\n"
                    "POKeMON with care and\l"
                    "dedication.$",
    "Picnicker": "I love having picnics with my\n"
                 "POKeMON in the open fields!$",
    "Camper": "Camping out under the stars\n"
              "with your POKeMON is the best!$",
    "Sage": "The path of the TRAINER is\n"
            "a journey of patience and\l"
            "understanding.$",
    "Monk": "This place has been sacred\n"
            "for generations.$",
    "BlackBelt": "Hiyaah! Train your body and\n"
                 "your POKeMON will follow!$",
    "Swimmer": "The ocean around JOHTO has\n"
               "some amazing water POKeMON!$",
    "Ace": "Only elite TRAINERS reach\n"
           "the top. Keep pushing!$",
    "Scientist": "My research is almost complete.\n"
                 "POKeMON never cease to amaze\l"
                 "me!$",
    "Kid": "I'm going to get my first\n"
           "POKeMON soon! I can't wait!$",
    "Baldingman": "When I was young, I traveled\n"
                  "across JOHTO with my POKeMON.\p"
                  "Those were the days...$",
    "GuideGent": "Welcome to CHERRYGROVE CITY!\p"
                 "The sea to the south and\n"
                 "ROUTE 30 to the north are\l"
                 "worth exploring.$",
    "Kyle": "I trade POKeMON with my friend\n"
            "all the time! Trading makes\l"
            "POKeMON grow faster!$",
    "Rudy": "Hey, did you know ONIX can\n"
            "evolve if you trade it while\l"
            "it's holding a METAL COAT?$",
    "Mother": "Please be careful out there.\n"
              "Wild POKeMON can be dangerous!$",
    "Daughter": "I want to travel the world\n"
               "with POKeMON when I grow up!$",
    "Son": "My dad says JOHTO has the\n"
           "best POKeMON in the world!$",
    "Father": "Take good care of your\n"
              "POKeMON, and they'll take\l"
              "care of you.$",
    "Wife": "My husband loves talking about\n"
            "POKeMON battles. He's always\l"
            "watching the TV for tips!$",
    "Husband": "You know what's great about\n"
               "JOHTO? The variety of POKeMON\l"
               "you can find!$",
    "ElmsSon": "My dad works at the lab all\n"
               "day and all night!\p"
               "I want to be a POKeMON\n"
               "researcher too someday!$",
    "ElmsWife": "My husband is always at the\n"
                "lab. I sometimes bring him\l"
                "meals so he doesn't forget\l"
                "to eat.$",
    "Earl": "EARL I am! Good at teaching!\n"
            "Come to my school and learn\l"
            "all about POKeMON!$",
    "Bugcatcher": "Have you tried looking for\n"
                  "Bug POKeMON in tall grass?\p"
                  "Some of them are really rare!$",
    "Pharmacist": "If your POKeMON are hurt,\n"
                  "I can prepare medicine.\p"
                  "The herbs are bitter, but\n"
                  "they work wonders!$",
    "Clerk": "Welcome! Let me know if you\n"
             "need anything.$",
    "SilverMother": "My son... He left home a\n"
                    "long time ago.\p"
                    "I just hope he's doing\n"
                    "well wherever he is...$",
    "Kimono": "The KIMONO GIRLS dance for\n"
              "the legendary POKeMON.\p"
              "It is a tradition passed down\n"
              "through generations.$",
    "Elder": "The legends say that a great\n"
             "bird once roosted atop\l"
             "TIN TOWER.\p"
             "Those who prove their worth\n"
             "may yet see it again.$",
    "Kurt": "I'm KURT! I make POKe BALLS\n"
            "from APRICORNS.\p"
            "Bring me some APRICORNS and\n"
            "I'll craft something special!$",
    "Sailor": "The sea routes around JOHTO\n"
              "can be treacherous.\p"
              "Make sure your POKeMON know\n"
              "SURF before heading out!$",
    "Captain": "Ahoy! OLIVINE PORT connects\n"
               "JOHTO to faraway lands!$",
    "Keeper": "I keep watch over this\n"
              "lighthouse. It guides ships\l"
              "safely to port.$",
    "Jasmine": "JASMINE: My AMPHAROS fell ill\n"
               "but it's feeling much better\l"
               "now, thanks to the medicine.\p"
               "Thank you for caring.$",
    "SageGym": "MORTY communes with Ghost\n"
               "POKeMON to seek the truth.\p"
               "His eyes can see what\n"
               "others cannot.$",
    "SageRight": "The spirits of POKeMON past\n"
                 "are said to linger in\l"
                 "ECRUTEAK CITY.$",
    "SageTower": "TIN TOWER was built as a\n"
                 "roost for the legendary\l"
                 "HO-OH.\p"
                 "Only those deemed worthy\n"
                 "may climb to its peak.$",
    "Pryce": "PRYCE: Years of training in\n"
             "the cold have taught me\l"
             "patience.\p"
             "A true battle is won before\n"
             "it even begins.$",
    "Lance": "LANCE: Dragons are the\n"
             "strongest POKeMON.\p"
             "But true strength comes from\n"
             "the bond between TRAINER\l"
             "and POKeMON.$",
    "Clair": "CLAIR: I am the DRAGON master\n"
             "of BLACKTHORN CITY.\p"
             "You must prove your worth\n"
             "before I acknowledge you.$",
}

# Sign text templates
SIGN_DIALOGUE = {
    "CitySign": "{CITY}\n{MOTTO}$",
    "TownSign": "{CITY}\n{MOTTO}$",
    "GymSign": "{CITY} POKeMON GYM$",
    "BurnedSign": "BURNED TOWER\nA tower destroyed by fire long ago$",
    "OfficeSign": "DANCE THEATER$",
    "TheaterSign": "ECRUTEAK DANCE THEATER\nOld Traditions Live On$",
}

# City-specific sign data
CITY_SIGNS = {
    "VioletCity": ("VIOLET CITY", "The City of Nostalgic Scents"),
    "EcruteakCity": ("ECRUTEAK CITY", "A Historical City"),
    "OlivineCity": ("OLIVINE CITY", "The Port with Sea Breezes"),
    "CianwoodCity": ("CIANWOOD CITY", "A Port Surrounded by Rough Seas"),
    "MahoganyTown": ("MAHOGANY TOWN", "Welcome to the Home of the Ninja"),
    "BlackthornCity": ("BLACKTHORN CITY", "A Quiet Mountain Retreat"),
    "LakeOfRage": ("LAKE OF RAGE", "Home of the Mysterious Lake"),
    "GoldenrodCity": ("GOLDENROD CITY", "The Festive City of Dazzling Charm"),
    "CherrygroveCity": ("CHERRYGROVE CITY", "The City of Fragrant Flowers"),
}

# Gym sign data
GYM_SIGNS = {
    "VioletCity": "VIOLET CITY POKeMON GYM\nLEADER: FALKNER\p"
                  "The Elegant Master of\nFlying POKeMON$",
    "EcruteakCity": "ECRUTEAK CITY POKeMON GYM\nLEADER: MORTY\p"
                    "The Mystic Seer of the\nFuture$",
    "OlivineCity": "OLIVINE CITY POKeMON GYM\nLEADER: JASMINE\p"
                   "The Steel-Clad Defense Girl$",
    "CianwoodCity": "CIANWOOD CITY POKeMON GYM\nLEADER: CHUCK\p"
                    "His Roaring Fists Do the Talking$",
    "MahoganyTown": "MAHOGANY TOWN POKeMON GYM\nLEADER: PRYCE\p"
                    "The Teacher of Winter's Harshness$",
    "BlackthornCity": "BLACKTHORN CITY POKeMON GYM\nLEADER: CLAIR\p"
                      "The Blessed User of Dragon POKeMON$",
}

# Item label -> item constant mapping
ITEM_MAP = {
    "ItemHyperPotion": "ITEM_HYPER_POTION",
    "ItemPechaBerry": "ITEM_PECHA_BERRY",
    "ItemRareCandy": "ITEM_RARE_CANDY",
    "ItemSuperPotion": "ITEM_SUPER_POTION",
    "ItemFullHeal": "ITEM_FULL_HEAL",
    "ItemRevive": "ITEM_REVIVE",
    "ItemMaxPotion": "ITEM_MAX_POTION",
    "ItemUltraBall": "ITEM_ULTRA_BALL",
    "ItemFullRestore": "ITEM_FULL_RESTORE",
    "ItemMaxElixir": "ITEM_MAX_ELIXIR",
    "ItemMaxEther": "ITEM_MAX_ETHER",
    "ItemElixir": "ITEM_ELIXIR",
    "ItemEther": "ITEM_ETHER",
    "ItemPotion": "ITEM_POTION",
    "ItemAntidote": "ITEM_ANTIDOTE",
    "ItemEscapeRope": "ITEM_ESCAPE_ROPE",
    "ItemRepel": "ITEM_REPEL",
    "ItemSuperRepel": "ITEM_SUPER_REPEL",
    "ItemMaxRepel": "ITEM_MAX_REPEL",
    "ItemNugget": "ITEM_NUGGET",
    "ItemPPUp": "ITEM_PP_UP",
    "ItemCalcium": "ITEM_CALCIUM",
    "ItemIron": "ITEM_IRON",
    "ItemCarbos": "ITEM_CARBOS",
    "ItemProtein": "ITEM_PROTEIN",
    "ItemTMSunnyDay": "ITEM_TM_SUNNY_DAY",
    "ItemTMShadowBall": "ITEM_TM_SHADOW_BALL",
    "ItemHP_Up": "ITEM_HP_UP",
    "ItemTinyMushroom": "ITEM_TINY_MUSHROOM",
    "ItemStarPiece": "ITEM_STAR_PIECE",
    "Item_RareCandy": "ITEM_RARE_CANDY",
    "Item_HyperPotion": "ITEM_HYPER_POTION",
    "Item_FullHeal": "ITEM_FULL_HEAL",
    "Item_SuperPotion": "ITEM_SUPER_POTION",
    "Item_Revive": "ITEM_REVIVE",
    "Item_UltraBall": "ITEM_ULTRA_BALL",
    "Item_MaxPotion": "ITEM_MAX_POTION",
    "Item_MaxElixir": "ITEM_MAX_ELIXIR",
    "Item_Nugget": "ITEM_NUGGET",
    "Item_PPUp": "ITEM_PP_UP",
    "Item_Calcium": "ITEM_CALCIUM",
    "Item_Ether": "ITEM_ETHER",
    "Item_MaxEther": "ITEM_MAX_ETHER",
    "Item_EscapeRope": "ITEM_ESCAPE_ROPE",
    "Item_TM_ShadowBall": "ITEM_TM_SHADOW_BALL",
}

# Overworld Pokemon that should just show a cry
POKEMON_LABELS = [
    "Corsola", "Krabby", "Staryu", "Poliwag", "Bellsprout", "Pichu",
    "Eevee", "Vulpix", "Snubbull", "Slowpoke", "Mime", "Marill",
    "Growlithe", "Seel", "Tentacool", "Wooper", "Quagsire",
    "Miltank", "Tauros", "Nidoran", "Pidgey", "Sentret", "Rattata",
    "Geodude", "Machop", "Abra", "Magikarp", "Gyarados", "Dratini",
    "Ponyta", "Rapidash", "Natu", "Xatu", "Teddiursa",
]

# Labels that should remain as stubs (story triggers, hidden NPCs, etc.)
SKIP_PATTERNS = [
    "Trigger", "Rocket", "Silver", "Door", "Leave", "Music",
    "HealingMachine", "Clock", "TriggerBot", "TriggerTop",
    "TriggerGent", "TriggerStart", "TriggerAide", "TriggerReturn",
    "Kimono",  # coord event trigger
]

def is_johto_map(dirname):
    """Check if a map directory is a Johto map."""
    name = os.path.basename(dirname)
    johto_keywords = [
        "NewBark", "Cherrygrove", "Violet", "Azalea", "Goldenrod",
        "Ecruteak", "Olivine", "Cianwood", "Mahogany", "Blackthorn",
        "Ilex", "LakeOfRage", "SproutTower", "TinTower", "WhirlIslands",
        "SlowpokeWell", "IcePath", "UnionCave", "MtSilver", "MtMortar",
        "DarkCave", "DragonsDen", "RadioTower", "NationalPark",
        "BurnedTower", "Tohjo", "SafariZoneGate",
    ]
    route_match = re.match(r"Route(2[6-9]|3\d|4[0-8])", name)
    gate_match = re.match(r"Gate_(Azalea|Ilex|Route|Goldenrod|Ecruteak|Olivine|Cianwood|Mahogany|Blackthorn|LakeOfRage|NationalPark)", name)
    return any(kw in name for kw in johto_keywords) or route_match or gate_match

def get_label_suffix(label):
    """Extract the meaningful part after EventScript_ or similar."""
    for sep in ["EventScript_", "Script_", "Trigger_"]:
        if sep in label:
            return label.split(sep, 1)[1]
    return label

def should_skip(label):
    """Check if this label should remain as a stub."""
    suffix = get_label_suffix(label)
    for pat in SKIP_PATTERNS:
        if pat in suffix:
            return True
    return False

def is_pokemon_label(suffix):
    """Check if this is a decorative overworld Pokemon."""
    for poke in POKEMON_LABELS:
        if poke.lower() in suffix.lower():
            return True
    return False

def get_item_constant(suffix):
    """Try to match an item label to an item constant."""
    for key, val in ITEM_MAP.items():
        if key.lower() == suffix.lower():
            return val
    # Generic pattern: Item_ or Item prefix
    if suffix.startswith("Item"):
        # Try to extract item name
        name = suffix.replace("Item_", "").replace("Item", "")
        if name:
            guess = "ITEM_" + re.sub(r'([A-Z])', r'_\1', name).upper().strip("_")
            # Only return common ones we're confident about
            return None
    return None

def is_sign_label(suffix):
    """Check if this is a sign/bg_event."""
    return "Sign" in suffix

def get_sign_text(map_name, suffix):
    """Generate sign text based on map name and label suffix."""
    # City/Town sign
    if suffix in ("CitySign", "TownSign"):
        base = map_name.split("_")[0]
        if base in CITY_SIGNS:
            city, motto = CITY_SIGNS[base]
            return f'{city}\\n{motto}$'
    # Gym sign
    if suffix == "GymSign":
        base = map_name.split("_")[0]
        if base in GYM_SIGNS:
            return GYM_SIGNS[base]
        return f'{base} POKeMON GYM$'
    # Named signs
    if suffix == "BurnedSign":
        return "BURNED TOWER\\nA tower destroyed by fire long ago$"
    if suffix == "TheaterSign":
        return "ECRUTEAK DANCE THEATER\\nOld Traditions Live On$"
    if suffix == "OfficeSign":
        return "ECRUTEAK DANCE THEATER OFFICE$"
    if suffix == "LighthouseSign":
        return "OLIVINE LIGHTHOUSE\\nGuiding Ships to Shore$"
    if suffix == "PortSign":
        return "OLIVINE PORT\\nConnecting JOHTO to the World$"
    if suffix == "CafeSign":
        return "OLIVINE CAFE$"
    if suffix == "PharmacySign":
        return "CIANWOOD PHARMACY\\nMedicines from the Sea$"
    if suffix == "WellSign":
        return "SLOWPOKE WELL$"
    if suffix == "RadioSign":
        return "GOLDENROD RADIO TOWER$"
    # Generic
    return None

def get_npc_text(suffix):
    """Try to get NPC dialogue from the dictionary."""
    for key, text in NPC_DIALOGUE.items():
        if key.lower() == suffix.lower():
            return text
    return None

def process_file(filepath):
    """Process a single scripts.inc file to replace stubs."""
    with open(filepath, 'r', encoding='utf-8') as f:
        content = f.read()
    
    lines = content.split('\n')
    map_name = os.path.basename(os.path.dirname(filepath))
    
    # Find stub patterns: label followed by \treturn
    # Pattern: label:: \n \treturn
    modified = False
    new_lines = []
    new_texts = []  # text blocks to append
    i = 0
    
    while i < len(lines):
        line = lines[i]
        
        # Check if this is a label line followed by a return
        label_match = re.match(r'^(\S+)::$', line)
        if label_match and i + 1 < len(lines) and lines[i + 1].strip() == 'return':
            label = label_match.group(1)
            suffix = get_label_suffix(label)
            
            if should_skip(label):
                # Keep as-is
                new_lines.append(line)
                i += 1
                continue
            
            # Check what type of stub this is
            item_const = get_item_constant(suffix)
            
            if item_const:
                # Item pickup
                new_lines.append(line)
                new_lines.append(f'\tfinditem {item_const}')
                new_lines.append('\tend')
                i += 2  # skip the return line
                modified = True
                continue
            
            if is_pokemon_label(suffix):
                # Overworld pokemon - keep as return (no interaction needed)
                new_lines.append(line)
                i += 1
                continue
            
            if is_sign_label(suffix):
                sign_text = get_sign_text(map_name, suffix)
                if sign_text:
                    text_label = f'{label.replace("EventScript_", "Text_").rstrip(":")}'
                    new_lines.append(line)
                    new_lines.append(f'\tmsgbox {text_label}, MSGBOX_SIGN')
                    new_lines.append('\tend')
                    new_texts.append(f'\n{text_label}:\n\t.string "{sign_text}"')
                    i += 2
                    modified = True
                    continue
            
            npc_text = get_npc_text(suffix)
            if npc_text:
                text_label = f'{label.replace("EventScript_", "Text_").rstrip(":")}'
                new_lines.append(line)
                new_lines.append(f'\tmsgbox {text_label}, MSGBOX_NPC')
                new_lines.append('\tend')
                # Format the text with proper .string directives
                text_lines = npc_text.split('\n')
                text_block = f'\n{text_label}:'
                for tl in text_lines:
                    text_block += f'\n\t.string "{tl}"'
                new_texts.append(text_block)
                i += 2
                modified = True
                continue
        
        new_lines.append(line)
        i += 1
    
    if modified:
        result = '\n'.join(new_lines)
        if new_texts:
            result = result.rstrip('\n') + '\n' + '\n'.join(new_texts) + '\n\n'
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write(result)
        return True
    return False

def main():
    total_fixed = 0
    total_files = 0
    
    for map_dir in sorted(glob.glob(os.path.join(MAPS_DIR, "*"))):
        if not os.path.isdir(map_dir):
            continue
        if not is_johto_map(map_dir):
            continue
        
        script_file = os.path.join(map_dir, "scripts.inc")
        if not os.path.exists(script_file):
            continue
        
        # Check if file has stubs
        with open(script_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        if '\treturn\n' not in content:
            continue
        
        if process_file(script_file):
            total_fixed += 1
            print(f"Fixed: {os.path.basename(map_dir)}")
        
        total_files += 1
    
    print(f"\nProcessed {total_files} files, fixed {total_fixed}")

if __name__ == "__main__":
    main()
