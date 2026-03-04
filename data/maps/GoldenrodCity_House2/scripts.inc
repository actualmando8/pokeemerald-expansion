GoldenrodCity_House2_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

GoldenrodCity_House2_EventScript_Man::
	msgbox GoldenrodCity_House2_Text_Man, MSGBOX_NPC
	end

GoldenrodCity_House2_EventScript_Woman::
	msgbox GoldenrodCity_House2_Text_Woman, MSGBOX_NPC
	end

GoldenrodCity_House2_Text_Man:
	.string "JOHTO has so many places to\n"
	.string "explore. Have you been to\lthe NATIONAL PARK yet?$"

GoldenrodCity_House2_Text_Woman:
	.string "Be sure to stock up on supplies\n"
	.string "before heading out on your\ljourney!$"

