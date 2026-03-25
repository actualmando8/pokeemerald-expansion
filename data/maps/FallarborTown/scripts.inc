FallarborTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
	.byte 0

FallarborTown_OnTransition:
	setflag FLAG_VISITED_FALLARBOR_TOWN
	setvar VAR_CONTEST_HALL_STATE, 0
	clearflag FLAG_CONTEST_SKETCH_CREATED
	call Common_EventScript_SetupRivalGfxId
	call FallarborTown_EventScript_TryShowRival
	end

FallarborTown_EventScript_TryShowRival::
	@ Rival appears in Fallarbor immediately when player visits (before meeting Birch)
	clearflag FLAG_HIDE_FALLARBOR_TOWN_RIVAL
	return

FallarborTown_EventScript_HideRival::
	setflag FLAG_HIDE_FALLARBOR_TOWN_RIVAL
	return

@ Removed - rival now appears immediately in Fallarbor

FallarborTown_EventScript_ExpertM::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_POKEDEX_FROM_BIRCH, FallarborTown_EventScript_ExpertMRivalInfo
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
	msgbox FallarborTown_Text_RivalHandledMeteorFallsAndMtChimney, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_ExpertMNormal::
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_ExpertMRivalInfo::
	msgbox FallarborTown_Text_RivalHandledMeteorFalls, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_Rival::
	lock
	faceplayer
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, FallarborTown_EventScript_RivalMay
	goto_if_eq VAR_RESULT, FEMALE, FallarborTown_EventScript_RivalBrendan
	end

FallarborTown_EventScript_RivalMay::
	msgbox FallarborTown_Text_RivalMayFallarbor, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_RivalBrendan::
	msgbox FallarborTown_Text_RivalBrendanFallarbor, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_Girl::
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
	end

FallarborTown_EventScript_Gentleman::
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
	end

FallarborTown_EventScript_Azurill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FallarborTown_EventScript_BattleTentSign::
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
	end

FallarborTown_EventScript_TownSign::
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
	end

FallarborTown_EventScript_MoveTutorSign::
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
	end

FallarborTown_Text_ShadyCharactersCozmosHome:
	.string "Something's happening,\n"
	.string "and I don't like it!\p"
	.string "I've seen shady characters wandering\n"
	.string "in and out of PROF. COZMO's home…$"

FallarborTown_Text_RegionKnownForMeteors:
	.string "This region's been known for meteors\n"
	.string "since the olden days.\p"
	.string "They say METEOR FALLS was gouged out\n"
	.string "by a falling meteorite long ago.$"

FallarborTown_Text_RivalMayFallarbor:
	.string "Oh, hey! We meet again!\p"
	.string "I just came from METEOR FALLS.\n"
	.string "TEAM MAGMA stole a meteorite\l"
	.string "right in front of me!\p"
	.string "Then TEAM AQUA showed up, too.\n"
	.string "Those two teams are always\l"
	.string "clashing with each other.\p"
	.string "I chased TEAM MAGMA up to\n"
	.string "MT. CHIMNEY and stopped their\l"
	.string "plans there. What a day!$"

FallarborTown_Text_RivalBrendanFallarbor:
	.string "Hey, good to see you again!\p"
	.string "I just came from METEOR FALLS.\n"
	.string "TEAM MAGMA stole a meteorite\l"
	.string "right in front of me!\p"
	.string "Then TEAM AQUA showed up, too.\n"
	.string "Those two teams are always\l"
	.string "clashing with each other.\p"
	.string "I chased TEAM MAGMA up to\n"
	.string "MT. CHIMNEY and stopped their\l"
	.string "plans there. What a day!$"

FallarborTown_Text_RivalHandledMeteorFalls:
	.string "There was a big commotion at\n"
	.string "METEOR FALLS recently.\p"
	.string "TEAM MAGMA and TEAM AQUA were\n"
	.string "fighting over a meteorite!\p"
	.string "A young trainer from LITTLEROOT\n"
	.string "got caught up in the middle of it.\p"
	.string "I hear that kid's been standing up\n"
	.string "to those teams all across HOENN.$"

FallarborTown_Text_RivalHandledMeteorFallsAndMtChimney:
	.string "That young trainer from LITTLEROOT\n"
	.string "has been keeping busy!\p"
	.string "They handled the situation at\n"
	.string "METEOR FALLS and then went straight\p"
	.string "to MT. CHIMNEY to stop TEAM MAGMA\n"
	.string "from using the meteorite!\p"
	.string "They're the one who's been taking\n"
	.string "care of most of the TEAM AQUA and\l"
	.string "MAGMA trouble in HOENN.\p"
	.string "While you've been getting badges,\n"
	.string "they've been saving HOENN!$"

FallarborTown_Text_MyPreciousAzurill:
	.string "See! Take a look!\n"
	.string "This is my precious AZURILL!\p"
	.string "It's slick and smooth and plushy, too!$"

FallarborTown_Text_Azurill:
	.string "AZURILL: Rooreelooo.$"

FallarborTown_Text_HaveYouChallengedFlannery:
	.string "Have you already challenged FLANNERY,\n"
	.string "the LEADER of LAVARIDGE GYM?\p"
	.string "The girl's grandfather was famous.\n"
	.string "He was one of the ELITE FOUR in the\l"
	.string "POKéMON LEAGUE at one point.\p"
	.string "It wouldn't surprise me to see FLANNERY\n"
	.string "become a great TRAINER in her own\l"
	.string "right.$"

FallarborTown_Text_BattleTentSign:
	.string "BATTLE TENT FALLARBOR SITE\n"
	.string "“May the Greatest Teams Gather!”$"

FallarborTown_Text_TownSign:
	.string "FALLARBOR TOWN\n"
	.string "“A farm community with small gardens.”$"

FallarborTown_Text_MoveTutorSign:
	.string "MOVE TUTOR'S HOUSE\n"
	.string "“New moves taught to POKéMON.”$"

