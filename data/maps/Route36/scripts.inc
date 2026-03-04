Route36_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

Route36_EventScript_Arthur::
	msgbox Route36_Text_Arthur, MSGBOX_NPC
	end

Route36_EventScript_Lass::
	msgbox Route36_Text_Lass, MSGBOX_NPC
	end

Route36_EventScript_Mark::
	msgbox Route36_Text_Mark, MSGBOX_NPC
	end

Route36_EventScript_RockSmashGuy::
	msgbox Route36_Text_RockSmashGuy, MSGBOX_NPC
	end

Route36_EventScript_Schoolboy::
	msgbox Route36_Text_Schoolboy, MSGBOX_NPC
	end

Route36_EventScript_Sign::
	msgbox Route36_Text_Sign, MSGBOX_SIGN
	end

Route36_EventScript_Sign2::
	msgbox Route36_Text_Sign2, MSGBOX_SIGN
	end

Route36_EventScript_SudoWoodo::
	lock
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_NORMAL
	msgbox Route36_Text_SudoWoodo, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route36_Text_Lass:
	.string "I love walking around town.\n"
	.string "The fresh air is wonderful!$"


Route36_Text_Arthur:
	.string "...$"

Route36_Text_Mark:
	.string "...$"

Route36_Text_RockSmashGuy:
	.string "...$"

Route36_Text_Schoolboy:
	.string "POKeMON are so cool! I want\nto catch them all!$"

Route36_Text_Sign:
	.string "Route36$"

Route36_Text_Sign2:
	.string "Route36$"

Route36_Text_SudoWoodo:
	.string "SUDOWOODO is standing very\nstill...$"
