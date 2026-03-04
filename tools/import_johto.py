#!/usr/bin/env python3
"""Import Johto maps from Pokemon Heart & Soul into pokeemerald-expansion."""

import json
import os
import re
import shutil

HNS_DIR = r'C:\Users\Mandito\Desktop\New folder\pokemonHnS'
TARGET_DIR = r'C:\Users\Mandito\Desktop\New folder\pokeemerald-expansion'

# Kanto areas to SKIP (user has FRLG versions)
KANTO_SKIP_PREFIXES = [
    'PalletTown', 'ViridianCity', 'PewterCity', 'CeruleanCity', 'VermilionCity',
    'LavenderTown', 'CeladonCity', 'SaffronCity', 'FuchsiaCity', 'CinnabarIsland',
    'ViridianForest', 'DiglettsCave', 'RockTunnel', 'SeafoamIslands', 'MtMoon',
    'RocketHideout', 'CeruleanCave', 'SilphCo', 'PokemonTower',
    'IndigoPlateau', 'PokemonLeague', 'Saffron_Temp',
]

# Kanto route patterns to skip
KANTO_ROUTE_SKIP = set()
for i in range(1, 26):
    KANTO_ROUTE_SKIP.add('Route%d' % i)

# Kanto gate prefixes to skip
KANTO_GATE_SKIP = [
    'Gate_CeladonCity', 'Gate_FuchsiaCity', 'Gate_SaffronCity',
    'Gate_Route2', 'Gate_ViridianForest',
]

# Other maps to skip (Hoenn/Battle/misc already in project)
OTHER_SKIP_PREFIXES = [
    'BattlePyramid_Square', 'UnusedContest', 'TrainerHill_',
    'MagmaHideout', 'TerraCave', 'ScorchedSlab',
    'NewMap1', 'Trees', 'PetalburgWoods_Old',
]


def get_johto_map_dirs():
    """Get list of Johto-only map directory names from HnS."""
    hns_maps = os.path.join(HNS_DIR, 'data', 'maps')
    target_maps = os.path.join(TARGET_DIR, 'data', 'maps')

    hns_dirs = set(d for d in os.listdir(hns_maps)
                   if os.path.isdir(os.path.join(hns_maps, d)))
    existing_dirs = set(os.listdir(target_maps))

    new_dirs = hns_dirs - existing_dirs
    johto_dirs = set()

    for d in new_dirs:
        skip = False
        # Skip Kanto areas
        for prefix in KANTO_SKIP_PREFIXES:
            if d.startswith(prefix):
                skip = True
                break
        if skip:
            continue

        # Skip Kanto routes (Route1-Route25 without Johto suffixes)
        # But KEEP Route26-Route48 (Johto routes)
        route_match = re.match(r'^Route(\d+)$', d)
        if route_match:
            route_num = int(route_match.group(1))
            if route_num <= 25:
                continue  # Skip Kanto routes

        # Skip Route sub-maps for Kanto (Route10_House, etc.)
        route_sub_match = re.match(r'^Route(\d+)_', d)
        if route_sub_match:
            route_num = int(route_sub_match.group(1))
            if route_num <= 25:
                continue

        # Skip Kanto gates
        for prefix in KANTO_GATE_SKIP:
            if d.startswith(prefix):
                skip = True
                break
        if skip:
            continue

        # Skip other non-Johto maps
        for prefix in OTHER_SKIP_PREFIXES:
            if d.startswith(prefix):
                skip = True
                break
        if skip:
            continue

        johto_dirs.add(d)

    return sorted(johto_dirs)


