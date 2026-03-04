SafariZone_Top_Right_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

VioletCity_EventScript_Rattata::
	lock
	playmoncry SPECIES_RATTATA, CRY_MODE_NORMAL
	msgbox VioletCity_Text_Rattata, MSGBOX_DEFAULT
	waitmoncry
	release
	end


VioletCity_Text_Rattata:
	.string "RATTATA looks content.$"
