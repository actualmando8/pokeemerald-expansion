#!/usr/bin/env python3
"""Register Johto tilesets, layouts, maps, and constants in pokeemerald-expansion."""

import json
import os
import re

HNS_DIR = r'C:\Users\Mandito\Desktop\New folder\pokemonHnS'
TARGET_DIR = r'C:\Users\Mandito\Desktop\New folder\pokeemerald-expansion'


def get_missing_tilesets():
    """Get list of tilesets needed but not yet registered."""
    with open(os.path.join(TARGET_DIR, 'src', 'data', 'tilesets', 'headers.h')) as f:
        existing = set(re.findall(r'const struct Tileset (gTileset_\w+)', f.read()))
    with open(os.path.join(TARGET_DIR, 'tools', 'johto_import_data.json')) as f:
        needed = set(json.load(f)['tilesets'])
    return sorted(needed - existing)


def extract_hns_tileset_defs():
    """Extract all tileset definitions from HnS headers.h."""
    with open(os.path.join(HNS_DIR, 'src', 'data', 'tilesets', 'headers.h')) as f:
        content = f.read()
    defs = {}
    pattern = r'const struct Tileset (gTileset_\w+)\s*=\s*\{([^}]+)\};'
    for match in re.finditer(pattern, content, re.DOTALL):
        name = match.group(1)
        body = match.group(2)
        fields = {}
        for field in re.finditer(r'\.(\w+)\s*=\s*([^,\n]+)', body):
            fields[field.group(1)] = field.group(2).strip()
        defs[name] = fields
    return defs


def extract_hns_graphics():
    """Extract graphics declarations from HnS graphics.h."""
    with open(os.path.join(HNS_DIR, 'src', 'data', 'tilesets', 'graphics.h')) as f:
        content = f.read()
    # Find all tile and palette declarations
    decls = {}
    for line in content.split('\n'):
        m = re.match(r'const u(16|32|8)\s+(\w+)\[\]\s*=\s*INCBIN_U(16|32|8)\("([^"]+)"\);', line)
        if m:
            decls[m.group(2)] = (m.group(1), m.group(4))
        # Also handle palette arrays
        m2 = re.match(r'const u16\s+(\w+)\[', line)
        if m2:
            decls[m2.group(1)] = None  # Just track the name
    return decls, content


def extract_hns_metatiles():
    """Extract metatile declarations from HnS metatiles.h."""
    with open(os.path.join(HNS_DIR, 'src', 'data', 'tilesets', 'metatiles.h')) as f:
        content = f.read()
    return content


