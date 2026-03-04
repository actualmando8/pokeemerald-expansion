Route121_SafariZoneGate_SafariZoneEntrance_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)


Route121_SafariZoneGate_SafariZoneEntrance_EventScript_EntranceCounterTrigger::
	return

Route121_SafariZoneGate_SafariZoneEntrance_EventScript_InfoAttendant::
	msgbox Route121_SafariZoneGate_SafariZoneEntrance_Text_InfoAttendant, MSGBOX_NPC
	end

Route121_SafariZoneGate_SafariZoneEntrance_EventScript_TrainerTipSign::
	msgbox Route121_SafariZoneGate_SafariZoneEntrance_Text_TrainerTipSign, MSGBOX_SIGN
	end

Route121_SafariZoneGate_SafariZoneEntrance_EventScript_WelcomeAttendant::
	msgbox Route121_SafariZoneGate_SafariZoneEntrance_Text_WelcomeAttendant, MSGBOX_NPC
	end


Route121_SafariZoneGate_SafariZoneEntrance_Text_InfoAttendant:
	.string "Welcome! Please let me know\nif you need assistance.$"

Route121_SafariZoneGate_SafariZoneEntrance_Text_TrainerTipSign:
	.string "Route121 SafariZoneGate SafariZoneEntrance$"

Route121_SafariZoneGate_SafariZoneEntrance_Text_WelcomeAttendant:
	.string "Welcome! Please let me know\nif you need assistance.$"
