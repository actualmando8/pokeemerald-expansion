#!/usr/bin/env python3
"""
Fix broken .string formatting in generated Johto scripts.
Issues:
1. Multi-line .string blocks missing \n between consecutive lines
2. Gym sign strings with literal newlines instead of \n
3. Missing \n before \p and \l in text
"""
import os
import re
import glob

BASE = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
MAPS_DIR = os.path.join(BASE, "data", "maps")

JOHTO_KEYWORDS = [
    "NewBark", "Cherrygrove", "Violet", "Azalea", "Goldenrod",
    "Ecruteak", "Olivine", "Cianwood", "Mahogany", "Blackthorn",
    "Ilex", "LakeOfRage", "SproutTower", "TinTower", "WhirlIslands",
    "SlowpokeWell", "IcePath", "UnionCave", "MtSilver", "MtMortar",
    "DarkCave", "DragonsDen", "RadioTower", "NationalPark",
    "BurnedTower", "Tohjo", "SafariZoneGate", "Gate_",
]

def is_johto_map(dirname):
    name = os.path.basename(dirname)
    route_match = re.match(r"Route(2[6-9]|3\d|4[0-8])", name)
    return any(kw in name for kw in JOHTO_KEYWORDS) or bool(route_match)

def fix_file(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        content = f.read()
    
    original = content
    lines = content.split('\n')
    new_lines = []
    i = 0
    
    while i < len(lines):
        line = lines[i]
        
        # Fix: .string that doesn't end with " (broken multi-line)
        # e.g. .string "CIANWOOD CITY POKeMON GYM\nLEADER: CHUCK\p...
        # followed by a continuation line
        stripped = line.strip()
        if stripped.startswith('.string "') and not stripped.endswith('"'):
            # This is a broken multi-line string - collect all lines until closing quote
            full_str = stripped
            j = i + 1
            while j < len(lines):
                next_stripped = lines[j].strip()
                full_str += "\\n" + next_stripped
                if next_stripped.endswith('"'):
                    break
                j += 1
            
            # Extract just the content between quotes
            match = re.match(r'\.string "(.*)"', full_str.replace('\\n', '\\n'))
            if match:
                text_content = match.group(1)
                # Rebuild as a single properly formatted .string
                indent = line[:len(line) - len(line.lstrip())]
                new_lines.append(f'{indent}.string "{text_content}"')
                i = j + 1
                continue
        
        # Fix: consecutive .string lines where first doesn't end with \n, \p, \l before $
        # e.g. .string "I love walking around town."
        #      .string "The fresh air is wonderful!$"
        if (stripped.startswith('.string "') and stripped.endswith('"') 
            and i + 1 < len(lines)):
            next_stripped = lines[i + 1].strip()
            if next_stripped.startswith('.string "'):
                # Check if current line needs \n before closing quote
                # Extract string content
                match = re.match(r'\.string "(.*)"', stripped)
                if match:
                    text = match.group(1)
                    # If text doesn't end with \n, \p, \l, or $ add \n
                    if (not text.endswith('\\n') and not text.endswith('\\p') 
                        and not text.endswith('\\l') and not text.endswith('$')):
                        indent = line[:len(line) - len(line.lstrip())]
                        new_lines.append(f'{indent}.string "{text}\\n"')
                        i += 1
                        continue
        
        new_lines.append(line)
        i += 1
    
    result = '\n'.join(new_lines)
    
    if result != original:
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write(result)
        return True
    return False

def main():
    fixed = 0
    for map_dir in sorted(glob.glob(os.path.join(MAPS_DIR, "*"))):
        if not os.path.isdir(map_dir):
            continue
        if not is_johto_map(map_dir):
            continue
        script_file = os.path.join(map_dir, "scripts.inc")
        if not os.path.exists(script_file):
            continue
        if fix_file(script_file):
            fixed += 1
            print(f"Fixed: {os.path.basename(map_dir)}")
    print(f"\nFixed {fixed} files")

if __name__ == "__main__":
    main()
