GoldenrodCity_DepartmentStore_3F_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

GoldenrodDeptStore3_EventScript_Nerd::
	msgbox GoldenrodDeptStore3_Text_Nerd, MSGBOX_NPC
	end

GoldenrodDeptStore3_EventScript_Rocker::
	msgbox GoldenrodDeptStore3_Text_Rocker, MSGBOX_NPC
	end

GoldenrodDeptStore3_EventScript_Sign::
	msgbox GoldenrodDeptStore3_Text_Sign, MSGBOX_SIGN
	end


GoldenrodDeptStore3_Text_Nerd:
	.string "I have been researching the\nlocal POKeMON population.$"

GoldenrodDeptStore3_Text_Rocker:
	.string "Rock and roll! POKeMON\nbattles get me fired up!$"

GoldenrodDeptStore3_Text_Sign:
	.string "GoldenrodCity DepartmentStore 3F$"
