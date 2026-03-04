BlackthornCity_Mart_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

BlackthornMart_EventScript_BlackBelt::
	msgbox BlackthornMart_Text_BlackBelt, MSGBOX_NPC
	end

BlackthornMart_EventScript_CoolTrainerM::
	msgbox BlackthornMart_Text_CoolTrainerM, MSGBOX_NPC
	end

BlackthornMart_Text_BlackBelt:
	.string "Hiyaah! Train your body and\n"
	.string "your POKeMON will follow!$"

BlackthornMart_Text_CoolTrainerM:
	.string "A strong TRAINER raises their\n"
	.string "POKeMON with care and\ldedication.$"

