Route42_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

MahoganyTown_EventScript_TownTrigger::
	lockall
	msgbox Route42_Text_MahoganyAhead, MSGBOX_DEFAULT
	releaseall
	end

Route42_EventScript_Ben::
	msgbox Route42_Text_Ben, MSGBOX_NPC
	end

Route42_EventScript_Item_Mint::
	msgbox Route42_Text_Item_Mint, MSGBOX_NPC
	end

Route42_EventScript_Item_SuperPotion::
	finditem ITEM_SUPER_POTION
	end

Route42_EventScript_Item_UltraBall::
	finditem ITEM_ULTRA_BALL
	end

Route42_EventScript_MortarSign::
	msgbox Route42_Text_MortarSign, MSGBOX_SIGN
	end

Route42_EventScript_Shane::
	msgbox Route42_Text_Shane, MSGBOX_NPC
	end

Route42_EventScript_Sign::
	msgbox Route42_Text_Sign, MSGBOX_SIGN
	end

Route42_EventScript_Suicune_Trigger::
	lockall
	msgbox Route42_Text_SuicuneFlash, MSGBOX_DEFAULT
	releaseall
	end

Route42_EventScript_Tully::
	msgbox Route42_Text_Tully, MSGBOX_NPC
	end


Route42_Text_Ben:
	.string "...$"

Route42_Text_Item_Mint:
	.string "...$"

Route42_Text_MortarSign:
	.string "Route42$"

Route42_Text_Shane:
	.string "...$"

Route42_Text_Sign:
	.string "Route42$"

Route42_Text_Tully:
	.string "...$"

Route42_Text_MahoganyAhead:
	.string "The quiet town of MAHOGANY\n"
	.string "lies just ahead.\p"
	.string "MT. MORTAR looms to the\n"
	.string "north...$"

Route42_Text_SuicuneFlash:
	.string "A flash of blue streaks\n"
	.string "across the water's surface!\p"
	.string "A majestic POKeMON was there\n"
	.string "for just an instant... then\l"
	.string "vanished without a trace.$"

