Route46_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

Route46_EventScript_Bailey::
	msgbox Route46_Text_Bailey, MSGBOX_NPC
	end

Route46_EventScript_Erin::
	msgbox Route46_Text_Erin, MSGBOX_NPC
	end

Route46_EventScript_Item_Revive::
	finditem ITEM_REVIVE
	end

Route46_EventScript_Sign::
	msgbox Route46_Text_Sign, MSGBOX_SIGN
	end

Route46_EventScript_Ted::
	msgbox Route46_Text_Ted, MSGBOX_NPC
	end


Route46_Text_Bailey:
	.string "...$"

Route46_Text_Erin:
	.string "...$"

Route46_Text_Sign:
	.string "Route46$"

Route46_Text_Ted:
	.string "...$"
