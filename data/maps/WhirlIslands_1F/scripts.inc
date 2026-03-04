WhirlIslands_1F_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

WhirlIslands_1F_EventScript_Item_Full_Restore::
	finditem ITEM_FULL_RESTORE
	end

WhirlIslands_1F_EventScript_Item_Guard_Spec::
	msgbox WhirlIslands_1F_Text_Item_Guard_Spec, MSGBOX_NPC
	end

WhirlIslands_1F_EventScript_Item_Rare_Candy::
	finditem ITEM_RARE_CANDY
	end

WhirlIslands_1F_EventScript_Item_Ultra_Ball::
	finditem ITEM_ULTRA_BALL
	end


WhirlIslands_1F_Text_Item_Guard_Spec:
	.string "Please have your pass ready\nto proceed.$"
