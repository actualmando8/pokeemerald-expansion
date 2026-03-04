Route121_SafariZoneGate_SafariZoneEntrance_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)


Route121_SafariZoneGate_SafariZoneEntrance_EventScript_EntranceCounterTrigger::
	lockall
	msgbox Route121_SafariZone_Text_EntranceCounter, MSGBOX_DEFAULT
	releaseall
	end

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

Route121_SafariZone_Text_EntranceCounter:
	.string "RECEPTIONIST: Welcome to the\n"
	.string "SAFARI ZONE!\p"
	.string "For just $500, you can catch\n"
	.string "all kinds of rare POKeMON!$"

