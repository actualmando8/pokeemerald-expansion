Gate_IlexForest_Route34_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

Route34IlexForestGate_EventScript_Butterfree::
	lock
	playmoncry SPECIES_BUTTERFREE, CRY_MODE_NORMAL
	msgbox Route34IlexForestGate_Text_Butterfree, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route34IlexForestGate_EventScript_Lass::
	msgbox Route34IlexForestGate_Text_Lass, MSGBOX_NPC
	end

Route34IlexForestGate_Text_Lass:
	.string "I love walking around town.\n"
	.string "The fresh air is wonderful!$"


Route34IlexForestGate_Text_Butterfree:
	.string "BUTTERFREE looks content.$"
