Route43_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

Route43_EventScript_Ben::
	msgbox Route43_Text_Ben, MSGBOX_NPC
	end

Route43_EventScript_Brent::
	msgbox Route43_Text_Brent, MSGBOX_NPC
	end

Route43_EventScript_Item_Max_Ether::
	finditem ITEM_ETHER
	end

Route43_EventScript_Marvin::
	msgbox Route43_Text_Marvin, MSGBOX_NPC
	end

Route43_EventScript_Ron::
	msgbox Route43_Text_Ron, MSGBOX_NPC
	end

Route43_EventScript_Sign1::
	msgbox Route43_Text_Sign1, MSGBOX_SIGN
	end

Route43_EventScript_Sign2::
	msgbox Route43_Text_Sign2, MSGBOX_SIGN
	end

Route43_EventScript_Spencer::
	msgbox Route43_Text_Spencer, MSGBOX_NPC
	end

Route43_EventScript_Tiffany::
	msgbox Route43_Text_Tiffany, MSGBOX_NPC
	end


Route43_Text_Ben:
	.string "...$"

Route43_Text_Brent:
	.string "...$"

Route43_Text_Marvin:
	.string "...$"

Route43_Text_Ron:
	.string "...$"

Route43_Text_Sign1:
	.string "Route43$"

Route43_Text_Sign2:
	.string "Route43$"

Route43_Text_Spencer:
	.string "...$"

Route43_Text_Tiffany:
	.string "...$"
