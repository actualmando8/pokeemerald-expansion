AzaleaTown_House1_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

AzaleaTown_House1_EventScript_Apprentice::
	msgbox AzaleaTown_House1_Text_Apprentice, MSGBOX_NPC
	end

AzaleaTown_House1_EventScript_Boss::
	msgbox AzaleaTown_House1_Text_Boss, MSGBOX_NPC
	end

AzaleaTown_House1_EventScript_Farfetchd::
	lock
	playmoncry SPECIES_FARFETCHD, CRY_MODE_NORMAL
	msgbox AzaleaTown_House1_Text_Farfetchd, MSGBOX_DEFAULT
	waitmoncry
	release
	end


AzaleaTown_House1_Text_Apprentice:
	.string "...$"

AzaleaTown_House1_Text_Boss:
	.string "...$"

AzaleaTown_House1_Text_Farfetchd:
	.string "FARFETCHD looks content.$"
