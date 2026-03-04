Route39_Barn_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

Route39_Barn_EventScript_Miltank::
	lock
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
	msgbox Route39_Barn_Text_Miltank, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route39_Barn_EventScript_Twins::
	msgbox Route39_Barn_Text_Twins, MSGBOX_NPC
	end


Route39_Barn_Text_Miltank:
	.string "MILTANK is mooing contentedly.$"

Route39_Barn_Text_Twins:
	.string "My sibling and I both love\nPOKeMON!$"
