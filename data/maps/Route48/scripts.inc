Route48_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

SafariZoneGate_EventScript_BackupTrigger::
	goto SafariZoneGate_EventScript_Trigger
	end

SafariZoneGate_EventScript_Trigger::
	lockall
	msgbox Route48_Text_SafariAhead, MSGBOX_DEFAULT
	releaseall
	end

Route48_Text_SafariAhead:
	.string "The SAFARI ZONE GATE is\n"
	.string "just ahead...$"

