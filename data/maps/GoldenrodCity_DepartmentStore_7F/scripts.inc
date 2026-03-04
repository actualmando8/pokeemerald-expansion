GoldenrodCity_DepartmentStore_7F_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

GoldenrodDeptStore7_EventScript_Bugcatcher::
	msgbox GoldenrodDeptStore7_Text_Bugcatcher, MSGBOX_NPC
	end

GoldenrodDeptStore7_EventScript_Nerd::
	msgbox GoldenrodDeptStore7_Text_Nerd, MSGBOX_NPC
	end

GoldenrodDeptStore7_EventScript_PokefanF::
	msgbox GoldenrodDeptStore7_Text_PokefanF, MSGBOX_NPC
	end

GoldenrodDeptStore7_EventScript_PokefanM::
	msgbox GoldenrodDeptStore7_Text_PokefanM, MSGBOX_NPC
	end

GoldenrodDeptStore7_Text_Bugcatcher:
	.string "Have you tried looking for\n"
	.string "Bug POKeMON in tall grass?\pSome of them are really rare!$"

GoldenrodDeptStore7_Text_PokefanF:
	.string "I just adore my POKeMON!\n"
	.string "They're like family to me!$"

GoldenrodDeptStore7_Text_PokefanM:
	.string "My POKeMON is the cutest!\n"
	.string "Don't you think so too?$"


GoldenrodDeptStore7_Text_Nerd:
	.string "I have been researching the\nlocal POKeMON population.$"
