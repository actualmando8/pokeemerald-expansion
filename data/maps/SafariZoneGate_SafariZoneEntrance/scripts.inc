SafariZoneGate_SafariZoneEntrance_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

SafariZoneGate_SafariZoneEntrance_EventScript_Baoba::
	msgbox SafariZoneGate_SafariZoneEntrance_Text_Baoba, MSGBOX_NPC
	end

SafariZoneGate_SafariZoneEntrance_EventScript_Boy::
	msgbox SafariZoneGate_SafariZoneEntrance_Text_Boy, MSGBOX_NPC
	end

SafariZoneGate_SafariZoneEntrance_EventScript_EntranceCounterTrigger::
	lockall
	msgbox SafariZone_Text_EntranceCounter, MSGBOX_DEFAULT
	releaseall
	end

SafariZoneGate_SafariZoneEntrance_Text_Boy:
	.string "Did you know there are POKeMON\n"
	.string "you can only find at night?$"


SafariZoneGate_SafariZoneEntrance_Text_Baoba:
	.string "...$"

SafariZone_Text_EntranceCounter:
	.string "RECEPTIONIST: Welcome to the\n"
	.string "SAFARI ZONE!\p"
	.string "For just $500, you can catch\n"
	.string "all kinds of rare POKeMON!$"