def get_johto_tilesets(johto_dirs):
    """Get all tilesets used by Johto maps from layouts.json."""
    with open(os.path.join(HNS_DIR, 'data', 'layouts', 'layouts.json')) as f:
        hns_layouts = json.load(f)

    # Get layout IDs used by Johto maps
    johto_layout_ids = set()
    for d in johto_dirs:
        map_json_path = os.path.join(HNS_DIR, 'data', 'maps', d, 'map.json')
        if os.path.exists(map_json_path):
            with open(map_json_path) as f:
                mdata = json.load(f)
            johto_layout_ids.add(mdata.get('layout', ''))

    # Get tilesets from those layouts
    tilesets = set()
    for layout in hns_layouts['layouts']:
        if layout['id'] in johto_layout_ids:
            tilesets.add(layout.get('primary_tileset', ''))
            tilesets.add(layout.get('secondary_tileset', ''))

    tilesets.discard('')
    return sorted(tilesets)


def get_johto_layouts(johto_dirs):
    """Get all layout entries used by Johto maps."""
    with open(os.path.join(HNS_DIR, 'data', 'layouts', 'layouts.json')) as f:
        hns_layouts = json.load(f)

    johto_layout_ids = set()
    for d in johto_dirs:
        map_json_path = os.path.join(HNS_DIR, 'data', 'maps', d, 'map.json')
        if os.path.exists(map_json_path):
            with open(map_json_path) as f:
                mdata = json.load(f)
            johto_layout_ids.add(mdata.get('layout', ''))

    johto_layouts = []
    for layout in hns_layouts['layouts']:
        if layout['id'] in johto_layout_ids:
            johto_layouts.append(layout)

    return johto_layouts


def copy_tilesets(tilesets):
    """Copy tileset directories from HnS to target project."""
    hns_tilesets_dir = os.path.join(HNS_DIR, 'data', 'tilesets')
    target_tilesets_dir = os.path.join(TARGET_DIR, 'data', 'tilesets')
    copied = 0

    # Map tileset names to directory names
    # HnS tilesets: gTileset_Johto_General -> primary/johto_general or secondary/xxx
    for ts_name in tilesets:
        # Strip gTileset_ prefix
        short = ts_name.replace('gTileset_', '')

        # Try to find in primary and secondary
        found = False
        for sub in ['primary', 'secondary']:
            # Convert CamelCase to snake_case for directory lookup
            candidates = [
                short.lower(),
                short.lower().replace(' ', '_'),
                '_'.join(re.findall(r'[A-Z][a-z]*|[a-z]+', short)).lower(),
            ]
            for candidate in candidates:
                src = os.path.join(hns_tilesets_dir, sub, candidate)
                if os.path.exists(src):
                    dst = os.path.join(target_tilesets_dir, sub, candidate)
                    if not os.path.exists(dst):
                        shutil.copytree(src, dst)
                        copied += 1
                        print('  Copied %s/%s' % (sub, candidate))
                    else:
                        print('  Already exists: %s/%s' % (sub, candidate))
                    found = True
                    break
            if found:
                break

        if not found:
            print('  WARNING: Could not find tileset dir for %s' % ts_name)

    return copied


def copy_layouts(johto_layouts):
    """Copy layout bin files from HnS to target project."""
    copied = 0
    for layout in johto_layouts:
        blockdata = layout.get('blockdata_filepath', '')
        border = layout.get('border_filepath', '')

        for filepath in [blockdata, border]:
            if not filepath:
                continue
            src = os.path.join(HNS_DIR, filepath)
            dst = os.path.join(TARGET_DIR, filepath)
            if os.path.exists(src) and not os.path.exists(dst):
                os.makedirs(os.path.dirname(dst), exist_ok=True)
                shutil.copy2(src, dst)
                copied += 1

    return copied


