OlivineCity_PortInside_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

OlivineCity_PortInside_EventScript_Oak::
	msgbox OlivinePort_Text_Oak, MSGBOX_NPC
	end

OlivinePort_EventScript_CooltrainerF::
	msgbox OlivinePort_Text_CooltrainerF, MSGBOX_NPC
	end

OlivinePort_EventScript_Fisher1::
	msgbox OlivinePort_Text_Fisher1, MSGBOX_NPC
	end

OlivinePort_EventScript_Fisher2::
	msgbox OlivinePort_Text_Fisher2, MSGBOX_NPC
	end

OlivinePort_EventScript_Sailor::
	msgbox OlivinePort_Text_Sailor, MSGBOX_NPC
	end

OlivinePort_EventScript_Youngster::
	msgbox OlivinePort_Text_Youngster, MSGBOX_NPC
	end

OlivinePort_Text_CooltrainerF:
	.string "Training POKeMON isn't just\n"
	.string "about winning battles.\pIt's about building bonds.$"

OlivinePort_Text_Sailor:
	.string "The sea routes around JOHTO\n"
	.string "can be treacherous.\pMake sure your POKeMON know\n"
	.string "SURF before heading out!$"

OlivinePort_Text_Youngster:
	.string "I want to catch every kind of\n"
	.string "POKeMON in JOHTO!$"

OlivinePort_Text_Oak:
	.string "The sea connects JOHTO to\n"
	.string "distant lands.\p"
	.string "POKeMON habitats differ\n"
	.string "greatly between regions.$"

OlivinePort_Text_Fisher1:
	.string "I fish at every port I visit.\n"
	.string "OLIVINE has great catches!$"

OlivinePort_Text_Fisher2:
	.string "The S.S. AQUA is a beauty!\n"
	.string "I wish I could sail on it\l"
	.string "every day!$"

