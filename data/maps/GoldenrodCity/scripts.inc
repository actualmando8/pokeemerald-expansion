GoldenrodCity_MapScripts::
	.byte 0

GoldenrodCity_EventScript_Beauty::
	msgbox GoldenrodCity_Text_BeautyHint, MSGBOX_NPC
	end

GoldenrodCity_EventScript_CooltrainerF::
	msgbox GoldenrodCity_Text_CooltrainerHint, MSGBOX_NPC
	end

GoldenrodCity_EventScript_Gramps::
	msgbox GoldenrodCity_Text_GrampsHint, MSGBOX_NPC
	end

GoldenrodCity_EventScript_Hiker::
	msgbox GoldenrodCity_Text_HikerHint, MSGBOX_NPC
	end

GoldenrodCity_EventScript_Lass::
	msgbox GoldenrodCity_Text_LassHint, MSGBOX_NPC
	end

GoldenrodCity_EventScript_Mime::
	lock
	playmoncry SPECIES_MR_MIME, CRY_MODE_NORMAL
	msgbox GoldenrodCity_Text_Mime, MSGBOX_DEFAULT
	waitmoncry
	release
	end

GoldenrodCity_EventScript_NameRaterSign::
	msgbox GoldenrodCity_Text_NameRaterSign, MSGBOX_SIGN
	end

GoldenrodCity_EventScript_PokefanM::
	msgbox GoldenrodCity_Text_PokefanHint, MSGBOX_NPC
	end

GoldenrodCity_EventScript_Rocket1::
	return

GoldenrodCity_EventScript_Rocket2::
	return

GoldenrodCity_EventScript_Rocket3::
	return

GoldenrodCity_EventScript_Rocket4::
	return

GoldenrodCity_EventScript_Rocket5::
	return

GoldenrodCity_EventScript_Rocket6::
	return

GoldenrodCity_EventScript_RocketScout::
	msgbox GoldenrodCity_Text_RocketScout, MSGBOX_NPC
	end

GoldenrodCity_EventScript_SignBike::
	msgbox GoldenrodCity_Text_SignBike, MSGBOX_SIGN
	end

GoldenrodCity_EventScript_SignDept::
	msgbox GoldenrodCity_Text_SignDept, MSGBOX_SIGN
	end

GoldenrodCity_EventScript_SignFlower::
	msgbox GoldenrodCity_Text_SignFlower, MSGBOX_SIGN
	end

GoldenrodCity_EventScript_SignGameCorner::
	msgbox GoldenrodCity_Text_SignGameCorner, MSGBOX_SIGN
	end

GoldenrodCity_EventScript_SignGym::
	msgbox GoldenrodCity_Text_SignGym, MSGBOX_SIGN
	end

GoldenrodCity_EventScript_SignRadio::
	msgbox GoldenrodCity_Text_SignRadio, MSGBOX_SIGN
	end

GoldenrodCity_EventScript_SignTrain::
	msgbox GoldenrodCity_Text_SignTrain, MSGBOX_SIGN
	end

GoldenrodCity_EventScript_SignUnderground::
	msgbox GoldenrodCity_Text_SignUnderground, MSGBOX_SIGN
	end

GoldenrodCity_EventScript_Snubbull::
	lock
	playmoncry SPECIES_SNUBBULL, CRY_MODE_NORMAL
	msgbox GoldenrodCity_Text_Snubbull, MSGBOX_DEFAULT
	waitmoncry
	release
	end

GoldenrodCity_EventScript_Woman::
	msgbox GoldenrodCity_Text_WomanHint, MSGBOX_NPC
	end

GoldenrodCity_EventScript_Youngster::
	msgbox GoldenrodCity_Text_YoungsterHint, MSGBOX_NPC
	end

GoldenrodCity_EventScript_Youngster2::
	msgbox GoldenrodCity_Text_YoungsterHint, MSGBOX_NPC
	end

GoldenrodCity_Trigger_Music::
	return

GoldenrodCity_Text_BeautyHint:
	.string "GOLDENROD is the biggest city\n"
	.string "in all of JOHTO!\p"
	.string "There's so much to do here!$"

GoldenrodCity_Text_CooltrainerHint:
	.string "The GYM LEADER WHITNEY is\n"
	.string "really cute, but she cries\l"
	.string "when she loses. Be warned!$"

GoldenrodCity_Text_GrampsHint:
	.string "The RADIO TOWER broadcasts\n"
	.string "across all of JOHTO.\p"
	.string "I listen every day!$"

GoldenrodCity_Text_HikerHint:
	.string "The UNDERGROUND is a shortcut\n"
	.string "to the other side of the city.$"

GoldenrodCity_Text_LassHint:
	.string "The DEPT. STORE has everything\n"
	.string "a TRAINER could need!$"

GoldenrodCity_Text_PokefanHint:
	.string "The GAME CORNER is a great\n"
	.string "place to relax.\p"
	.string "You can win prizes there!$"

GoldenrodCity_Text_WomanHint:
	.string "The TRAIN STATION connects\n"
	.string "GOLDENROD to SAFFRON CITY\l"
	.string "in KANTO.$"

GoldenrodCity_Text_YoungsterHint:
	.string "GOLDENROD CITY is awesome!\n"
	.string "There's so much to explore!$"

GoldenrodCity_Text_NameRaterSign:
	.string "NAME RATER's House$"

GoldenrodCity_Text_SignBike:
	.string "GOLDENROD BIKE SHOP$"

GoldenrodCity_Text_SignDept:
	.string "GOLDENROD DEPT. STORE\n"
	.string "Everything for Your POKéMON!$"

GoldenrodCity_Text_SignFlower:
	.string "GOLDENROD FLOWER SHOP$"

GoldenrodCity_Text_SignGameCorner:
	.string "GOLDENROD GAME CORNER\n"
	.string "Try Your Luck!$"

GoldenrodCity_Text_SignGym:
	.string "GOLDENROD CITY POKéMON GYM\n"
	.string "LEADER: WHITNEY\p"
	.string "The Incredibly Pretty Girl$"

GoldenrodCity_Text_SignRadio:
	.string "GOLDENROD RADIO TOWER\n"
	.string "Broadcasting Across JOHTO!$"

GoldenrodCity_Text_SignTrain:
	.string "GOLDENROD TRAIN STATION\n"
	.string "MAGNET TRAIN Terminal$"

GoldenrodCity_Text_SignUnderground:
	.string "GOLDENROD UNDERGROUND\n"
	.string "A Tunnel Beneath the City$"

GoldenrodCity_Text_Mime:
	.string "MR. MIME is mimicking the\n"
	.string "passersby!$"

GoldenrodCity_Text_Snubbull:
	.string "SNUBBULL is wagging its tail\n"
	.string "at you!$"


GoldenrodCity_Text_RocketScout:
	.string "...$"
