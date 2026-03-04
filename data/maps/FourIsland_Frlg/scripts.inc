FourIsland_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FourIsland_OnFrame
	.byte 0

FourIsland_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_FOUR_ISLAND
	call_if_eq VAR_MAP_SCENE_FOUR_ISLAND, 0, FourIsland_EventScript_ShowRival
	call FourIsland_EventScript_TrySetDayCareManPos
	end

FourIsland_EventScript_ShowRival::
	clearflag FLAG_HIDE_FOUR_ISLAND_RIVAL
	return

FourIsland_EventScript_TrySetDayCareManPos::
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, FourIsland_EventScript_EndSetDayCareManPos
	setobjectxyperm LOCALID_FOUR_ISLAND_DAYCARE_MAN, 16, 14
FourIsland_EventScript_EndSetDayCareManPos::
	return

FourIsland_OnFrame::
	map_script_2 VAR_MAP_SCENE_FOUR_ISLAND, 0, FourIsland_EventScript_RivalScene
	.2byte 0

FourIsland_EventScript_RivalScene::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_Delay48
	waitmovement 0
	delay 25
	applymovement LOCALID_FOUR_ISLAND_RIVAL, FourIsland_Movement_RivalApproach
	waitmovement 0
	msgbox FourIsland_Text_RivalAlreadyGotEggBeSmellingYa
	closemessage
	applymovement LOCALID_PLAYER, FourIsland_Movement_PlayerWatchRivalExit
	applymovement LOCALID_FOUR_ISLAND_RIVAL, FourIsland_Movement_RivalExit
	waitmovement 0
	fadedefaultbgm
	playse SE_EXIT
	delay 35
	removeobject LOCALID_FOUR_ISLAND_RIVAL
	setvar VAR_MAP_SCENE_FOUR_ISLAND, 1
	releaseall
	end

FourIsland_Movement_RivalApproach::
	walk_right
	walk_right
	walk_down
	walk_down
	step_end

FourIsland_Movement_RivalExit::
	delay_16
	delay_4
	walk_down
	step_end

FourIsland_Movement_PlayerWatchRivalExit::
	walk_left
	walk_in_place_faster_right
	step_end

FourIsland_EventScript_DaycareMan::
	lock
	faceplayer
	special GetDaycareMonNicknames
	specialvar VAR_RESULT, GetDaycareState
	goto_if_eq VAR_RESULT, DAYCARE_EGG_WAITING, FourIsland_EventScript_DaycareEggWaiting
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_EventScript_CheckOnOneMon
	goto_if_eq VAR_RESULT, DAYCARE_TWO_MONS, FourIsland_EventScript_CheckOnTwoMons
	msgbox DayCare_Text_ImDaycareManSpeakToMyWife
	release
	end

FourIsland_EventScript_DaycareEggWaiting::
	msgbox DayCare_Text_DoYouWantEgg, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FourIsland_EventScript_DaycareAcceptEgg
	msgbox DayCare_Text_IWillKeepDoYouWantIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FourIsland_EventScript_DaycareAcceptEgg
	msgbox DayCare_Text_IllKeepIt
	clearflag FLAG_PENDING_DAYCARE_EGG
	special RejectEggFromDayCare
	release
	end

FourIsland_EventScript_DaycareAcceptEgg::
	specialvar VAR_RESULT, CalculatePlayerPartyCount
	goto_if_ne VAR_RESULT, PARTY_SIZE, FourIsland_EventScript_DaycareReceivedEgg
	msgbox DayCare_Text_YouHaveNoRoomForIt
	release
	end

FourIsland_EventScript_DaycareReceivedEgg::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	message DayCare_Text_ReceivedEgg
	call EventScript_RestorePrevTextColor
	playfanfare MUS_LEVEL_UP
	waitfanfare
	waitbuttonpress
	msgbox DayCare_Text_TakeGoodCareOfIt
	special GiveEggFromDaycare
	clearflag FLAG_PENDING_DAYCARE_EGG
	release
	end

FourIsland_EventScript_CheckOnOneMon::
	special GetDaycareMonNicknames
	msgbox DayCare_Text_YourMonIsDoingFine
	release
	end

FourIsland_EventScript_CheckOnTwoMons::
	special GetDaycareMonNicknames
	msgbox DayCare_Text_YourMonsAreDoingFine
	special SetDaycareCompatibilityString
	special ShowFieldMessageStringVar4
	waitmessage
	waitbuttonpress
	release
	end

FourIsland_EventScript_OldWoman::
	lock
	faceplayer
	goto_if_set FLAG_IS_CHAMPION, FourIsland_EventScript_OldWomanLoreleiLeft
	msgbox FourIsland_Text_LoreleiHasReturned
	release
	end

FourIsland_EventScript_OldWomanLoreleiLeft::
	famechecker FAMECHECKER_LORELEI, 5
	msgbox FourIsland_Text_LoreleiMetLaprasAsChild
	release
	end

FourIsland_EventScript_LittleGirl::
	lock
	faceplayer
	famechecker FAMECHECKER_LORELEI, 4
	msgbox FourIsland_Text_LoreleiHasLotsOfStuffedDolls
	release
	end

FourIsland_EventScript_FatMan::
	msgbox FourIsland_Text_MadeSlushieUsingIcefallCaveIce, MSGBOX_NPC
	end

FourIsland_EventScript_IslandSign::
	msgbox FourIsland_Text_IslandSign, MSGBOX_SIGN
	end

FourIsland_EventScript_LoreleisHouseSign::
	msgbox FourIsland_Text_LoreleisHouse, MSGBOX_SIGN
	end

