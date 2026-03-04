Route47_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

Route47_EventScript_Camper::
	msgbox Route47_Text_Camper, MSGBOX_NPC
	end

Route47_EventScript_Chinchou::
	msgbox Route47_Text_Chinchou, MSGBOX_NPC
	end

Route47_EventScript_Duff::
	msgbox Route47_Text_Duff, MSGBOX_NPC
	end

Route47_EventScript_Eda::
	msgbox Route47_Text_Eda, MSGBOX_NPC
	end

Route47_EventScript_Hiker::
	msgbox Route47_Text_Hiker, MSGBOX_NPC
	end

Route47_EventScript_Item_LuckyPunch::
	msgbox Route47_Text_Item_LuckyPunch, MSGBOX_NPC
	end

Route47_EventScript_Item_Pearl::
	msgbox Route47_Text_Item_Pearl, MSGBOX_NPC
	end

Route47_EventScript_Item_Revive::
	finditem ITEM_REVIVE
	end

Route47_EventScript_Item_Stardust::
	msgbox Route47_Text_Item_Stardust, MSGBOX_NPC
	end

Route47_EventScript_Item_WhiteFlute::
	msgbox Route47_Text_Item_WhiteFlute, MSGBOX_NPC
	end

Route47_EventScript_Kae::
	msgbox Route47_Text_Kae, MSGBOX_NPC
	end

Route47_EventScript_Sage::
	msgbox Route47_Text_Sage, MSGBOX_NPC
	end

Route47_EventScript_Thom::
	msgbox Route47_Text_Thom, MSGBOX_NPC
	end

Route47_Text_Camper:
	.string "Camping out under the stars\n"
	.string "with your POKeMON is the best!$"

Route47_Text_Hiker:
	.string "The mountains of JOHTO are\n"
	.string "treacherous but rewarding.\pBe sure to bring ROCK SMASH!$"

Route47_Text_Sage:
	.string "The path of the TRAINER is\n"
	.string "a journey of patience and\lunderstanding.$"


Route47_Text_Chinchou:
	.string "...$"

Route47_Text_Duff:
	.string "...$"

Route47_Text_Eda:
	.string "...$"

Route47_Text_Item_LuckyPunch:
	.string "...$"

Route47_Text_Item_Pearl:
	.string "...$"

Route47_Text_Item_Stardust:
	.string "...$"

Route47_Text_Item_WhiteFlute:
	.string "...$"

Route47_Text_Kae:
	.string "...$"

Route47_Text_Thom:
	.string "...$"