def tileset_name_to_dir(ts_name):
    """Convert gTileset_Foo to the tileset directory path component."""
    short = ts_name.replace('gTileset_', '')
    # Map known special cases
    special = {
        'Johto_General': 'johto_general',
        'Johto_Building': 'johto_building',
        'Johto_South': 'johto_south',
        'Johto_NorthEast': 'johto_north_east',
        'Johto_NorthWest': 'johto_north_west',
        'Kanto_General': 'kanto_general',
        'Kanto_PokemonCenter': 'kanto_pokemon_center',
        'AzaleaTown': 'azalea_town',
        'AzaleaTown_Gym': 'azalea_town_gym',
        'BellchimeTrail': 'bellchime_trail',
        'Blackthorn': 'blackthorn',
        'BlackthornGym': 'blackthorn_gym',
        'BurnedTower': 'burned_tower',
        'Cafe': 'cafe',
        'Cave_Default': 'cave_default',
        'Cave_DragonsDen': 'cave_dragons_den',
        'Cave_Gray': 'cave_gray',
        'Cave_Ice': 'cave_ice',
        'CherrygroveCity': 'cherrygrove_city',
        'CianwoodCity': 'cianwood_city',
        'CianwoodCity_Gym': 'cianwood_city_gym',
        'DragonsDen_Shrine': 'dragons_den_shrine',
        'EcruteakCity_Gym': 'ecruteak_city_gym',
        'EcruteakTheater': 'ecruteak_theater',
        'Ecruteak_City': 'ecruteak_city',
        'Gate_Standard': 'gate_standard',
        'Goldenrod': 'goldenrod',
        'GoldenrodCity_TrainStation': 'goldenrod_station',
        'GoldenrodUndergroundRocket': 'goldenrod_underground_rocket',
        'GoldenrodUndergroundTunnel': 'goldenrod_underground_tunnel',
        'Goldenrod_Underground_Storage': 'goldenrod_underground_storage',
        'House_2': 'house_2',
        'House_Lab': 'house_lab',
        'IlexForest': 'ilex_forest',
        'JohtoBikeShop': 'johto_bike_shop',
        'JohtoMart': 'johto_mart',
        'KurtsHouse': 'kurts_house',
        'Lighthouse': 'lighthouse',
        'MahoganyTown': 'mahogany_town',
        'MtSilverSnow': 'mt_silver_snow',
        'NationalPark': 'national_park',
        'NewBarkTown': 'new_bark_town',
        'OlivineCity': 'olivine_city',
        'PlayersHouse': 'players_house',
        'PokemonCenter_White': 'pokemon_center_white',
        'PortIndoor': 'port_indoor',
        'PowerPlant_GeneratorRoom': 'power_plant_generator_room',
        'Route32': 'route_32',
        'Route38_Farmland': 'route38_farmland',
        'RuinsOfAlphWriting': 'ruins_of_alph_writing',
        'RuinsOfAlph_B1F': 'ruins_of_alph_b1_f',
        'RuinsOfAlph_Outside': 'ruins_of_alph_outside',
        'SafariZoneJohto': 'safari_zone_johto',
        'SafariZone_Entrance': 'safari_zone_entrance',
        'ShopRooftop': 'shop_rooftop',
        'TrainerSchool': 'trainer_school',
        'Unused3': 'unused3',
        'VioletCity': 'violet_city',
        'WhirlIslands': 'whirl_islands',
        'ssaqua': 'ssaqua',
        'Barn': 'barn',
        'DepartmentStore': 'department_store',
        'GameCorner': 'game_corner',
    }
    return special.get(short, short.lower())


def is_primary(ts_name, hns_defs):
    """Check if a tileset is primary based on HnS definition."""
    if ts_name in hns_defs:
        return hns_defs[ts_name].get('isSecondary', 'TRUE') == 'FALSE'
    return False


def generate_graphics_h_entries(missing, hns_defs):
    """Generate graphics.h entries for missing tilesets."""
    lines = []
    lines.append('\n// Pokemon Heart & Soul - Johto Tilesets\n')
    for ts_name in missing:
        short = ts_name.replace('gTileset_', '')
        dirname = tileset_name_to_dir(ts_name)
        primary = is_primary(ts_name, hns_defs)
        subdir = 'primary' if primary else 'secondary'

        tiles_var = 'gTilesetTiles_%s' % short
        pal_var = 'gTilesetPalettes_%s' % short

        lines.append('const u32 %s[] = INCBIN_U32("data/tilesets/%s/%s/tiles.4bpp.lz");' % (tiles_var, subdir, dirname))
        lines.append('const u16 %s[][16] =' % pal_var)
        lines.append('{')
        for i in range(16):
            lines.append('    INCBIN_U16("data/tilesets/%s/%s/palettes/%02d.gbapal"),' % (subdir, dirname, i))
        lines.append('};')
        lines.append('')
    return '\n'.join(lines)


