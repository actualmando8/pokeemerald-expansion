CeladonCity_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_OnTransition
	.byte 0

CeladonCity_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_CELADON_CITY
	call Common_EventScript_SetupRivalGfxId
	call_if_unset FLAG_HIDE_HOENN_RIVAL_CELADON, CeladonCity_EventScript_TryShowHoennRival
	end

CeladonCity_EventScript_TryShowHoennRival::
	goto_if_unset FLAG_MET_PROF_BIRCH, Common_EventScript_NopReturn
	goto_if_unset FLAG_IS_CHAMPION, Common_EventScript_NopReturn
	goto_if_unset FLAG_IS_KANTO_CHAMPION, Common_EventScript_NopReturn
	clearflag FLAG_HIDE_HOENN_RIVAL_CELADON
	return

CeladonCity_EventScript_LittleGirl::
	msgbox CeladonCity_Text_GotMyKoffingInCinnabar, MSGBOX_NPC
	end

CeladonCity_EventScript_OldMan1::
	lock
	msgbox CeladonCity_Text_GymIsGreatFullOfWomen
	release
	end

CeladonCity_EventScript_Woman::
	lock
	faceplayer
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, CeladonCity_EventScript_WomanPostCrisis
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 1, CeladonCity_EventScript_WomanWeatherCrisis
	msgbox CeladonCity_Text_GameCornerIsBadForCitysImage
	release
	end

CeladonCity_EventScript_WomanWeatherCrisis::
	msgbox CeladonCity_Text_WomanWeatherCrisis
	release
	end

CeladonCity_EventScript_WomanPostCrisis::
	msgbox CeladonCity_Text_WomanPostCrisis
	release
	end

CeladonCity_EventScript_OldMan2::
	msgbox CeladonCity_Text_BlewItAllAtSlots, MSGBOX_NPC
	end

CeladonCity_EventScript_SoftboiledTutor::
	goto EventScript_SoftboiledTutor
	end

CeladonCity_EventScript_FatMan::
	lock
	faceplayer
	msgbox CeladonCity_Text_MyTrustedPalPoliwrath
	closemessage
	applymovement LOCALID_CELADON_FAT_MAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

CeladonCity_EventScript_Poliwrath::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_POLIWRATH, CRY_MODE_NORMAL
	msgbox CeladonCity_Text_Poliwrath
	closemessage
	waitmoncry
	applymovement LOCALID_CELADON_POLIWRATH, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

CeladonCity_EventScript_RocketGrunt1::
	msgbox CeladonCity_Text_KeepOutOfTeamRocketsWay, MSGBOX_NPC
	end

CeladonCity_EventScript_RocketGrunt2::
	msgbox CeladonCity_Text_GetLostOrIllPunchYou, MSGBOX_NPC
	end

CeladonCity_EventScript_Boy::
	msgbox CeladonCity_Text_ScaldedTongueOnTea, MSGBOX_NPC
	end

CeladonCity_EventScript_SilphCoScientist::
	msgbox CeladonCity_Text_SomeoneStoleSilphScope, MSGBOX_NPC
	end

CeladonCity_EventScript_TrainerTips1::
	msgbox CeladonCity_Text_ExplainXAccuracyDireHit, MSGBOX_SIGN
	end

CeladonCity_EventScript_CitySign::
	msgbox CeladonCity_Text_CitySign, MSGBOX_SIGN
	end

CeladonCity_EventScript_GymSign::
	lockall
	famechecker FAMECHECKER_ERIKA, 0
	msgbox CeladonCity_Text_GymSign
	releaseall
	end

CeladonCity_EventScript_MansionSign::
	msgbox CeladonCity_Text_MansionSign, MSGBOX_SIGN
	end

CeladonCity_EventScript_DeptStoreSign::
	msgbox CeladonCity_Text_DeptStoreSign, MSGBOX_SIGN
	end

CeladonCity_EventScript_TrainerTips2::
	msgbox CeladonCity_Text_GuardSpecProtectsFromStatus, MSGBOX_SIGN
	end

CeladonCity_EventScript_PrizeExchangeSign::
	msgbox CeladonCity_Text_PrizeExchangeSign, MSGBOX_SIGN
	end

CeladonCity_EventScript_GameCornerSign::
	msgbox CeladonCity_Text_GameCornerSign, MSGBOX_SIGN
	end

