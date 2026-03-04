GoldenrodCity_DepartmentStore_4F_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

GoldenrodDeptStore4_EventScript_BugCatcher::
	msgbox GoldenrodDeptStore4_Text_BugCatcher, MSGBOX_NPC
	end

GoldenrodDeptStore4_EventScript_Cooltrainer::
	msgbox GoldenrodDeptStore4_Text_Cooltrainer, MSGBOX_NPC
	end

GoldenrodDeptStore4_EventScript_GBAKid::
	msgbox GoldenrodDeptStore4_Text_GBAKid, MSGBOX_NPC
	end

GoldenrodDeptStore4_EventScript_Sign::
	msgbox GoldenrodDeptStore4_Text_Sign, MSGBOX_SIGN
	end

GoldenrodDeptStore4_Text_BugCatcher:
	.string "Have you tried looking for\n"
	.string "Bug POKeMON in tall grass?\pSome of them are really rare!$"

GoldenrodDeptStore4_Text_Cooltrainer:
	.string "Only serious TRAINERS make it\n"
	.string "to the POKeMON LEAGUE.\pAre you up to the challenge?$"


GoldenrodDeptStore4_Text_GBAKid:
	.string "I am going to be a TRAINER\nsomeday! Just you wait!$"

GoldenrodDeptStore4_Text_Sign:
	.string "GoldenrodCity DepartmentStore 4F$"
