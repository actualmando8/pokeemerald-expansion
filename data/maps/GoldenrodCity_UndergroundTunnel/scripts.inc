GoldenrodCity_UndergroundTunnel_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

GoldenrodCity_UndergroundTunnel_EventScript_Door::
	return

GoldenrodCity_UndergroundTunnel_EventScript_Item_Antidote::
	finditem ITEM_ANTIDOTE
	end

GoldenrodCity_UndergroundTunnel_EventScript_Item_CoinCase::
	msgbox GoldenrodCity_UndergroundTunnel_Text_Item_CoinCase, MSGBOX_NPC
	end

GoldenrodCity_UndergroundTunnel_EventScript_Item_ParalyzeHeal::
	msgbox GoldenrodCity_UndergroundTunnel_Text_Item_ParalyzeHeal, MSGBOX_NPC
	end

GoldenrodCity_UndergroundTunnel_EventScript_Item_SuperPotion::
	finditem ITEM_SUPER_POTION
	end

GoldenrodCity_UndergroundTunnel_EventScript_KimonoTriggerBot::
	return

GoldenrodCity_UndergroundTunnel_EventScript_KimonoTriggerTop::
	return

GoldenrodUnderground_EventScript_Brother_Haircut1::
	msgbox GoldenrodUnderground_Text_Brother_Haircut1, MSGBOX_NPC
	end

GoldenrodUnderground_EventScript_Brother_Haircut2::
	msgbox GoldenrodUnderground_Text_Brother_Haircut2, MSGBOX_NPC
	end

GoldenrodUnderground_EventScript_Donald::
	msgbox GoldenrodUnderground_Text_Donald, MSGBOX_NPC
	end

GoldenrodUnderground_EventScript_Eric::
	msgbox GoldenrodUnderground_Text_Eric, MSGBOX_NPC
	end

GoldenrodUnderground_EventScript_Issac::
	msgbox GoldenrodUnderground_Text_Issac, MSGBOX_NPC
	end

GoldenrodUnderground_EventScript_Teru::
	msgbox GoldenrodUnderground_Text_Teru, MSGBOX_NPC
	end


GoldenrodCity_UndergroundTunnel_Text_Item_CoinCase:
	.string "...$"

GoldenrodCity_UndergroundTunnel_Text_Item_ParalyzeHeal:
	.string "...$"

GoldenrodUnderground_Text_Brother_Haircut1:
	.string "...$"

GoldenrodUnderground_Text_Brother_Haircut2:
	.string "...$"

GoldenrodUnderground_Text_Donald:
	.string "...$"

GoldenrodUnderground_Text_Eric:
	.string "...$"

GoldenrodUnderground_Text_Issac:
	.string "...$"

GoldenrodUnderground_Text_Teru:
	.string "...$"