CeladonCity_Text_GotMyKoffingInCinnabar::
	.string "I got my KOFFING in CINNABAR.\p"
	.string "It's usually nice, but it breathes\n"
	.string "poison when it's angry.$"

CeladonCity_Text_GymIsGreatFullOfWomen::
	.string "Heheh! This GYM is great!\n"
	.string "It's full of women!$"

CeladonCity_Text_GameCornerIsBadForCitysImage::
	.string "CELADON takes pride in its efforts\n"
	.string "to keep the city beautiful.\p"
	.string "That's why the new GAME CORNER is\n"
	.string "bad for our city's image.$"

CeladonCity_Text_BlewItAllAtSlots::
	.string "Moan…\n"
	.string "I blew it all at the slots!\p"
	.string "I knew I should have cashed in my\n"
	.string "COINS for prizes!$"

CeladonCity_Text_MyTrustedPalPoliwrath::
	.string "This is my trusted pal, POLIWRATH.\p"
	.string "It evolved from a POLIWHIRL when\n"
	.string "I used a WATER STONE.$"

CeladonCity_Text_Poliwrath::
	.string "POLIWRATH: Ribi ribit!$"

CeladonCity_Text_GetLostOrIllPunchYou::
	.string "What are you staring at?\n"
	.string "Get lost, or I'll punch you.$"

CeladonCity_Text_KeepOutOfTeamRocketsWay::
	.string "Keep out of TEAM ROCKET's way!$"

CeladonCity_Text_ExplainXAccuracyDireHit::
	.string "TRAINER TIPS\p"
	.string "X ACCURACY boosts the accuracy of\n"
	.string "techniques.\p"
	.string "DIRE HIT jacks up the likelihood\n"
	.string "of critical hits.\p"
	.string "Get your items at the CELADON\n"
	.string "DEPT. STORE!$"

CeladonCity_Text_CitySign::
	.string "CELADON CITY\n"
	.string "The City of Rainbow Dreams$"

CeladonCity_Text_GymSign::
	.string "CELADON CITY POKéMON GYM\n"
	.string "LEADER: ERIKA\l"
	.string "The Nature-Loving Princess!$"

CeladonCity_Text_MansionSign::
	.string "CELADON MANSION$"

CeladonCity_Text_DeptStoreSign::
	.string "Find what you need at the\n"
	.string "CELADON DEPT. STORE!$"

CeladonCity_Text_GuardSpecProtectsFromStatus::
	.string "TRAINER TIPS\p"
	.string "GUARD SPEC. protects POKéMON\n"
	.string "from status-reduction moves during\l"
	.string "battle.\p"
	.string "Get your items at the\n"
	.string "CELADON DEPT. STORE!$"

CeladonCity_Text_PrizeExchangeSign::
	.string "COINS exchanged for prizes!\n"
	.string "PRIZE EXCHANGE$"

CeladonCity_Text_GameCornerSign::
	.string "ROCKET GAME CORNER\n"
	.string "The playground for grown-ups!$"

CeladonCity_Text_ScaldedTongueOnTea::
	.string "Aaaagh, ow…\n"
	.string "I scalded my tongue!\p"
	.string "This nice old lady in the MANSION\n"
	.string "gave me some TEA.\p"
	.string "But it was boiling hot!\n"
	.string "Gotta cool it to drink it.$"

Text_SoftboiledTeach::
	.string "Hello, there!\p"
	.string "I've seen you about, but I never\n"
	.string "had a chance to chat.\p"
	.string "It must be good luck that brought\n"
	.string "us together finally.\p"
	.string "I'd like to celebrate by teaching\n"
	.string "you the move SOFTBOILED.$"

Text_SoftboiledDeclined::
	.string "I'll always be keeping an eye out\n"
	.string "for you.\p"
	.string "I hope we can chat again.$"

Text_SoftboiledWhichMon::
	.string "So, who's the POKéMON that gets\n"
	.string "the chance to learn SOFTBOILED?$"

Text_SoftboiledTaught::
	.string "I wish you the best of luck!$"

CeladonCity_Text_SomeoneStoleSilphScope::
	.string "Oh, what am I to do…\p"
	.string "Someone stole our SILPH SCOPE.\p"
	.string "The thief came running this way,\n"
	.string "I'm sure of it.\p"
	.string "But I lost sight of him!\n"
	.string "Where'd he go?$"

CeladonCity_EventScript_HoennRival::
	lock
	faceplayer
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, CeladonCity_EventScript_RivalMay
	goto_if_eq VAR_RESULT, FEMALE, CeladonCity_EventScript_RivalBrendan
	end