FourIsland_Text_IslandSign::
	.string "FOUR ISLAND\n"
	.string "The Warm, Blue, Floe Island$"

FourIsland_Text_LoreleiHasReturned::
	.string "LORELEI has returned.\p"
	.string "Did she find the city life too\n"
	.string "stressful, I wonder?$"

FourIsland_Text_LoreleiMetLaprasAsChild::
	.string "LORELEI has gone back.\p"
	.string "The LAPRAS she has, I imagine it\n"
	.string "to be the one she met as a child.\p"
	.string "I believe it was in ICEFALL CAVE\n"
	.string "that she caught it.\p"
	.string "Perhaps that POKéMON has been with\n"
	.string "her ever since.$"

FourIsland_Text_RivalAlreadyGotEggBeSmellingYa::
	.string "{RIVAL}: Hey!\n"
	.string "{PLAYER}!\p"
	.string "What are you doing here in the\n"
	.string "SEVII ISLANDS?\p"
	.string "You should quit copying me,\n"
	.string "you know?\p"
	.string "Anyways, I already got my POKéMON\n"
	.string "EGG, so I'm done with this island.\p"
	.string "Heh, I bet you don't even know\n"
	.string "about POKéMON EGGS.\p"
	.string "You'll never fill your NATIONAL\n"
	.string "POKéDEX that way.\p"
	.string "By the way, I saw someone we both\n"
	.string "know on this island.\p"
	.string "Why don't you go look around if\n"
	.string "it makes you curious?\p"
	.string "Me, I don't have the time to\n"
	.string "waste.\p"
	.string "Be smelling ya!$"

FourIsland_Text_LoreleiHasLotsOfStuffedDolls::
	.string "Oh, you found me!\n"
	.string "Please don't tell LORELEI.\p"
	.string "Did you know that LORELEI has lots\n"
	.string "and lots of stuffed dolls?\p"
	.string "Every time she comes back to\n"
	.string "FOUR ISLAND, her collection grows!$"

FourIsland_Text_MadeSlushieUsingIcefallCaveIce::
	.string "Ooh, chilly!\p"
	.string "I made a slushie using ice I\n"
	.string "shaved inside ICEFALL CAVE.\p"
	.string "It's chilly and tasty!$"

FourIsland_Text_LoreleisHouse::
	.string "LORELEI'S HOUSE$"

FourIsland_EventScript_Anabel::
	msgbox FourIsland_Text_AnabelIntro, MSGBOX_NPC
	end

FourIsland_Text_AnabelIntro::
	.string "I'm ANABEL, the SALON MAIDEN.\p"
	.string "I can feel the emotions of\n"
	.string "POKéMON on this island…\p"
	.string "Your POKéMON trust you deeply.\n"
	.string "Let me test that bond!$"

FourIsland_Text_AnabelDefeat::
	.string "Your connection with your POKéMON\n"
	.string "is truly remarkable.\p"
	.string "I could feel their devotion to\n"
	.string "you throughout that battle.$"

FourIsland_Text_AnabelPostBattle::
	.string "LORELEI grew up on this island.\n"
	.string "I can sense why…\p"
	.string "The bond between people and\n"
	.string "POKéMON here is extraordinary.$"

@ ========================================
@ Johto Elder - Lore NPC (Navel Rock access disabled; Ho-Oh/Lugia in Johto)
@ ========================================
FourIsland_EventScript_JohtoElder::
	lock
	faceplayer
	goto_if_set FLAG_ALL_JOHTO_BADGES, FourIsland_EventScript_ElderPostJohto
	goto_if_set FLAG_DEFEATED_SEVII_BRANDON, FourIsland_EventScript_ElderAllBrains
	msgbox FourIsland_Text_ElderEarlyLore
	release
	end

FourIsland_EventScript_ElderAllBrains::
	msgbox FourIsland_Text_ElderMidLore
	release
	end

FourIsland_EventScript_ElderPostJohto::
	msgbox FourIsland_Text_ElderPostJohto
	release
	end

FourIsland_Text_ElderEarlyLore:
	.string "Hmm? You're not from these\n"
	.string "islands, are you?\p"
	.string "I came here from JOHTO long ago.\n"
	.string "These islands remind me of home.\p"
	.string "There are old legends in JOHTO\n"
	.string "about two great POKéMON…\p"
	.string "One soared above the skies.\n"
	.string "The other ruled the deep seas.\p"
	.string "If you ever travel to JOHTO,\n"
	.string "seek TIN TOWER and the\l"
	.string "WHIRL ISLANDS.$"

FourIsland_Text_ElderMidLore:
	.string "You've proven yourself against\n"
	.string "the guardians of these islands.\p"
	.string "In JOHTO, there are legends of\n"
	.string "HO-OH and LUGIA…\p"
	.string "HO-OH roosts atop TIN TOWER\n"
	.string "in ECRUTEAK CITY.\p"
	.string "LUGIA slumbers deep within the\n"
	.string "WHIRL ISLANDS.\p"
	.string "If you journey to JOHTO, perhaps\n"
	.string "you will meet them.$"

FourIsland_Text_ElderPostJohto:
	.string "So you conquered all of JOHTO…\p"
	.string "Did you meet them? HO-OH atop\n"
	.string "TIN TOWER, and LUGIA beneath\l"
	.string "the WHIRL ISLANDS?\p"
	.string "In JOHTO, they say HO-OH brings\n"
	.string "happiness to all who see it.\p"
	.string "And LUGIA's power calms even\n"
	.string "the fiercest storms.\p"
	.string "You carry their blessing now,\n"
	.string "{PLAYER}. Use it wisely.$"

