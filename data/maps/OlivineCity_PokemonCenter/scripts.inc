OlivineCity_PokemonCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OlivineCity_PokemonCenter_OnTransition
	.byte 0

OlivineCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_OLIVINE_CITY
	end

@ Johto map scripts (imported from HnS, stubs)

OlivineCity_EventScript_Fisher::
	msgbox OlivineCity_Text_Fisher, MSGBOX_NPC
	end

OlivineCity_EventScript_Teacher::
	msgbox OlivineCity_PC_Text_Teacher, MSGBOX_NPC
	end

OlivineCity_PC_Text_Teacher:
	.string "Be sure to rest up before\n"
	.string "crossing the sea to CIANWOOD.\p"
	.string "It's a long SURF!$"

OlivineCity_Text_Fisher:
	.string "You can fish up all sorts of\n"
	.string "rare POKeMON in JOHTO's waters!\pYou just need patience!$"

