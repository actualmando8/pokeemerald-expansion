CliffEdgeGate_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

CliffEdgeGate_EventScript_CaveSign::
	msgbox CliffEdgeGate_Text_CaveSign, MSGBOX_SIGN
	end

CliffEdgeGate_EventScript_Picnicker::
	msgbox CliffEdgeGate_Text_Picnicker, MSGBOX_NPC
	end

CliffEdgeGate_EventScript_Woman::
	msgbox CliffEdgeGate_Text_Woman, MSGBOX_NPC
	end

NewBarkTown_EventScript_Wooper::
	lock
	playmoncry SPECIES_WOOPER, CRY_MODE_NORMAL
	msgbox CliffEdgeGate_Text_Wooper, MSGBOX_DEFAULT
	waitmoncry
	release
	end

RuinsOfAlph_Outside_EventScript_Quagsire::
	lock
	playmoncry SPECIES_QUAGSIRE, CRY_MODE_NORMAL
	msgbox CliffEdgeGate_Text_Quagsire, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CliffEdgeGate_Text_CaveSign:
	.string "CLIFF EDGE GATE\n"
	.string "Watch your step!$"

CliffEdgeGate_Text_Picnicker:
	.string "The cliffs here are steep!\n"
	.string "Be careful near the edge!$"

CliffEdgeGate_Text_Woman:
	.string "Wild POKeMON live in the\n"
	.string "caves below the cliffs.\p"
	.string "You can hear them echoing\n"
	.string "at night.$"

CliffEdgeGate_Text_Wooper:
	.string "WOOPER is splashing in a\n"
	.string "puddle happily.$"

CliffEdgeGate_Text_Quagsire:
	.string "QUAGSIRE is staring blankly\n"
	.string "into the distance...$"

