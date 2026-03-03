ArtisanCave_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ArtisanCave_B1F_OnTransition
	.byte 0

ArtisanCave_B1F_OnTransition:
	setflag FLAG_LANDMARK_ARTISAN_CAVE
	end

@ ========================================
@ Researcher - Smeargle / Mew connection + Old Sea Map
@ ========================================
ArtisanCave_B1F_EventScript_Researcher::
	lock
	faceplayer
	goto_if_set FLAG_ENABLE_SHIP_FARAWAY_ISLAND, ArtisanCave_B1F_EventScript_ResearcherPostMap
	goto_if_set FLAG_IS_CHAMPION, ArtisanCave_B1F_EventScript_ResearcherCheckKanto
	msgbox ArtisanCave_B1F_Text_ResearcherEarly
	release
	end

ArtisanCave_B1F_EventScript_ResearcherCheckKanto::
	goto_if_set FLAG_IS_KANTO_CHAMPION, ArtisanCave_B1F_EventScript_ResearcherGiveMap
	msgbox ArtisanCave_B1F_Text_ResearcherMid
	release
	end

ArtisanCave_B1F_EventScript_ResearcherGiveMap::
	msgbox ArtisanCave_B1F_Text_ResearcherDiscovery
	additem ITEM_OLD_SEA_MAP
	setflag FLAG_ENABLE_SHIP_FARAWAY_ISLAND
	playfanfare MUS_OBTAIN_ITEM
	msgbox ArtisanCave_B1F_Text_ResearcherReceivedMap
	waitfanfare
	msgbox ArtisanCave_B1F_Text_ResearcherGoSeek
	release
	end

ArtisanCave_B1F_EventScript_ResearcherPostMap::
	msgbox ArtisanCave_B1F_Text_ResearcherPostMap
	release
	end

ArtisanCave_B1F_Text_ResearcherEarly:
	.string "Fascinating! The SMEARGLE here\n"
	.string "can copy any move with SKETCH.\p"
	.string "It's an ability found nowhere\n"
	.string "else in the POKéMON world.\p"
	.string "Well… almost nowhere.\p"
	.string "There's one other POKéMON said\n"
	.string "to know every move in existence.$"

ArtisanCave_B1F_Text_ResearcherMid:
	.string "My research is progressing.\n"
	.string "SMEARGLE's SKETCH ability may\l"
	.string "be an echo of something older.\p"
	.string "There's an ancient POKéMON\n"
	.string "called MEW that is said to\l"
	.string "contain the DNA of all POKéMON.\p"
	.string "If MEW can learn every move,\n"
	.string "then SMEARGLE's SKETCH might be\l"
	.string "a primitive imitation of that\l"
	.string "same genetic ability.\p"
	.string "I need more data to confirm\n"
	.string "this theory…$"

ArtisanCave_B1F_Text_ResearcherDiscovery:
	.string "You! You've conquered both the\n"
	.string "KANTO and HOENN leagues?\p"
	.string "Then you must have encountered\n"
	.string "more POKéMON than anyone alive.\p"
	.string "Listen, my research has led me\n"
	.string "to something extraordinary.\p"
	.string "SMEARGLE's SKETCH gene is a\n"
	.string "degraded copy of MEW's original\l"
	.string "genetic template.\p"
	.string "And I've traced MEW's origin\n"
	.string "to a remote island far south\l"
	.string "of HOENN's shores.\p"
	.string "I acquired an old nautical chart\n"
	.string "that marks the location.\p"
	.string "But I'm a researcher, not a\n"
	.string "TRAINER. I can't go myself.\p"
	.string "Please, take this map.$"

ArtisanCave_B1F_Text_ResearcherReceivedMap:
	.string "{PLAYER} received the\n"
	.string "OLD SEA MAP from the researcher!$"

ArtisanCave_B1F_Text_ResearcherGoSeek:
	.string "That map will grant you passage\n"
	.string "to FARAWAY ISLAND.\p"
	.string "If MEW truly exists there, it\n"
	.string "would prove everything.\p"
	.string "Be careful. MEW is said to be\n"
	.string "incredibly elusive.$"

ArtisanCave_B1F_Text_ResearcherPostMap:
	.string "Have you found MEW yet?\p"
	.string "The SMEARGLE here seem restless\n"
	.string "lately. It's as if they can sense\l"
	.string "something stirring far away.\p"
	.string "FARAWAY ISLAND should be\n"
	.string "accessible from LILYCOVE HARBOR.$"