def generate_metatiles_h_entries(missing, hns_defs):
    """Generate metatiles.h entries for missing tilesets."""
    lines = []
    lines.append('\n// Pokemon Heart & Soul - Johto Tilesets\n')
    for ts_name in missing:
        short = ts_name.replace('gTileset_', '')
        dirname = tileset_name_to_dir(ts_name)
        primary = is_primary(ts_name, hns_defs)
        subdir = 'primary' if primary else 'secondary'
        label = short if not primary else short + 'Primary' if 'General' in short else short

        mt_var = 'gMetatiles_%s' % short
        ma_var = 'gMetatileAttributes_%s' % short

        lines.append('const u16 %s[] = INCBIN_U16("data/tilesets/%s/%s/metatiles.bin");' % (mt_var, subdir, dirname))
        lines.append('const u16 %s[] = INCBIN_U16("data/tilesets/%s/%s/metatile_attributes.bin");' % (ma_var, subdir, dirname))
        lines.append('')
    return '\n'.join(lines)


def generate_headers_h_entries(missing, hns_defs):
    """Generate headers.h entries for missing tilesets."""
    lines = []
    lines.append('\n// Pokemon Heart & Soul - Johto Tilesets\n')
    for ts_name in missing:
        short = ts_name.replace('gTileset_', '')
        primary = is_primary(ts_name, hns_defs)

        tiles_var = 'gTilesetTiles_%s' % short
        pal_var = 'gTilesetPalettes_%s' % short
        mt_var = 'gMetatiles_%s' % short
        ma_var = 'gMetatileAttributes_%s' % short

        lines.append('const struct Tileset %s =' % ts_name)
        lines.append('{')
        lines.append('    .isCompressed = TRUE,')
        lines.append('    .isSecondary = %s,' % ('FALSE' if primary else 'TRUE'))
        lines.append('    .tiles = %s,' % tiles_var)
        lines.append('    .palettes = %s,' % pal_var)
        lines.append('    .metatiles = %s,' % mt_var)
        lines.append('    .metatileAttributes = %s,' % ma_var)
        lines.append('    .callback = NULL,')
        lines.append('};')
        lines.append('')
    return '\n'.join(lines)


def main():
    missing = get_missing_tilesets()
    hns_defs = extract_hns_tileset_defs()

    print('Generating registration code for %d tilesets...\n' % len(missing))

    # Generate the code snippets
    graphics_code = generate_graphics_h_entries(missing, hns_defs)
    metatiles_code = generate_metatiles_h_entries(missing, hns_defs)
    headers_code = generate_headers_h_entries(missing, hns_defs)

    # Save to temp files for review/appending
    out_dir = os.path.join(TARGET_DIR, 'tools')
    with open(os.path.join(out_dir, 'johto_graphics.h.txt'), 'w') as f:
        f.write(graphics_code)
    with open(os.path.join(out_dir, 'johto_metatiles.h.txt'), 'w') as f:
        f.write(metatiles_code)
    with open(os.path.join(out_dir, 'johto_headers.h.txt'), 'w') as f:
        f.write(headers_code)

    print('Generated:')
    print('  tools/johto_graphics.h.txt')
    print('  tools/johto_metatiles.h.txt')
    print('  tools/johto_headers.h.txt')
    print()

    # Now append to actual files
    print('Appending to actual tileset files...')

    # Append to graphics.h
    with open(os.path.join(TARGET_DIR, 'src', 'data', 'tilesets', 'graphics.h'), 'a') as f:
        f.write(graphics_code)
    print('  Appended to src/data/tilesets/graphics.h')

    # Append to metatiles.h
    with open(os.path.join(TARGET_DIR, 'src', 'data', 'tilesets', 'metatiles.h'), 'a') as f:
        f.write(metatiles_code)
    print('  Appended to src/data/tilesets/metatiles.h')

    # Append to headers.h
    with open(os.path.join(TARGET_DIR, 'src', 'data', 'tilesets', 'headers.h'), 'a') as f:
        f.write(headers_code)
    print('  Appended to src/data/tilesets/headers.h')

    # --- LAYOUTS ---
    print('\nRegistering layouts in layouts.json...')
    register_layouts()

    # --- MAP GROUPS ---
    print('\nRegistering maps in map_groups.json...')
    register_maps()

    # --- MAPSEC ---
    print('\nAdding MAPSEC constants...')
    add_mapsec_constants()

    # --- MUSIC ---
    print('\nChecking music constants...')
    add_music_constants()

    # --- EVENT SCRIPTS ---
    print('\nAdding script includes to event_scripts.s...')
    add_script_includes()

    print('\n=== DONE ===')


