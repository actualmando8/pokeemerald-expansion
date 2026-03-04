BurnedTower_B1F_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

BurnedTower_B1F_EventScript_Item_Taunt::
	msgbox BurnedTower_B1F_Text_Item_Taunt, MSGBOX_NPC
	end

BurnedTower_B1F_EventScript_Item_UltraBall::
	finditem ITEM_ULTRA_BALL
	end


BurnedTower_B1F_Text_Item_Taunt:
	.string "...$"
