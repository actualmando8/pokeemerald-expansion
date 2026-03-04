CianwoodHouse2_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

CianwoodHouse2_EventScript_Lass::
	msgbox CianwoodHouse2_Text_Lass, MSGBOX_NPC
	end

CianwoodHouse2_EventScript_Teacher::
	msgbox CianwoodHouse2_Text_Teacher, MSGBOX_NPC
	end

CianwoodHouse2_EventScript_Twin::
	msgbox CianwoodHouse2_Text_Twin, MSGBOX_NPC
	end

CianwoodHouse2_Text_Teacher:
	.string "The pharmacy here makes\n"
	.string "medicine from rare herbs.\p"
	.string "It's bitter but effective!$"

CianwoodHouse2_Text_Twin:
	.string "My mom buys medicine here\n"
	.string "for our POKeMON.\p"
	.string "The herbs smell funny!$"

CianwoodHouse2_Text_Lass:
	.string "I love walking around town.\n"
	.string "The fresh air is wonderful!$"

