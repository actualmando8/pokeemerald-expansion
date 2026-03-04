IcePath_1F_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

IcePath_1F_EventScript_Item_HM_Waterfall::
	msgbox IcePath_1F_Text_Item_HM_Waterfall, MSGBOX_NPC
	end

IcePath_1F_EventScript_Item_PpUp::
	finditem ITEM_PP_UP
	end

IcePath_1F_EventScript_Item_Protein::
	finditem ITEM_PROTEIN
	end

IcePath_1F_EventScript_KimonoGirl::
	msgbox IcePath_1F_Text_KimonoGirl, MSGBOX_NPC
	end

IcePath_1F_Trigger_KimonoGirl::
	return


IcePath_1F_Text_Item_HM_Waterfall:
	.string "...$"

IcePath_1F_Text_KimonoGirl:
	.string "I heard there are rare POKeMON\nnearby!$"
