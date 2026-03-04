VioletCity_Mart_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

VioletCity_Mart_EventScript_Clerk::
	msgbox VioletCity_Mart_Text_Clerk, MSGBOX_NPC
	end

VioletCity_Mart_EventScript_Granny::
	msgbox VioletCity_Mart_Text_Granny, MSGBOX_NPC
	end

VioletCity_Mart_EventScript_Rocker::
	msgbox VioletCity_Mart_Text_Rocker, MSGBOX_NPC
	end

VioletCity_Mart_Text_Granny:
	.string "Would you like some tea, dear?\n"
	.string "You look tired from traveling.$"

VioletCity_Mart_Text_Rocker:
	.string "I always stock up on POKe\n"
	.string "BALLS before heading out!\p"
	.string "You never know when you'll\n"
	.string "find a rare POKeMON!$"

VioletCity_Mart_Text_Clerk:
	.string "Welcome! Let me know if you\n"
	.string "need anything.$"

