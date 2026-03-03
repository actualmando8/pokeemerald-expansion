SevenIsland_TanobyRuins_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, SevenIsland_TanobyRuins_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_TanobyRuins_OnTransition
	.byte 0

SevenIsland_TanobyRuins_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, SevenIsland_TanobyRuins_EventScript_TryRemoveRegigigas
	end

SevenIsland_TanobyRuins_EventScript_TryRemoveRegigigas::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

SevenIsland_TanobyRuins_OnTransition:
	call_if_unset FLAG_DEFEATED_REGIGIGAS, SevenIsland_TanobyRuins_EventScript_TryShowRegigigas
	end

SevenIsland_TanobyRuins_EventScript_TryShowRegigigas::
	goto_if_unset FLAG_REGI_DOORS_OPENED, SevenIsland_TanobyRuins_EventScript_DontShowRegigigas
	specialvar VAR_RESULT, CheckAllFiveRegis
	goto_if_eq VAR_RESULT, FALSE, SevenIsland_TanobyRuins_EventScript_DontShowRegigigas
	clearflag FLAG_HIDE_REGIGIGAS
	return

SevenIsland_TanobyRuins_EventScript_DontShowRegigigas::
	setflag FLAG_HIDE_REGIGIGAS
	return

SevenIsland_TanobyRuins_EventScript_Regigigas::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_REGIGIGAS, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_REGIGIGAS, 50
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SevenIsland_TanobyRuins_EventScript_DefeatedRegigigas
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SevenIsland_TanobyRuins_EventScript_RanFromRegigigas
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SevenIsland_TanobyRuins_EventScript_RanFromRegigigas
	setflag FLAG_DEFEATED_REGIGIGAS
	release
	end

SevenIsland_TanobyRuins_EventScript_DefeatedRegigigas::
	setflag FLAG_DEFEATED_REGIGIGAS
	goto Common_EventScript_RemoveStaticPokemon
	end

SevenIsland_TanobyRuins_EventScript_RanFromRegigigas::
	setvar VAR_0x8004, SPECIES_REGIGIGAS
	goto Common_EventScript_LegendaryFlewAway
	end

SevenIsland_TanobyRuins_Text_BrandonIntro::
	.string "Do you know anything about this\n"
	.string "stone chamber?$"

SevenIsland_TanobyRuins_Text_BrandonDefeat::
	.string "That was uncalled for.\n"
	.string "You didn't have to be so rough.$"

SevenIsland_TanobyRuins_Text_BrandonPostBattle::
	.string "The TANOBY RUINS date back at\n"
	.string "least 1,500 years.\p"
	.string "But it's a baffling mystery as to\n"
	.string "why it was built in the first place.$"

SevenIsland_TanobyRuins_Text_BenjaminIntro::
	.string "A mystic POKéMON is said to sleep\n"
	.string "inside here.$"

SevenIsland_TanobyRuins_Text_BenjaminDefeat::
	.string "I'm not much good in battle.$"

SevenIsland_TanobyRuins_Text_BenjaminPostBattle::
	.string "I hear there are other ruins like\n"
	.string "the one here.\p"
	.string "Might they be the resting places\n"
	.string "of other mystic POKéMON?$"

SevenIsland_TanobyRuins_Text_EdnaIntro::
	.string "CLIFFORD is teaching me how to\n"
	.string "paint.$"

SevenIsland_TanobyRuins_Text_EdnaDefeat::
	.string "We might get in trouble for being\n"
	.string "noisy here.$"

SevenIsland_TanobyRuins_Text_EdnaPostBattle::
	.string "I said that I wanted to paint an\n"
	.string "old building.\p"
	.string "So CLIFFORD brought me here.$"

SevenIsland_TanobyRuins_Text_CliffordIntro::
	.string "Today, in addition to our lesson,\n"
	.string "we came to see the chamber.$"

SevenIsland_TanobyRuins_Text_CliffordDefeat::
	.string "My, how extraordinary.$"

SevenIsland_TanobyRuins_Text_CliffordPostBattle::
	.string "Ah, so you are studying POKéMON\n"
	.string "on your own…\p"
	.string "Yes, you certainly are quite the\n"
	.string "extraordinary person, indeed.$"