def register_layouts():
    """Add Johto layouts to layouts.json."""
    with open(os.path.join(TARGET_DIR, 'data', 'layouts', 'layouts.json')) as f:
        target_layouts = json.load(f)

    existing_ids = set(l['id'] for l in target_layouts['layouts'])

    with open(os.path.join(HNS_DIR, 'data', 'layouts', 'layouts.json')) as f:
        hns_layouts = json.load(f)

    with open(os.path.join(TARGET_DIR, 'tools', 'johto_import_data.json')) as f:
        import_data = json.load(f)
    needed_layout_ids = set()
    for d in import_data['johto_dirs']:
        map_json = os.path.join(TARGET_DIR, 'data', 'maps', d, 'map.json')
        if os.path.exists(map_json):
            with open(map_json) as f:
                mdata = json.load(f)
            needed_layout_ids.add(mdata.get('layout', ''))

    added = 0
    for layout in hns_layouts['layouts']:
        lid = layout['id']
        if lid in needed_layout_ids and lid not in existing_ids:
            target_layouts['layouts'].append(layout)
            existing_ids.add(lid)
            added += 1

    with open(os.path.join(TARGET_DIR, 'data', 'layouts', 'layouts.json'), 'w') as f:
        json.dump(target_layouts, f, indent=2)
        f.write('\n')
    print('  Added %d layouts' % added)


def register_maps():
    """Add Johto maps to map_groups.json."""
    map_groups_path = os.path.join(TARGET_DIR, 'data', 'maps', 'map_groups.json')
    with open(map_groups_path) as f:
        target_groups = json.load(f)

    # Collect existing map names
    existing_maps = set()
    for group_name, maps in target_groups.items():
        for m in maps:
            existing_maps.add(m)

    with open(os.path.join(TARGET_DIR, 'tools', 'johto_import_data.json')) as f:
        import_data = json.load(f)

    # Add a new group for Johto maps
    johto_towns = []
    johto_indoor = []
    johto_dungeons = []
    johto_routes = []
    johto_other = []

    town_prefixes = ['NewBarkTown', 'CherrygroveCity', 'VioletCity', 'AzaleaTown',
        'GoldenrodCity', 'EcruteakCity', 'OlivineCity', 'Cianwood',
        'Mahogany', 'BlackthornCity']
    dungeon_prefixes = ['DarkCave', 'SproutTower', 'RuinsOfAlph', 'SlowpokeWell',
        'IlexForest', 'UnionCave', 'BurnedTower', 'TinTower', 'WhirlIslands',
        'IcePath', 'MtMortar', 'MtSilver', 'DragonsDen', 'LakeOfRage',
        'BellchimeTrail', 'EmbeddedTower', 'TohjoFalls', 'CliffEdge',
        'SafariZone', 'NationalPark', 'AlteringCave_Mewtwo',
        'VictoryRoad', 'MeteorFalls_Articuno', 'NewMauville', 'ShoalCave']
    route_pattern = re.compile(r'^Route\d')

    for d in import_data['johto_dirs']:
        if d in existing_maps:
            continue

        is_town = any(d.startswith(p) for p in town_prefixes)
        is_dungeon = any(d.startswith(p) for p in dungeon_prefixes)
        is_route = bool(route_pattern.match(d))

        # Outdoor towns/routes
        if d in ['NewBarkTown', 'CherrygroveCity', 'VioletCity', 'AzaleaTown',
                 'GoldenrodCity', 'EcruteakCity', 'OlivineCity', 'CianwoodCity',
                 'Mahoganytown', 'BlackthornCity', 'LakeOfRage', 'LakeOfRageLowTide',
                 'NationalPark_Normal', 'NationalPark_BugContest',
                 'OlivineCity_PortOutside', 'WorldHub', 'WorldHub2'] or \
           (is_route and '_' not in d):
            johto_towns.append(d)
        elif is_town and '_' in d:
            johto_indoor.append(d)
        elif is_dungeon:
            johto_dungeons.append(d)
        elif is_route:
            johto_routes.append(d)
        else:
            johto_other.append(d)

    # Add Johto map groups
    if johto_towns:
        target_groups['gMapGroup_JohtoTownsAndRoutes'] = sorted(johto_towns)
    if johto_indoor:
        target_groups['gMapGroup_JohtoIndoor'] = sorted(johto_indoor)
    if johto_dungeons:
        target_groups['gMapGroup_JohtoDungeons'] = sorted(johto_dungeons)
    if johto_routes:
        target_groups['gMapGroup_JohtoRouteBuildings'] = sorted(johto_routes)
    if johto_other:
        target_groups['gMapGroup_JohtoOther'] = sorted(johto_other)

    total = len(johto_towns) + len(johto_indoor) + len(johto_dungeons) + len(johto_routes) + len(johto_other)

    with open(map_groups_path, 'w') as f:
        json.dump(target_groups, f, indent=2)
        f.write('\n')
    print('  Added %d maps in %d groups' % (total,
        sum(1 for x in [johto_towns, johto_indoor, johto_dungeons, johto_routes, johto_other] if x)))


