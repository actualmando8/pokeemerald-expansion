Route33_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

AzaleaTown_EventScript_Trigger::
	lockall
	msgbox Route33_Text_AzaleaAhead, MSGBOX_DEFAULT
	releaseall
	end

Route33_EventScript_HikerAnthony::
	msgbox Route33_Text_HikerAnthony, MSGBOX_NPC
	end

Route33_EventScript_Lass::
	msgbox Route33_Text_Lass, MSGBOX_NPC
	end

Route33_Text_Lass:
	.string "I love walking around town.\n"
	.string "The fresh air is wonderful!$"


Route33_Text_HikerAnthony:
	.string "The caves around JOHTO are\nfull of surprises!$"

Route33_Text_AzaleaAhead:
	.string "The scent of flowers drifts\n"
	.string "from AZALEA TOWN ahead...$"

