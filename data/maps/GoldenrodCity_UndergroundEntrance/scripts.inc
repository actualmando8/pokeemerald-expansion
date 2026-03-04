GoldenrodCity_UndergroundEntrance_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

GoldenrodUnderground_EventScript_SuperNerd::
	msgbox GoldenrodUnderground_Text_SuperNerd, MSGBOX_NPC
	end

GoldenrodUnderground_EventScript_Teacher::
	msgbox GoldenrodUnderground_Text_Teacher, MSGBOX_NPC
	end


GoldenrodUnderground_Text_SuperNerd:
	.string "I have been researching the\nlocal POKeMON population.$"

GoldenrodUnderground_Text_Teacher:
	.string "Knowledge is the key to\nbecoming a great TRAINER!$"