def copy_maps(johto_dirs):
    """Copy map.json files and create stub scripts."""
    hns_maps = os.path.join(HNS_DIR, 'data', 'maps')
    target_maps = os.path.join(TARGET_DIR, 'data', 'maps')
    copied = 0

    for d in johto_dirs:
        src_dir = os.path.join(hns_maps, d)
        dst_dir = os.path.join(target_maps, d)

        if os.path.exists(dst_dir):
            print('  Already exists: %s' % d)
            continue

        os.makedirs(dst_dir, exist_ok=True)

        # Copy map.json
        src_json = os.path.join(src_dir, 'map.json')
        if os.path.exists(src_json):
            with open(src_json) as f:
                mdata = json.load(f)

            # Set region to REGION_HOENN (required for Emerald build)
            # Keep original music, weather, etc.
            mdata['region'] = 'REGION_HOENN'

            with open(os.path.join(dst_dir, 'map.json'), 'w') as f:
                json.dump(mdata, f, indent=2)
                f.write('\n')

        # Create stub scripts.inc
        # Collect all script labels referenced in map.json
        script_labels = set()
        if os.path.exists(src_json):
            with open(src_json) as f:
                mdata = json.load(f)
            # Object event scripts
            for obj in mdata.get('object_events', []):
                s = obj.get('script', '')
                if s and s != 'NULL' and s != '0':
                    script_labels.add(s)
            # Coord event scripts
            for coord in mdata.get('coord_events', []):
                s = coord.get('script', '')
                if s and s != 'NULL' and s != '0':
                    script_labels.add(s)
            # BG event scripts
            for bg in mdata.get('bg_events', []):
                s = bg.get('script', '')
                if s and s != 'NULL' and s != '0':
                    script_labels.add(s)

        # Write stub scripts
        with open(os.path.join(dst_dir, 'scripts.inc'), 'w') as f:
            f.write('@ Johto map scripts (imported from HnS, stubs)\n\n')
            for label in sorted(script_labels):
                f.write('%s::\n' % label)
                f.write('\treturn\n\n')

        copied += 1

    return copied


def main():
    print('=== Johto Import from Pokemon Heart & Soul ===\n')

    # Step 1: Identify Johto maps
    print('Step 1: Identifying Johto-only maps...')
    johto_dirs = get_johto_map_dirs()
    print('  Found %d Johto map directories\n' % len(johto_dirs))

    # Step 2: Identify required tilesets
    print('Step 2: Identifying required tilesets...')
    tilesets = get_johto_tilesets(johto_dirs)
    print('  Found %d tilesets needed\n' % len(tilesets))
    for ts in tilesets:
        print('    %s' % ts)
    print()

    # Step 3: Copy tilesets
    print('Step 3: Copying tilesets...')
    ts_copied = copy_tilesets(tilesets)
    print('  Copied %d tileset directories\n' % ts_copied)

    # Step 4: Get and copy layouts
    print('Step 4: Copying layout data...')
    johto_layouts = get_johto_layouts(johto_dirs)
    layout_files = copy_layouts(johto_layouts)
    print('  Copied %d layout files for %d layouts\n' % (layout_files, len(johto_layouts)))

    # Step 5: Copy map data with stub scripts
    print('Step 5: Copying map data + creating stub scripts...')
    maps_copied = copy_maps(johto_dirs)
    print('  Copied %d maps\n' % maps_copied)

    # Summary
    print('=== SUMMARY ===')
    print('Maps to import: %d' % len(johto_dirs))
    print('Tilesets needed: %d' % len(tilesets))
    print('Layouts needed: %d' % len(johto_layouts))
    print()
    print('Next steps (manual):')
    print('  1. Register tilesets in src/data/tilesets/{headers,graphics,metatiles}.h')
    print('  2. Add layouts to data/layouts/layouts.json')
    print('  3. Add maps to data/maps/map_groups.json')
    print('  4. Add MAPSEC constants to include/constants/region_map_sections.h')
    print('  5. Add music constants if needed')
    print('  6. Add script includes to data/event_scripts.s')
    print('  7. Build and fix errors')

    # Save the lists for later use
    with open(os.path.join(TARGET_DIR, 'tools', 'johto_import_data.json'), 'w') as f:
        json.dump({
            'johto_dirs': johto_dirs,
            'tilesets': tilesets,
            'layouts': [l['id'] for l in johto_layouts],
        }, f, indent=2)
    print('\nSaved import data to tools/johto_import_data.json')


if __name__ == '__main__':
    main()
