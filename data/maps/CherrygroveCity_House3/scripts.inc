CherrygroveCity_House3_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

CherrygroveCity_House3_EventScript_Boy::
	msgbox CherrygroveCity_House3_Text_Boy, MSGBOX_NPC
	end

CherrygroveCity_House3_EventScript_Girl::
	msgbox CherrygroveCity_House3_Text_Girl, MSGBOX_NPC
	end

CherrygroveCity_House3_Text_Boy:
	.string "Did you know there are POKeMON\n"
	.string "you can only find at night?$"

CherrygroveCity_House3_Text_Girl:
	.string "I heard some POKeMON only evolve\n"
	.string "when they really trust you!$"

