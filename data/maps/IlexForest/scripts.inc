IlexForest_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, IlexForest_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, IlexForest_OnTransition
	.byte 0

IlexForest_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, IlexForest_EventScript_TryRemoveCelebi
	end

IlexForest_EventScript_TryRemoveCelebi::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

IlexForest_OnTransition:
	call_if_unset FLAG_DEFEATED_ILEX_CELEBI, IlexForest_EventScript_TryShowCelebi
	end

IlexForest_EventScript_TryShowCelebi::
	goto_if_unset FLAG_ALL_JOHTO_BADGES, IlexForest_EventScript_DontShowCelebi
	clearflag FLAG_HIDE_ILEX_FOREST_SECOND_CELEBI
	return

IlexForest_EventScript_DontShowCelebi::
	setflag FLAG_HIDE_ILEX_FOREST_SECOND_CELEBI
	return

@ Johto map scripts (imported from HnS, stubs)

IlexForest_EventScript_Apprentice::
	msgbox IlexForest_Text_Apprentice, MSGBOX_NPC
	end

IlexForest_EventScript_Boss::
	msgbox IlexForest_Text_Boss, MSGBOX_NPC
	end

IlexForest_EventScript_BugcatcherWayne::
	msgbox IlexForest_Text_BugcatcherWayne, MSGBOX_NPC
	end

IlexForest_EventScript_Ether::
	finditem ITEM_ETHER
	end

IlexForest_EventScript_Farfetchd_1A::
	lock
	playmoncry SPECIES_FARFETCHD, CRY_MODE_NORMAL
	msgbox IlexForest_Text_Farfetchd, MSGBOX_DEFAULT
	waitmoncry
	release
	end

IlexForest_EventScript_Farfetchd_2A::
	lock
	playmoncry SPECIES_FARFETCHD, CRY_MODE_NORMAL
	msgbox IlexForest_Text_Farfetchd, MSGBOX_DEFAULT
	waitmoncry
	release
	end

IlexForest_EventScript_Farfetchd_3A::
	lock
	playmoncry SPECIES_FARFETCHD, CRY_MODE_NORMAL
	msgbox IlexForest_Text_Farfetchd, MSGBOX_DEFAULT
	waitmoncry
	release
	end

IlexForest_EventScript_Farfetchd_4A::
	lock
	playmoncry SPECIES_FARFETCHD, CRY_MODE_NORMAL
	msgbox IlexForest_Text_Farfetchd, MSGBOX_DEFAULT
	waitmoncry
	release
	end

IlexForest_EventScript_FullHeal::
	finditem ITEM_FULL_HEAL
	end

IlexForest_EventScript_HeadbuttMoveTutor::
	msgbox IlexForest_Text_HeadbuttTutor, MSGBOX_NPC
	end

IlexForest_EventScript_Kimono::
	msgbox IlexForest_Text_Kimono, MSGBOX_NPC
	end

IlexForest_EventScript_Picnicker::
	msgbox IlexForest_Text_Picnicker, MSGBOX_NPC
	end

@ ========================================
@ Celebi - Ilex Forest Shrine event
@ Requires all 8 Johto badges
@ ========================================
IlexForest_EventScript_SecondCelebi::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_CELEBI, 55
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, IlexForest_EventScript_DefeatedCelebi
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, IlexForest_EventScript_RanFromCelebi
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, IlexForest_EventScript_RanFromCelebi
	setflag FLAG_DEFEATED_ILEX_CELEBI
	release
	end

IlexForest_EventScript_DefeatedCelebi::
	setflag FLAG_DEFEATED_ILEX_CELEBI
	goto Common_EventScript_RemoveStaticPokemon
	end

IlexForest_EventScript_RanFromCelebi::
	setvar VAR_0x8004, SPECIES_CELEBI
	goto Common_EventScript_LegendaryFlewAway
	end