def add_mapsec_constants():
    """Add MAPSEC constants for Johto locations."""
    mapsec_path = os.path.join(TARGET_DIR, 'include', 'constants', 'region_map_sections.h')
    with open(mapsec_path) as f:
        content = f.read()

    # Find the highest existing MAPSEC value
    existing = re.findall(r'#define\s+(MAPSEC_\w+)\s+(\d+)', content)
    if not existing:
        # Try enum format
        existing = re.findall(r'(MAPSEC_\w+)\s*(?:=\s*(\d+))?', content)

    existing_names = set(name for name, _ in existing)

    # HnS MAPSEC constants
    hns_mapsec_path = os.path.join(HNS_DIR, 'include', 'constants', 'region_map_sections.h')
    with open(hns_mapsec_path) as f:
        hns_content = f.read()

    hns_mapsecs = re.findall(r'#define\s+(MAPSEC_\w+)\s+(\d+)', hns_content)
    if not hns_mapsecs:
        hns_mapsecs = re.findall(r'(MAPSEC_\w+)\s*=\s*(\d+)', hns_content)

    # Johto MAPSEC names
    johto_mapsecs = []
    johto_keywords = ['NEW_BARK', 'CHERRYGROVE', 'VIOLET', 'AZALEA', 'GOLDENROD',
        'ECRUTEAK', 'OLIVINE', 'CIANWOOD', 'MAHOGANY', 'BLACKTHORN',
        'ROUTE_29', 'ROUTE_30', 'ROUTE_31', 'ROUTE_32', 'ROUTE_33',
        'ROUTE_34', 'ROUTE_35', 'ROUTE_36', 'ROUTE_37', 'ROUTE_38',
        'ROUTE_39', 'ROUTE_40', 'ROUTE_41', 'ROUTE_42', 'ROUTE_43',
        'ROUTE_44', 'ROUTE_45', 'ROUTE_46', 'ROUTE_47', 'ROUTE_48',
        'SPROUT_TOWER', 'RUINS_OF_ALPH', 'UNION_CAVE', 'SLOWPOKE_WELL',
        'ILEX_FOREST', 'NATIONAL_PARK', 'BURNED_TOWER', 'TIN_TOWER',
        'WHIRL_ISLANDS', 'MT_MORTAR', 'LAKE_OF_RAGE', 'ICE_PATH',
        'DRAGONS_DEN', 'DARK_CAVE', 'MT_SILVER', 'TOHJO_FALLS',
        'BELLCHIME', 'CLIFF_EDGE', 'SAFARI_ZONE_JOHTO', 'SS_AQUA',
        'INDIGO_PLATEAU_JOHTO', 'POKEMON_LEAGUE_JOHTO',
        'EMBEDDED_TOWER', 'JOHTO']

    for name, val in hns_mapsecs:
        if any(kw in name for kw in johto_keywords):
            if name not in existing_names:
                johto_mapsecs.append((name, val))

    if johto_mapsecs:
        # Add them as #define constants at the end of the file
        addition = '\n// Johto MAPSEC constants (from Pokemon Heart & Soul)\n'
        for name, val in johto_mapsecs:
            addition += '#define %s %s\n' % (name, val)

        # Append before the final #endif
        if '#endif' in content:
            content = content.replace('#endif', addition + '\n#endif', 1)
        else:
            content += addition

        with open(mapsec_path, 'w') as f:
            f.write(content)
        print('  Added %d MAPSEC constants' % len(johto_mapsecs))
    else:
        print('  No new MAPSEC constants needed (or format mismatch)')


