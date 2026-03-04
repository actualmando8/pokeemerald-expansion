GoldenrodCity_RadioTower_1F_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

GoldenrodCity_RadioTower_1F_EventScript_LotteryClerk::
	msgbox GoldenrodCity_RadioTower_1F_Text_LotteryClerk, MSGBOX_NPC
	end

GoldenrodCity_RadioTower_1F_EventScript_Sign::
	msgbox GoldenrodCity_RadioTower_1F_Text_Sign, MSGBOX_SIGN
	end

RadioTower1F_EventScript_Grunt::
	msgbox RadioTower1F_Text_Grunt, MSGBOX_NPC
	end

RadioTower1F_EventScript_Lass::
	msgbox RadioTower1F_Text_Lass, MSGBOX_NPC
	end

RadioTower1F_EventScript_Reception::
	msgbox RadioTower1F_Text_Reception, MSGBOX_NPC
	end

RadioTower1F_EventScript_Whitney::
	msgbox RadioTower1F_Text_Whitney, MSGBOX_NPC
	end

RadioTower1F_EventScript_Youngster::
	msgbox RadioTower1F_Text_Youngster, MSGBOX_NPC
	end

RadioTower1F_Text_Lass:
	.string "I love walking around town.\n"
	.string "The fresh air is wonderful!$"

RadioTower1F_Text_Youngster:
	.string "I want to catch every kind of\n"
	.string "POKeMON in JOHTO!$"


GoldenrodCity_RadioTower_1F_Text_LotteryClerk:
	.string "Welcome! Let me know if you\nneed anything.$"

GoldenrodCity_RadioTower_1F_Text_Sign:
	.string "GoldenrodCity RadioTower 1F$"

RadioTower1F_Text_Grunt:
	.string "...$"

RadioTower1F_Text_Reception:
	.string "...$"

RadioTower1F_Text_Whitney:
	.string "...$"
