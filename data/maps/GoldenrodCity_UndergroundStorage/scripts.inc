GoldenrodCity_UndergroundStorage_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

GoldenrodCity_UndergroundStorage_EventScript_Director::
	msgbox GoldenrodCity_UndergroundStorage_Text_Director, MSGBOX_NPC
	end

GoldenrodCity_UndergroundStorage_EventScript_Eto::
	msgbox GoldenrodCity_UndergroundStorage_Text_Eto, MSGBOX_NPC
	end

GoldenrodCity_UndergroundStorage_EventScript_Grunt12::
	msgbox GoldenrodCity_UndergroundStorage_Text_Grunt12, MSGBOX_NPC
	end

GoldenrodCity_UndergroundStorage_EventScript_Grunt19::
	msgbox GoldenrodCity_UndergroundStorage_Text_Grunt19, MSGBOX_NPC
	end

GoldenrodCity_UndergroundStorage_EventScript_Item_MaxEther::
	finditem ITEM_MAX_ETHER
	end

GoldenrodCity_UndergroundStorage_EventScript_Item_TM_CALM_MIND::
	msgbox GoldenrodCity_UndergroundStorage_Text_Item_TM_CALM_MIND, MSGBOX_NPC
	end

GoldenrodCity_UndergroundStorage_EventScript_Item_UltraBall::
	finditem ITEM_ULTRA_BALL
	end


GoldenrodCity_UndergroundStorage_Text_Director:
	.string "...$"

GoldenrodCity_UndergroundStorage_Text_Eto:
	.string "...$"

GoldenrodCity_UndergroundStorage_Text_Grunt12:
	.string "...$"

GoldenrodCity_UndergroundStorage_Text_Grunt19:
	.string "...$"

GoldenrodCity_UndergroundStorage_Text_Item_TM_CALM_MIND:
	.string "...$"
