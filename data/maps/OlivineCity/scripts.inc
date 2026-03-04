OlivineCity_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

OlivineCity_EventScript_CafeSign::
	msgbox OlivineCity_Text_CafeSign, MSGBOX_SIGN
	end

OlivineCity_EventScript_EonTicketWoman::
	msgbox OlivineCity_Text_EonTicketWoman, MSGBOX_NPC
	end

OlivineCity_EventScript_GymSign::
	msgbox OlivineCity_Text_GymSign, MSGBOX_SIGN
	end

OlivineCity_EventScript_Item_Shockwave::
	finditem ITEM_TM_SHOCK_WAVE
	end

OlivineCity_EventScript_LighthouseSign::
	msgbox OlivineCity_Text_LighthouseSign, MSGBOX_SIGN
	end

OlivineCity_EventScript_Machoke::
	lock
	playmoncry SPECIES_MACHOKE, CRY_MODE_NORMAL
	msgbox OlivineCity_Text_Machoke, MSGBOX_DEFAULT
	waitmoncry
	release
	end

OlivineCity_EventScript_PortSign::
	msgbox OlivineCity_Text_PortSign, MSGBOX_SIGN
	end

OlivineCity_EventScript_Sailor1::
	msgbox OlivineCity_Text_Sailor1, MSGBOX_NPC
	end

OlivineCity_EventScript_Sailor2::
	msgbox OlivineCity_Text_Sailor2, MSGBOX_NPC
	end

OlivineCity_EventScript_Sign::
	msgbox OlivineCity_Text_CitySign, MSGBOX_SIGN
	end

OlivineCity_EventScript_SilverTrigger::
	return

OlivineCity_EventScript_Youngster::
	msgbox OlivineCity_Text_Youngster, MSGBOX_NPC
	end

OlivineCity_Text_CafeSign:
	.string "OLIVINE CAFE$"

OlivineCity_Text_GymSign:
	.string "OLIVINE CITY POKeMON GYM\nLEADER: JASMINE\pThe Steel-Clad Defense Girl$"

OlivineCity_Text_LighthouseSign:
	.string "OLIVINE LIGHTHOUSE\nGuiding Ships to Shore$"

OlivineCity_Text_PortSign:
	.string "OLIVINE PORT\nConnecting JOHTO to the World$"

OlivineCity_Text_Youngster:
	.string "I want to catch every kind of\n"
	.string "POKeMON in JOHTO!$"

OlivineCity_Text_CitySign:
	.string "OLIVINE CITY\n"
	.string "The Port with Sea Breezes$"

OlivineCity_Text_EonTicketWoman:
	.string "The ships from this port sail\n"
	.string "to many faraway places.\p"
	.string "I dream of traveling the\n"
	.string "world someday!$"

OlivineCity_Text_Machoke:
	.string "MACHOKE is hauling heavy\n"
	.string "cargo at the port.$"

OlivineCity_Text_Sailor1:
	.string "The sea routes around JOHTO\n"
	.string "can be treacherous.\p"
	.string "Make sure your POKeMON know\n"
	.string "SURF before heading out!$"

OlivineCity_Text_Sailor2:
	.string "This port connects OLIVINE\n"
	.string "to CIANWOOD across the sea.\p"
	.string "The WHIRL ISLANDS are out\n"
	.string "there too -- watch for\l"
	.string "whirlpools!$"
