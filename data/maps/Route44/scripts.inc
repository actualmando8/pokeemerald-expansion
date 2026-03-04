Route44_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

Route44_EventScript_Allen::
	msgbox Route44_Text_Allen, MSGBOX_NPC
	end

Route44_EventScript_Cybil::
	msgbox Route44_Text_Cybil, MSGBOX_NPC
	end

Route44_EventScript_Edgar::
	msgbox Route44_Text_Edgar, MSGBOX_NPC
	end

Route44_EventScript_Item_Elixir::
	finditem ITEM_ELIXIR
	end

Route44_EventScript_Item_MaxRepel::
	finditem ITEM_REPEL
	end

Route44_EventScript_Item_UltraBall::
	finditem ITEM_ULTRA_BALL
	end

Route44_EventScript_Phil::
	msgbox Route44_Text_Phil, MSGBOX_NPC
	end

Route44_EventScript_Sign1::
	msgbox Route44_Text_Sign1, MSGBOX_SIGN
	end

Route44_EventScript_Sign2::
	msgbox Route44_Text_Sign2, MSGBOX_SIGN
	end

Route44_EventScript_Vance::
	msgbox Route44_Text_Vance, MSGBOX_NPC
	end

Route44_EventScript_Wilton::
	msgbox Route44_Text_Wilton, MSGBOX_NPC
	end

Route44_EventScript_Zach::
	msgbox Route44_Text_Zach, MSGBOX_NPC
	end


Route44_Text_Allen:
	.string "...$"

Route44_Text_Cybil:
	.string "...$"

Route44_Text_Edgar:
	.string "...$"

Route44_Text_Phil:
	.string "...$"

Route44_Text_Sign1:
	.string "Route44$"

Route44_Text_Sign2:
	.string "Route44$"

Route44_Text_Vance:
	.string "...$"

Route44_Text_Wilton:
	.string "...$"

Route44_Text_Zach:
	.string "...$"
