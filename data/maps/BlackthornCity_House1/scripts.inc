BlackthornCity_House1_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

BlackthornCity_House1EventScript_Dratini::
	lock
	playmoncry SPECIES_DRATINI, CRY_MODE_NORMAL
	msgbox BlackthornCity_House1Text_Dratini, MSGBOX_DEFAULT
	waitmoncry
	release
	end

BlackthornCity_House1EventScript_Granny::
	msgbox BlackthornCity_House1Text_Granny, MSGBOX_NPC
	end


BlackthornCity_House1Text_Dratini:
	.string "DRATINI looks content.$"

BlackthornCity_House1Text_Granny:
	.string "Would you like some tea, dear?\nYou look tired from traveling.$"
