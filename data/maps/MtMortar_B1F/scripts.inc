MtMortar_B1F_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

MountMortar4_EventScript_Kiyo::
	msgbox MountMortar4_Text_Kiyo, MSGBOX_NPC
	end

MtMortar_B1F_EventScript_Item_Carbos::
	finditem ITEM_CARBOS
	end

MtMortar_B1F_EventScript_Item_HyperPotion::
	finditem ITEM_HYPER_POTION
	end

MtMortar_B1F_EventScript_Item_MaxEther::
	finditem ITEM_MAX_ETHER
	end

MtMortar_B1F_EventScript_Item_MaxRevive::
	finditem ITEM_REVIVE
	end

MtMortar_B1F_EventScript_Item_PPUp::
	finditem ITEM_PP_UP
	end


MountMortar4_Text_Kiyo:
	.string "...$"
