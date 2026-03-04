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
	return

SafariZoneGate_SafariZoneEntrance_Text_Boy:
	.string "Did you know there are POKeMON\n"
	.string "you can only find at night?$"


SafariZoneGate_SafariZoneEntrance_Text_Baoba:
	.string "...$"
