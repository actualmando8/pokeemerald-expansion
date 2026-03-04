OlivineCity_Mart_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

OlivineCity_EventScript_Lass::
	msgbox OlivineCity_Text_Lass, MSGBOX_NPC
	end

OlivineCity_EventScript_Trainer1::
	msgbox OlivineCity_Mart_Text_Trainer1, MSGBOX_NPC
	end

OlivineCity_Mart_Text_Trainer1:
	.string "I always stock up on POTIONS\n"
	.string "before sailing to CIANWOOD.\p"
	.string "It's a long trip across\n"
	.string "the ocean!$"

OlivineCity_Text_Lass:
	.string "I love walking around town.\n"
	.string "The fresh air is wonderful!$"

