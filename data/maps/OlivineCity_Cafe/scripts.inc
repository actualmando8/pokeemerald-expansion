OlivineCity_Cafe_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

OlivineCity_Cafe_EventScript_Jasmine::
	msgbox OlivineCity_Cafe_Text_Jasmine, MSGBOX_NPC
	end

OlivineCity_EventScript_Cook::
	msgbox OlivineCity_Cafe_Text_Cook, MSGBOX_NPC
	end

OlivineCity_EventScript_SailorA::
	msgbox OlivineCity_Cafe_Text_SailorA, MSGBOX_NPC
	end

OlivineCity_EventScript_SailorB::
	msgbox OlivineCity_Cafe_Text_SailorB, MSGBOX_NPC
	end

OlivineCity_Cafe_Text_Cook:
	.string "Welcome to OLIVINE CAFE!\n"
	.string "Our specialty is MOO MOO\l"
	.string "MILK tea. Would you like some?$"

OlivineCity_Cafe_Text_SailorA:
	.string "The sea is rough today.\n"
	.string "Better stay in port until\l"
	.string "it calms down.$"

OlivineCity_Cafe_Text_SailorB:
	.string "I've sailed across every sea\n"
	.string "in JOHTO.\p"
	.string "Nothing beats a warm drink\n"
	.string "after a long voyage!$"

OlivineCity_Cafe_Text_Jasmine:
	.string "JASMINE: My AMPHAROS fell ill\n"
	.string "but it's feeling much better\lnow, thanks to the medicine.\pThank you for caring.$"

