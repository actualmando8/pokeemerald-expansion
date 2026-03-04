IcePath_B1F_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

IcePath_B1F_EventScript_Item_Iron::
	finditem ITEM_IRON
	end

IcePath_B1F_EventScript_Item_Revive::
	finditem ITEM_REVIVE
	end

IcePath_B1F_EventScript_PuzzleSkipButton::
	msgbox IcePath_B1F_Text_PuzzleSkipButton, MSGBOX_NPC
	end

IcePath_B1F_EventScript_Sign::
	msgbox IcePath_B1F_Text_Sign, MSGBOX_SIGN
	end


IcePath_B1F_Text_PuzzleSkipButton:
	.string "...$"

IcePath_B1F_Text_Sign:
	.string "IcePath B1F$"
