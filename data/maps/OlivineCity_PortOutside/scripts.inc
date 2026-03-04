OlivineCity_PortOutside_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

OlivineCity_PortOutside_EventScript_Fisherman1::
	msgbox OlivinePort_Out_Text_Fisherman1, MSGBOX_NPC
	end

OlivineCity_PortOutside_EventScript_Fisherman2::
	msgbox OlivinePort_Out_Text_Fisherman2, MSGBOX_NPC
	end

OlivineCity_PortOutside_EventScript_Sabrina::
	msgbox OlivinePort_Out_Text_Sabrina, MSGBOX_NPC
	end

OlivinePort_Out_Text_Fisherman1:
	.string "OLIVINE PORT is one of the\n"
	.string "busiest in JOHTO.\p"
	.string "Ships come and go all day!$"

OlivinePort_Out_Text_Fisherman2:
	.string "I caught a TENTACOOL right\n"
	.string "off the pier yesterday!\p"
	.string "The fishing here is great!$"

OlivinePort_Out_Text_Sabrina:
	.string "The sea breeze feels nice.\n"
	.string "I'm waiting for the next\l"
	.string "ship to arrive.$"

