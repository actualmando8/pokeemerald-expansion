WhirlIslands_Descent_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

WhirlIslands_B2F_Trigger_Fog::
	return

WhirlIslands_Descent_EventScript_Item_Full_Restore::
	finditem ITEM_FULL_RESTORE
	end

WhirlIslands_Descent_EventScript_Item_Max_Revive::
	finditem ITEM_REVIVE
	end

WhirlIslands_Descent_EventScript_Item_PP_Max::
	msgbox WhirlIslands_Descent_Text_Item_PP_Max, MSGBOX_NPC
	end


WhirlIslands_Descent_Text_Item_PP_Max:
	.string "...$"