@ ========================================
@ Ilex Forest Shrine
@ ========================================
IlexForest_EventScript_Shrine::
	lockall
	goto_if_set FLAG_DEFEATED_ILEX_CELEBI, IlexForest_EventScript_ShrinePostCelebi
	goto_if_set FLAG_ALL_JOHTO_BADGES, IlexForest_EventScript_ShrineActive
	msgbox IlexForest_Text_ShrineQuiet, MSGBOX_DEFAULT
	releaseall
	end

IlexForest_EventScript_ShrineActive::
	msgbox IlexForest_Text_ShrineGlowing, MSGBOX_DEFAULT
	releaseall
	end

IlexForest_EventScript_ShrinePostCelebi::
	msgbox IlexForest_Text_ShrinePeaceful, MSGBOX_DEFAULT
	releaseall
	end

IlexForest_Text_ShrineQuiet:
	.string "It's a small forest shrine.\p"
	.string "The wood is ancient, covered in\n"
	.string "moss. It feels like time stands\l"
	.string "still here.\p"
	.string "A faded inscription reads:\n"
	.string "'Guardian of the forest, protector\l"
	.string "of time, we honor thee.'$"

IlexForest_Text_ShrineGlowing:
	.string "The shrine is emitting a faint\n"
	.string "green glow!\p"
	.string "The air shimmers with an\n"
	.string "otherworldly energy.\p"
	.string "It feels as though something\n"
	.string "is being drawn here by the\l"
	.string "strength you carry\ldots$"

IlexForest_Text_ShrinePeaceful:
	.string "The shrine is quiet now.\p"
	.string "The green glow has faded, but\n"
	.string "the air still feels warm and\l"
	.string "peaceful.\p"
	.string "CELEBI's presence lingers in\n"
	.string "this sacred place.$"

IlexForest_EventScript_Sign::
	msgbox IlexForest_Text_Sign, MSGBOX_SIGN
	end

IlexForest_EventScript_SunnyDay::
	finditem ITEM_TM_SUNNY_DAY
	end

IlexForest_EventScript_SuperPotion::
	finditem ITEM_SUPER_POTION
	end

IlexForest_EventScript_Trigger::
	lockall
	msgbox IlexForest_Text_Trigger, MSGBOX_DEFAULT
	releaseall
	end

IlexForest_EventScript_TriggerBot::
	goto IlexForest_EventScript_Trigger
	end

IlexForest_Text_Boss:
	.string "This forest is a sacred place.\p"
	.string "We've been its guardians for\n"
	.string "generations. The charcoal we\l"
	.string "make comes from fallen branches\l"
	.string "only -- never from living trees.$"

IlexForest_Text_Apprentice:
	.string "I'm learning the charcoal trade\n"
	.string "from my master.\p"
	.string "It's hard work, but the forest\n"
	.string "provides everything we need.$"

IlexForest_Text_BugcatcherWayne:
	.string "ILEX FOREST is a paradise for\n"
	.string "Bug POKeMON!\p"
	.string "PARAS, CATERPIE, WEEDLE...\n"
	.string "You can find them all here!$"

IlexForest_Text_Farfetchd:
	.string "FARFETCH'D is bobbing its\n"
	.string "head happily.$"

IlexForest_Text_HeadbuttTutor:
	.string "Did you know you can HEADBUTT\n"
	.string "trees to find POKeMON?\p"
	.string "Some rare ones hide in the\n"
	.string "branches of forest trees.$"

IlexForest_Text_Picnicker:
	.string "This forest is so mysterious.\n"
	.string "It always feels cool and misty.\p"
	.string "They say a POKeMON protects\n"
	.string "this forest from harm.$"

IlexForest_Text_Sign:
	.string "ILEX FOREST\n"
	.string "Natural Preserve\p"
	.string "Please do not disturb the\n"
	.string "forest POKeMON.$"


IlexForest_Text_Kimono:
	.string "...$"

IlexForest_Text_Trigger:
	.string "The forest is dense and\n"
	.string "dark... Strange sounds echo\l"
	.string "from deep within.\p"
	.string "A KIMONO GIRL appears!\p"
	.string "KIMONO GIRL: This forest is\n"
	.string "sacred. Please, help the\l"
	.string "lost FARFETCH'D find its\l"
	.string "way back to its owner.$"

