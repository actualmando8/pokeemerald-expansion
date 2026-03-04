Gate_Route29_Route46_MapScripts::
	.byte 0

@ Gate Route29/Route46 scripts (stubs)

Gate_Route29_Route46_EventScript_Officer::
	msgbox Gate_Route29_Route46_Text_Officer, MSGBOX_NPC
	end

Gate_Route29_Route46_EventScript_Youngster::
	msgbox Gate_Route29_Route46_Text_Youngster, MSGBOX_NPC
	end

Gate_Route29_Route46_Text_Youngster:
	.string "I want to catch every kind of\n"
	.string "POKeMON in JOHTO!$"


Gate_Route29_Route46_Text_Officer:
	.string "...$"
