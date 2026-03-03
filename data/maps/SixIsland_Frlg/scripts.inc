SixIsland_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_OnTransition
	.byte 0

SixIsland_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND
	end

SixIsland_EventScript_Hiker::
	msgbox SixIsland_Text_ThatWayToWaterPathRuinValley, MSGBOX_NPC
	end

SixIsland_EventScript_Boy::
	msgbox SixIsland_Text_SkyAtNightIsFantastic, MSGBOX_NPC
	end

SixIsland_EventScript_IslandSign::
	msgbox SixIsland_Text_IslandSign, MSGBOX_SIGN
	end

SixIsland_Text_IslandSign::
	.string "SIX ISLAND\n"
	.string "Fortune Island of Aged Wisdom$"

SixIsland_Text_ThatWayToWaterPathRuinValley::
	.string "Keep going this way and you'll get\n"
	.string "to the WATER PATH.\p"
	.string "Stay on that and you'll get to\n"
	.string "the RUIN VALLEY.$"

SixIsland_Text_SkyAtNightIsFantastic::
	.string "My grandparents came from JOHTO.\n"
	.string "They say this island reminds them\l"
	.string "of ILEX FOREST back home.\p"
	.string "There are legends about a POKéMON\n"
	.string "that travels through time hiding\l"
	.string "deep in the PATTERN BUSH.\p"
	.string "Maybe it's just a story, but the\n"
	.string "air there does feel… different.$"

