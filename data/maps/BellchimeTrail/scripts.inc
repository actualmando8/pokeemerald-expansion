BellchimeTrail_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

BellchimeTrail_EventScript_Morty::
	msgbox BellchimeTrail_Text_Morty, MSGBOX_NPC
	end

EcruteakBellchimeTrail_EventScript_DoorTrigger::
	return

EcruteakBellchimeTrail_EventScript_Item_BigMushroom::
	finditem ITEM_BIG_MUSHROOM
	end

Route7_EventScript_Door::
	return

BellchimeTrail_Text_Morty:
	.string "MORTY: So you've come this\n"
	.string "far... The path ahead leads\l"
	.string "to TIN TOWER.\p"
	.string "Only those chosen by the\n"
	.string "legendary POKeMON may\l"
	.string "proceed.$"

