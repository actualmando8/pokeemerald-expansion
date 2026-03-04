IcePath_B3F_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

IcePath_B3F_EventScript_Delibird::
	msgbox IcePath_B3F_Text_Delibird, MSGBOX_NPC
	end

IcePath_B3F_EventScript_Swinub::
	lock
	playmoncry SPECIES_SWINUB, CRY_MODE_NORMAL
	msgbox IcePath_B3F_Text_Swinub, MSGBOX_DEFAULT
	waitmoncry
	release
	end

IcePath_B3F_Trigger_Swinub_Jump::
	return


IcePath_B3F_Text_Delibird:
	.string "...$"

IcePath_B3F_Text_Swinub:
	.string "SWINUB looks content.$"
