Route45_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

Route45_EventScript_Erik::
	msgbox Route45_Text_Erik, MSGBOX_NPC
	end

Route45_EventScript_Item_Elixir::
	finditem ITEM_ELIXIR
	end

Route45_EventScript_Item_Full_Heal::
	finditem ITEM_FULL_HEAL
	end

Route45_EventScript_Item_Max_Potion::
	finditem ITEM_POTION
	end

Route45_EventScript_Item_Nugget::
	finditem ITEM_NUGGET
	end

Route45_EventScript_Kelly::
	msgbox Route45_Text_Kelly, MSGBOX_NPC
	end

Route45_EventScript_Kenji::
	msgbox Route45_Text_Kenji, MSGBOX_NPC
	end

Route45_EventScript_Michael::
	msgbox Route45_Text_Michael, MSGBOX_NPC
	end

Route45_EventScript_Parry::
	msgbox Route45_Text_Parry, MSGBOX_NPC
	end

Route45_EventScript_Quentin::
	msgbox Route45_Text_Quentin, MSGBOX_NPC
	end

Route45_EventScript_Ryan::
	msgbox Route45_Text_Ryan, MSGBOX_NPC
	end

Route45_EventScript_Sign::
	msgbox Route45_Text_Sign, MSGBOX_SIGN
	end

Route45_EventScript_Timothy::
	msgbox Route45_Text_Timothy, MSGBOX_NPC
	end


Route45_Text_Erik:
	.string "...$"

Route45_Text_Kelly:
	.string "...$"

Route45_Text_Kenji:
	.string "...$"

Route45_Text_Michael:
	.string "...$"

Route45_Text_Parry:
	.string "...$"

Route45_Text_Quentin:
	.string "...$"

Route45_Text_Ryan:
	.string "...$"

Route45_Text_Sign:
	.string "Route45$"

Route45_Text_Timothy:
	.string "...$"