def add_music_constants():
    """Check and add HnS music constants."""
    # Check what music is referenced by Johto maps
    music_refs = set()
    with open(os.path.join(TARGET_DIR, 'tools', 'johto_import_data.json')) as f:
        import_data = json.load(f)

    for d in import_data['johto_dirs']:
        map_json = os.path.join(TARGET_DIR, 'data', 'maps', d, 'map.json')
        if os.path.exists(map_json):
            with open(map_json) as f:
                mdata = json.load(f)
            music = mdata.get('music', '')
            if music:
                music_refs.add(music)

    # Check which are already defined
    songs_path = os.path.join(TARGET_DIR, 'include', 'constants', 'songs.h')
    with open(songs_path) as f:
        songs_content = f.read()

    missing_music = set()
    for m in music_refs:
        if m not in songs_content:
            missing_music.add(m)

    if missing_music:
        print('  Missing music constants (%d):' % len(missing_music))
        for m in sorted(missing_music):
            print('    %s' % m)
        # For now, replace missing music with MUS_DUMMY in map.json files
        print('  Replacing missing music with MUS_DUMMY in map.json files...')
        replaced = 0
        for d in import_data['johto_dirs']:
            map_json = os.path.join(TARGET_DIR, 'data', 'maps', d, 'map.json')
            if os.path.exists(map_json):
                with open(map_json) as f:
                    mdata = json.load(f)
                music = mdata.get('music', '')
                if music in missing_music:
                    mdata['music'] = 'MUS_DUMMY'
                    with open(map_json, 'w') as f:
                        json.dump(mdata, f, indent=2)
                        f.write('\n')
                    replaced += 1
        print('  Replaced music in %d map files' % replaced)
    else:
        print('  All music constants already defined')


def add_script_includes():
    """Add script includes for Johto maps to event_scripts.s."""
    es_path = os.path.join(TARGET_DIR, 'data', 'event_scripts.s')
    with open(es_path) as f:
        content = f.read()

    with open(os.path.join(TARGET_DIR, 'tools', 'johto_import_data.json')) as f:
        import_data = json.load(f)

    includes = []
    for d in sorted(import_data['johto_dirs']):
        inc_line = '\t.include "data/maps/%s/scripts.inc"' % d
        if inc_line not in content:
            includes.append(inc_line)

    if includes:
        # Add before the first .if or at the end
        addition = '\n@ Johto map scripts (from Pokemon Heart & Soul)\n'
        addition += '\n'.join(includes)
        addition += '\n'

        # Find a good insertion point - before .if IS_FRLG or at end
        if '.if IS_FRLG' in content:
            content = content.replace('.if IS_FRLG', addition + '\n.if IS_FRLG', 1)
        else:
            content += addition

        with open(es_path, 'w') as f:
            f.write(content)
        print('  Added %d script includes' % len(includes))
    else:
        print('  All script includes already present')


if __name__ == '__main__':
    main()
