AzaleaTown_PokemonCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AzaleaTown_PokemonCenter_OnTransition
	.byte 0

AzaleaTown_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_AZALEA_TOWN
	end

@ Johto map scripts (imported from HnS, stubs)

AzaleaPokeCenter_EventScript_Fisher::
	msgbox AzaleaPokeCenter_Text_Fisher, MSGBOX_NPC
	end

AzaleaPokeCenter_EventScript_Gentleman::
	msgbox AzaleaPokeCenter_Text_Gentleman, MSGBOX_NPC
	end

AzaleaPokeCenter_EventScript_PokefanF::
	msgbox AzaleaPokeCenter_Text_PokefanF, MSGBOX_NPC
	end

CherryGrove_Pokecenter_Chansey::
	lock
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
	msgbox AzaleaPC_Text_Chansey, MSGBOX_DEFAULT
	waitmoncry
	release
	end

AzaleaPC_Text_Chansey:
	.string "CHANSEY is helping the NURSE\n"
	.string "care for POKeMON.$"

AzaleaPokeCenter_Text_Fisher:
	.string "You can fish up all sorts of\n"
	.string "rare POKeMON in JOHTO's waters!\pYou just need patience!$"

AzaleaPokeCenter_Text_Gentleman:
	.string "Ah, a fellow TRAINER.\n"
	.string "Best of luck on your travels!$"

AzaleaPokeCenter_Text_PokefanF:
	.string "I just adore my POKeMON!\n"
	.string "They're like family to me!$"

