GoldenrodCity_DepartmentStore_2F_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

GoldenrodDeptStore2_EventScript_CooltrainerF::
	msgbox GoldenrodDeptStore2_Text_CooltrainerF, MSGBOX_NPC
	end

GoldenrodDeptStore2_EventScript_Gent::
	msgbox GoldenrodDeptStore2_Text_Gent, MSGBOX_NPC
	end

GoldenrodDeptStore2_EventScript_Sign::
	msgbox GoldenrodDeptStore2_Text_Sign, MSGBOX_SIGN
	end

GoldenrodDeptStore2_EventScript_Youngster::
	msgbox GoldenrodDeptStore2_Text_Youngster, MSGBOX_NPC
	end

GoldenrodDeptStore2_Text_CooltrainerF:
	.string "Training POKeMON isn't just\n"
	.string "about winning battles.\pIt's about building bonds.$"

GoldenrodDeptStore2_Text_Youngster:
	.string "I want to catch every kind of\n"
	.string "POKeMON in JOHTO!$"


GoldenrodDeptStore2_Text_Gent:
	.string "...$"

GoldenrodDeptStore2_Text_Sign:
	.string "GoldenrodCity DepartmentStore 2F$"
