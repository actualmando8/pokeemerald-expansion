EcruteakCity_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

EcruteakCity_EventScrip_Man::
	msgbox EcruteakCity_Text_Man, MSGBOX_NPC
	end

EcruteakCity_EventScript_BurnedSign::
	msgbox EcruteakCity_Text_BurnedSign, MSGBOX_SIGN
	end

EcruteakCity_EventScript_CitySign::
	msgbox EcruteakCity_Text_CitySign, MSGBOX_SIGN
	end

EcruteakCity_EventScript_Eevee::
	lock
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
	msgbox EcruteakCity_Text_Eevee, MSGBOX_DEFAULT
	waitmoncry
	release
	end

EcruteakCity_EventScript_Girl::
	msgbox EcruteakCity_Text_Girl, MSGBOX_NPC
	end

EcruteakCity_EventScript_Gramps::
	msgbox EcruteakCity_Text_Gramps, MSGBOX_NPC
	end

EcruteakCity_EventScript_GymSign::
	msgbox EcruteakCity_Text_GymSign, MSGBOX_SIGN
	end

EcruteakCity_EventScript_Item_RareCandy::
	finditem ITEM_RARE_CANDY
	end

EcruteakCity_EventScript_Lass::
	msgbox EcruteakCity_Text_Lass, MSGBOX_NPC
	end

EcruteakCity_EventScript_OfficeSign::
	msgbox EcruteakCity_Text_OfficeSign, MSGBOX_SIGN
	end

EcruteakCity_EventScript_SageGym::
	msgbox EcruteakCity_Text_SageGym, MSGBOX_NPC
	end

EcruteakCity_EventScript_SageRight::
	msgbox EcruteakCity_Text_SageRight, MSGBOX_NPC
	end

EcruteakCity_EventScript_SageTower::
	msgbox EcruteakCity_Text_SageTower, MSGBOX_NPC
	end

EcruteakCity_EventScript_TheaterSign::
	msgbox EcruteakCity_Text_TheaterSign, MSGBOX_SIGN
	end

EcruteakCity_EventScript_Vulpix::
	lock
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
	msgbox EcruteakCity_Text_Vulpix, MSGBOX_DEFAULT
	waitmoncry
	release
	end

EcruteakCity_EventScript_Youngster::
	msgbox EcruteakCity_Text_Youngster, MSGBOX_NPC
	end

EcruteakCity_Trigger_Silver::
	lockall
	msgbox EcruteakCity_Text_SilverAppears, MSGBOX_DEFAULT
	releaseall
	end

EcruteakCity_Text_BurnedSign:
	.string "BURNED TOWER\nA tower destroyed by fire long ago$"

EcruteakCity_Text_CitySign:
	.string "ECRUTEAK CITY\nA Historical City$"

EcruteakCity_Text_Girl:
	.string "I heard some POKeMON only evolve\n"
	.string "when they really trust you!$"

EcruteakCity_Text_Gramps:
	.string "I've lived in JOHTO my whole life.\n"
	.string "It's a beautiful region.\pTake your time and enjoy\n"
	.string "the journey, youngster.$"

EcruteakCity_Text_GymSign:
	.string "ECRUTEAK CITY POKeMON GYM\nLEADER: MORTY\pThe Mystic Seer of the\nFuture$"

EcruteakCity_Text_Lass:
	.string "I love walking around town.\n"
	.string "The fresh air is wonderful!$"

EcruteakCity_Text_OfficeSign:
	.string "ECRUTEAK DANCE THEATER OFFICE$"

EcruteakCity_Text_SageGym:
	.string "MORTY communes with Ghost\n"
	.string "POKeMON to seek the truth.\pHis eyes can see what\n"
	.string "others cannot.$"

EcruteakCity_Text_SageRight:
	.string "The spirits of POKeMON past\n"
	.string "are said to linger in\lECRUTEAK CITY.$"

EcruteakCity_Text_SageTower:
	.string "TIN TOWER was built as a\n"
	.string "roost for the legendary\lHO-OH.\pOnly those deemed worthy\n"
	.string "may climb to its peak.$"

EcruteakCity_Text_TheaterSign:
	.string "ECRUTEAK DANCE THEATER\nOld Traditions Live On$"

EcruteakCity_Text_Youngster:
	.string "I want to catch every kind of\n"
	.string "POKeMON in JOHTO!$"

EcruteakCity_Text_Man:
	.string "ECRUTEAK is steeped in history.\p"
	.string "Two towers once stood here --\n"
	.string "TIN TOWER and BURNED TOWER.\p"
	.string "A great fire destroyed one of\n"
	.string "them long ago...$"

EcruteakCity_Text_Eevee:
	.string "EEVEE is playing happily.$"

EcruteakCity_Text_Vulpix:
	.string "VULPIX is grooming its tails.$"

EcruteakCity_Text_SilverAppears:
	.string "SILVER: ...You again.\p"
	.string "I've been training hard.\n"
	.string "My POKeMON are stronger\l"
	.string "than ever.\p"
	.string "Next time we meet, I won't\n"
	.string "hold back. Remember that.$"

