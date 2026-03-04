BellchimeTrail_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

BellchimeTrail_EventScript_Morty::
	msgbox BellchimeTrail_Text_Morty, MSGBOX_NPC
	end

EcruteakBellchimeTrail_EventScript_DoorTrigger::
	lockall
	msgbox BellchimeTrail_Text_DoorTrigger, MSGBOX_DEFAULT
	releaseall
	end

EcruteakBellchimeTrail_EventScript_Item_BigMushroom::
	finditem ITEM_BIG_MUSHROOM
	end

Route7_EventScript_Door::
	lockall
	msgbox BellchimeTrail_Text_Route7Door, MSGBOX_DEFAULT
	releaseall
	end

BellchimeTrail_Text_Morty:
	.string "MORTY: So you've come this\n"
	.string "far... The path ahead leads\l"
	.string "to TIN TOWER.\p"
	.string "Only those chosen by the\n"
	.string "legendary POKeMON may\l"
	.string "proceed.$"

BellchimeTrail_Text_DoorTrigger:
	.string "The door to TIN TOWER is\n"
	.string "sealed by a mysterious force.\p"
	.string "Only those with the CLEAR\n"
	.string "BELL may enter...$"

BellchimeTrail_Text_Route7Door:
	.string "The door won't budge.\n"
	.string "It appears to be locked.$"

