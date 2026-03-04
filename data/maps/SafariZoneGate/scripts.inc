SafariZoneGate_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

SafariZoneGate_EventScript_Engineer::
	msgbox SafariZoneGate_Text_Engineer, MSGBOX_NPC
	end

SafariZoneGate_EventScript_Girl::
	msgbox SafariZoneGate_Text_Girl, MSGBOX_NPC
	end

SafariZoneGate_EventScript_IncenseClerk::
	msgbox SafariZoneGate_Text_IncenseClerk, MSGBOX_NPC
	end

SafariZoneGate_EventScript_Kangaskhan::
	msgbox SafariZoneGate_Text_Kangaskhan, MSGBOX_NPC
	end

SafariZoneGate_EventScript_Silent::
	msgbox SafariZoneGate_Text_Silent, MSGBOX_NPC
	end

SafariZoneGate_EventScript_SlowpokeLady::
	lock
	playmoncry SPECIES_SLOWPOKE, CRY_MODE_NORMAL
	msgbox SafariZoneGate_Text_SlowpokeLady, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SafariZoneGate_EventScript_VitaminGuru::
	msgbox SafariZoneGate_Text_VitaminGuru, MSGBOX_NPC
	end

SafariZoneGate_EventScript_WorkerM::
	msgbox SafariZoneGate_Text_WorkerM, MSGBOX_NPC
	end

SafariZoneGate_Text_Girl:
	.string "I heard some POKeMON only evolve\n"
	.string "when they really trust you!$"


SafariZoneGate_Text_Engineer:
	.string "I am working on improving\nthe infrastructure here.$"

SafariZoneGate_Text_IncenseClerk:
	.string "Welcome! Let me know if you\nneed anything.$"

SafariZoneGate_Text_Kangaskhan:
	.string "...$"

SafariZoneGate_Text_Silent:
	.string "...$"

SafariZoneGate_Text_SlowpokeLady:
	.string "SLOWPOKE is staring blankly.\n... ... ... ...$"

SafariZoneGate_Text_VitaminGuru:
	.string "...$"

SafariZoneGate_Text_WorkerM:
	.string "...$"
