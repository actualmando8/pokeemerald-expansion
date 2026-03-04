CianwoodCity_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

CianwoodCity_EventScript_CaveSign::
	msgbox CianwoodCity_Text_CaveSign, MSGBOX_SIGN
	end

CianwoodCity_EventScript_ChucksWife::
	msgbox CianwoodCity_Text_ChucksWife, MSGBOX_NPC
	end

CianwoodCity_EventScript_CitySign::
	msgbox CianwoodCity_Text_CitySign, MSGBOX_SIGN
	end

CianwoodCity_EventScript_Engineer::
	msgbox CianwoodCity_Text_Engineer, MSGBOX_NPC
	end

CianwoodCity_EventScript_GymSign::
	msgbox CianwoodCity_Text_GymSign, MSGBOX_SIGN
	end

CianwoodCity_EventScript_Lass::
	msgbox CianwoodCity_Text_Lass, MSGBOX_NPC
	end

CianwoodCity_EventScript_Pharmacy::
	msgbox CianwoodCity_Text_Pharmacy, MSGBOX_NPC
	end

CianwoodCity_EventScript_PokefanM::
	msgbox CianwoodCity_Text_PokefanM, MSGBOX_NPC
	end

CianwoodCity_EventScript_SuicuneTrigger::
	lockall
	msgbox CianwoodCity_Text_SuicuneTrigger, MSGBOX_DEFAULT
	releaseall
	end

CianwoodCity_EventScript_Youngster::
	msgbox CianwoodCity_Text_Youngster, MSGBOX_NPC
	end

CianwoodCity_Text_CitySign:
	.string "CIANWOOD CITY\nA Port Surrounded by Rough Seas$"

CianwoodCity_Text_GymSign:
	.string "CIANWOOD CITY POKeMON GYM\nLEADER: CHUCK\pHis Roaring Fists Do the Talking$"

CianwoodCity_Text_Lass:
	.string "I love walking around town.\n"
	.string "The fresh air is wonderful!$"

CianwoodCity_Text_PokefanM:
	.string "My POKeMON is the cutest!\n"
	.string "Don't you think so too?$"

CianwoodCity_Text_Youngster:
	.string "I want to catch every kind of\n"
	.string "POKeMON in JOHTO!$"

CianwoodCity_Text_CaveSign:
	.string "CLIFF CAVE\n"
	.string "Watch Your Step!$"

CianwoodCity_Text_ChucksWife:
	.string "My husband trains under\n"
	.string "the waterfall every day.\p"
	.string "He's so dedicated to his\n"
	.string "POKeMON training!$"

CianwoodCity_Text_Engineer:
	.string "I'm working on upgrading the\n"
	.string "CIANWOOD sea route.\p"
	.string "The currents here are strong,\n"
	.string "so be careful if you SURF!$"

CianwoodCity_Text_Pharmacy:
	.string "Welcome to CIANWOOD PHARMACY!\p"
	.string "Our medicines are made from\n"
	.string "rare herbs found only in\l"
	.string "CIANWOOD. They're bitter,\l"
	.string "but very effective!$"

CianwoodCity_Text_SuicuneTrigger:
	.string "A beautiful, regal POKeMON\n"
	.string "stands at the water's edge!\p"
	.string "Its crystalline mane shimmers\n"
	.string "in the light...\p"
	.string "SUICUNE gazes at you for a\n"
	.string "moment, then leaps across\l"
	.string "the sea and vanishes!$"

