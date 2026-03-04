GoldenrodCity_DepartmentStore_1F_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

GoldenrodDeptStore1_EventScript_BugCatcher::
	msgbox GoldenrodDeptStore1_Text_BugCatcher, MSGBOX_NPC
	end

GoldenrodDeptStore1_EventScript_Directory::
	msgbox GoldenrodDeptStore1_Text_Directory, MSGBOX_NPC
	end

GoldenrodDeptStore1_EventScript_Gentleman::
	msgbox GoldenrodDeptStore1_Text_Gentleman, MSGBOX_NPC
	end

GoldenrodDeptStore1_EventScript_PokefanF::
	msgbox GoldenrodDeptStore1_Text_PokefanF, MSGBOX_NPC
	end

GoldenrodDeptStore1_EventScript_Receptionist::
	msgbox GoldenrodDeptStore1_Text_Receptionist, MSGBOX_NPC
	end

GoldenrodDeptStore1_Text_BugCatcher:
	.string "Have you tried looking for\n"
	.string "Bug POKeMON in tall grass?\pSome of them are really rare!$"

GoldenrodDeptStore1_Text_Gentleman:
	.string "Ah, a fellow TRAINER.\n"
	.string "Best of luck on your travels!$"

GoldenrodDeptStore1_Text_PokefanF:
	.string "I just adore my POKeMON!\n"
	.string "They're like family to me!$"


GoldenrodDeptStore1_Text_Directory:
	.string "...$"

GoldenrodDeptStore1_Text_Receptionist:
	.string "Welcome! How may I help you?$"
