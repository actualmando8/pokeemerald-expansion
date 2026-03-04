NationalPark_BugContest_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

NationalPark_BugContest_EventScript_Attendant::
	msgbox NationalPark_BugContest_Text_Attendant, MSGBOX_NPC
	end

NationalPark_BugContest_EventScript_BC1::
	msgbox NationalPark_BugContest_Text_BC1, MSGBOX_NPC
	end

NationalPark_BugContest_EventScript_BC2::
	msgbox NationalPark_BugContest_Text_BC2, MSGBOX_NPC
	end

NationalPark_BugContest_EventScript_BattleSign::
	msgbox NationalPark_BugContest_Text_BattleSign, MSGBOX_SIGN
	end

NationalPark_BugContest_EventScript_Belinda::
	msgbox NationalPark_BugContest_Text_Belinda, MSGBOX_NPC
	end

NationalPark_BugContest_EventScript_Boy::
	msgbox NationalPark_BugContest_Text_Boy, MSGBOX_NPC
	end

NationalPark_BugContest_EventScript_RelaxationSquare::
	msgbox NationalPark_BugContest_Text_RelaxationSquare, MSGBOX_NPC
	end

NationalPark_BugContest_EventScript_TrainerTips::
	msgbox NationalPark_BugContest_Text_TrainerTips, MSGBOX_NPC
	end

NationalPark_BugContest_EventScript_Trash::
	msgbox NationalPark_BugContest_Text_Trash, MSGBOX_NPC
	end

NationalPark_BugContest_EventScript_Trigger::
	return

NationalPark_BugContest_Text_Boy:
	.string "Did you know there are POKeMON\n"
	.string "you can only find at night?$"


NationalPark_BugContest_Text_Attendant:
	.string "Welcome! Please let me know\nif you need assistance.$"

NationalPark_BugContest_Text_BC1:
	.string "...$"

NationalPark_BugContest_Text_BC2:
	.string "...$"

NationalPark_BugContest_Text_BattleSign:
	.string "NationalPark BugContest$"

NationalPark_BugContest_Text_Belinda:
	.string "...$"

NationalPark_BugContest_Text_RelaxationSquare:
	.string "...$"

NationalPark_BugContest_Text_TrainerTips:
	.string "...$"

NationalPark_BugContest_Text_Trash:
	.string "...$"