CeladonCity_EventScript_RivalBrendan::
	goto_if_set FLAG_HIDE_HOENN_RIVAL_CELADON, CeladonCity_EventScript_RivalBrendanPostBattle
	msgbox CeladonCity_Text_BrendanIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_RIVAL_BRENDAN_CELADON, CeladonCity_Text_BrendanDefeat
	msgbox CeladonCity_Text_BrendanPostBattle, MSGBOX_DEFAULT
	setflag FLAG_HIDE_HOENN_RIVAL_CELADON
	release
	end

CeladonCity_EventScript_RivalBrendanPostBattle::
	msgbox CeladonCity_Text_BrendanRematch, MSGBOX_DEFAULT
	release
	end

CeladonCity_EventScript_RivalMay::
	goto_if_set FLAG_HIDE_HOENN_RIVAL_CELADON, CeladonCity_EventScript_RivalMayPostBattle
	msgbox CeladonCity_Text_MayIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_RIVAL_MAY_CELADON, CeladonCity_Text_MayDefeat
	msgbox CeladonCity_Text_MayPostBattle, MSGBOX_DEFAULT
	setflag FLAG_HIDE_HOENN_RIVAL_CELADON
	release
	end

CeladonCity_EventScript_RivalMayPostBattle::
	msgbox CeladonCity_Text_MayRematch, MSGBOX_DEFAULT
	release
	end

CeladonCity_Text_BrendanIntro::
	.string "BRENDAN: {PLAYER}! I can't\n"
	.string "believe I found you here!\p"
	.string "I heard you conquered both\n"
	.string "ELITE FOURs. That's incredible!\p"
	.string "But I've been training hard too.\n"
	.string "All across HOENN and KANTO!\p"
	.string "Let's see who's really the\n"
	.string "strongest TRAINER from HOENN!$"

CeladonCity_Text_BrendanDefeat::
	.string "Wow… You really are something\n"
	.string "else, {PLAYER}.$"

CeladonCity_Text_BrendanPostBattle::
	.string "BRENDAN: That was an amazing\n"
	.string "battle, {PLAYER}.\p"
	.string "I can see why both regions\n"
	.string "couldn't hold you back.\p"
	.string "Keep going. I know you'll do\n"
	.string "things no one has ever done.$"

CeladonCity_Text_BrendanRematch::
	.string "BRENDAN: {PLAYER}!\n"
	.string "Good to see you again.\p"
	.string "I'm still training. One day\n"
	.string "I'll catch up to you!$"

CeladonCity_Text_MayIntro::
	.string "MAY: {PLAYER}! What are you\n"
	.string "doing in CELADON CITY?\p"
	.string "I heard you conquered both\n"
	.string "ELITE FOURs. That's amazing!\p"
	.string "But don't think I've been\n"
	.string "sitting around!\p"
	.string "I've gotten way stronger.\n"
	.string "Let me show you!$"

CeladonCity_Text_MayDefeat::
	.string "Ugh… I still can't beat you,\n"
	.string "{PLAYER}…$"

CeladonCity_Text_MayPostBattle::
	.string "MAY: That battle was so much\n"
	.string "fun, {PLAYER}!\p"
	.string "You've really become the\n"
	.string "strongest TRAINER around.\p"
	.string "I'm proud to call you my\n"
	.string "rival. Keep pushing forward!$"

CeladonCity_Text_MayRematch::
	.string "MAY: {PLAYER}!\n"
	.string "Hey there!\p"
	.string "I'm exploring KANTO now.\n"
	.string "There's so much to see here!$"

CeladonCity_Text_WomanWeatherCrisis:
	.string "Have you seen the news?\p"
	.string "There are reports of impossible\n"
	.string "weather over the seas south\l"
	.string "of here.\p"
	.string "Torrential rain and blazing\n"
	.string "drought… at the same time!\p"
	.string "They say it's coming from\n"
	.string "a region called HOENN.\p"
	.string "It's frightening. Even CELADON's\n"
	.string "skies have looked strange lately.$"

CeladonCity_Text_WomanPostCrisis:
	.string "Remember that terrible weather\n"
	.string "over the southern seas?\p"
	.string "It cleared up overnight!\n"
	.string "They say a TRAINER resolved\l"
	.string "the whole crisis.\p"
	.string "Can you imagine? One person\n"
	.string "calming the very weather itself…$"

