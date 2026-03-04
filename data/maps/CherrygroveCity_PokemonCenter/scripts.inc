CherrygroveCity_PokemonCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CherrygroveCity_PokemonCenter_OnTransition
	.byte 0

CherrygroveCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_CHERRYGROVE_CITY
	end

@ Johto map scripts (imported from HnS, stubs)

CherryGrove_Pokecenter_EventScript_Fisher::
	msgbox CherryGrove_Pokecenter_Text_Fisher, MSGBOX_NPC
	end

CherryGrove_Pokecenter_EventScript_Gentleman::
	msgbox CherryGrove_Pokecenter_Text_Gentleman, MSGBOX_NPC
	end

CherryGrove_Pokecenter_EventScript_Lass::
	msgbox CherryGrove_Pokecenter_Text_Lass, MSGBOX_NPC
	end

CherryGrove_Pokecenter_Text_Fisher:
	.string "You can fish up all sorts of\n"
	.string "rare POKeMON in JOHTO's waters!\pYou just need patience!$"

CherryGrove_Pokecenter_Text_Gentleman:
	.string "Ah, a fellow TRAINER.\n"
	.string "Best of luck on your travels!$"

CherryGrove_Pokecenter_Text_Lass:
	.string "I love walking around town.\n"
	.string "The fresh air is wonderful!$"

