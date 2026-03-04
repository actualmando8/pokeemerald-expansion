CianwoodPokecenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CianwoodPokecenter_OnTransition
	.byte 0

CianwoodPokecenter_OnTransition::
	setrespawn HEAL_LOCATION_CIANWOOD_CITY
	end

@ Johto map scripts (imported from HnS, stubs)

CianwoodGym_EventScript_GymGuide::
	msgbox CianwoodPC_Text_GymGuide, MSGBOX_NPC
	end

CianwoodPokecenter_EventScript_Lass::
	msgbox CianwoodPokecenter_Text_Lass, MSGBOX_NPC
	end

CianwoodPokecenter_EventScript_Nerd::
	msgbox CianwoodPC_Text_Nerd, MSGBOX_NPC
	end

CianwoodPokemoncenter_EventScript_Fisher::
	msgbox CianwoodPokemoncenter_Text_Fisher, MSGBOX_NPC
	end

CianwoodPokecenter_Text_Lass:
	.string "I love walking around town.\n"
	.string "The fresh air is wonderful!$"

CianwoodPokemoncenter_Text_Fisher:
	.string "You can fish up all sorts of\n"
	.string "rare POKeMON in JOHTO's waters!\p"
	.string "You just need patience!$"

CianwoodPC_Text_GymGuide:
	.string "Yo! CHAMP in the making!\p"
	.string "CHUCK trains under a waterfall.\n"
	.string "His Fighting POKeMON are\l"
	.string "incredibly powerful!$"

CianwoodPC_Text_Nerd:
	.string "I've been studying the tides\n"
	.string "around CIANWOOD.\p"
	.string "The WHIRL ISLANDS create\n"
	.string "fascinating currents!$"

