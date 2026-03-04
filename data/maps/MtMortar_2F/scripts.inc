MtMortar_2F_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

MtMortar_2F_EventScript_Item_DragonScale::
	msgbox MtMortar_2F_Text_Item_DragonScale, MSGBOX_NPC
	end

MtMortar_2F_EventScript_Item_Elixir::
	finditem ITEM_ELIXIR
	end

MtMortar_2F_EventScript_Item_Ether::
	finditem ITEM_ETHER
	end

MtMortar_2F_EventScript_Item_Iron::
	finditem ITEM_IRON
	end

MtMortar_2F_EventScript_Item_MaxRevive::
	finditem ITEM_REVIVE
	end

MtMortar_2F_EventScript_Item_RareCandy::
	finditem ITEM_RARE_CANDY
	end

MtMortar_2F_EventScript_Nerd::
	msgbox MtMortar_2F_Text_Nerd, MSGBOX_NPC
	end


MtMortar_2F_Text_Item_DragonScale:
	.string "...$"

MtMortar_2F_Text_Nerd:
	.string "I have been researching the\nlocal POKeMON population.$"
