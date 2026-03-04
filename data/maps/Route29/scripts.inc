Route29_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

Route29_EventScript_Boy::
	msgbox Route29_Text_Boy, MSGBOX_NPC
	end

Route29_EventScript_Girl::
	msgbox Route29_Text_Girl, MSGBOX_NPC
	end

Route29_EventScript_ItemPotion::
	finditem ITEM_POTION
	end

Route29_EventScript_Lass::
	msgbox Route29_Text_Lass, MSGBOX_NPC
	end

Route29_EventScript_OldMan::
	msgbox Route29_Text_OldMan, MSGBOX_NPC
	end

Route29_EventScript_Sign::
	msgbox Route29_Text_Sign, MSGBOX_SIGN
	end

Route29_EventScript_Tuscany::
	msgbox Route29_Text_Tuscany, MSGBOX_NPC
	end

Route29_EventScript_Youngster::
	msgbox Route29_Text_Youngster, MSGBOX_NPC
	end

Route29_Trigger_Monview::
	lockall
	msgbox Route29_Text_Monview, MSGBOX_DEFAULT
	releaseall
	end

Route29_Text_Boy:
	.string "Did you know there are POKeMON\n"
	.string "you can only find at night?$"

Route29_Text_Girl:
	.string "I heard some POKeMON only evolve\n"
	.string "when they really trust you!$"

Route29_Text_Lass:
	.string "I love walking around town.\n"
	.string "The fresh air is wonderful!$"

Route29_Text_Youngster:
	.string "I want to catch every kind of\n"
	.string "POKeMON in JOHTO!$"


Route29_Text_OldMan:
	.string "This is a nice place.\nThe people here are friendly.$"

Route29_Text_Sign:
	.string "Route29$"

Route29_Text_Tuscany:
	.string "...$"

Route29_Text_Monview:
	.string "Wild POKeMON are rustling in\n"
	.string "the tall grass nearby...$"

