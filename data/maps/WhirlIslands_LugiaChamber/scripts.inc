WhirlIslands_LugiaChamber_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, WhirlIslands_LugiaChamber_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, WhirlIslands_LugiaChamber_OnResume
	.byte 0

WhirlIslands_LugiaChamber_OnTransition:
	call_if_set FLAG_CAUGHT_LUGIA, WhirlIslands_LugiaChamber_EventScript_HideLugia
	call_if_unset FLAG_CAUGHT_LUGIA, WhirlIslands_LugiaChamber_EventScript_TryShowLugia
	end

WhirlIslands_LugiaChamber_EventScript_HideLugia::
	setflag FLAG_HIDE_LUGIA
	return

WhirlIslands_LugiaChamber_EventScript_TryShowLugia::
	goto_if_set FLAG_DEFEATED_LUGIA, Common_EventScript_NopReturn
	clearflag FLAG_HIDE_LUGIA
	return

WhirlIslands_LugiaChamber_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, WhirlIslands_LugiaChamber_EventScript_TryRemoveLugia
	end

WhirlIslands_LugiaChamber_EventScript_TryRemoveLugia::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject 1
	return

WhirlIslands_LugiaChamber_EventScript_Lugia::
	lockall
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	delay 20
	seteventmon SPECIES_LUGIA, 65
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setvar VAR_LAST_TALKED, 1
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, WhirlIslands_LugiaChamber_EventScript_DefeatedLugia
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, WhirlIslands_LugiaChamber_EventScript_RanFromLugia
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, WhirlIslands_LugiaChamber_EventScript_RanFromLugia
	setflag FLAG_CAUGHT_LUGIA
	releaseall
	end

WhirlIslands_LugiaChamber_EventScript_DefeatedLugia::
	setflag FLAG_DEFEATED_LUGIA
	setvar VAR_0x8004, SPECIES_LUGIA
	goto Common_EventScript_LegendaryFlewAway
	end

WhirlIslands_LugiaChamber_EventScript_RanFromLugia::
	setvar VAR_0x8004, SPECIES_LUGIA
	goto Common_EventScript_LegendaryFlewAway
	end

WhirlIslands_LugiaChamber_EventScript_Kuni::
	msgbox WhirlIslands_LugiaChamber_Text_Kuni, MSGBOX_NPC
	end

WhirlIslands_LugiaChamber_EventScript_Miki::
	msgbox WhirlIslands_LugiaChamber_Text_Miki, MSGBOX_NPC
	end

WhirlIslands_LugiaChamber_EventScript_Naoko::
	msgbox WhirlIslands_LugiaChamber_Text_Naoko, MSGBOX_NPC
	end

WhirlIslands_LugiaChamber_EventScript_Sayo::
	msgbox WhirlIslands_LugiaChamber_Text_Sayo, MSGBOX_NPC
	end

WhirlIslands_LugiaChamber_EventScript_TalkToKimono::
	msgbox WhirlIslands_LugiaChamber_Text_TalkToKimono, MSGBOX_NPC
	end

WhirlIslands_LugiaChamber_EventScript_Zuki::
	msgbox WhirlIslands_LugiaChamber_Text_Zuki, MSGBOX_NPC
	end


WhirlIslands_LugiaChamber_Text_Kuni:
	.string "...$"

WhirlIslands_LugiaChamber_Text_Miki:
	.string "...$"

WhirlIslands_LugiaChamber_Text_Naoko:
	.string "...$"

WhirlIslands_LugiaChamber_Text_Sayo:
	.string "...$"

WhirlIslands_LugiaChamber_Text_TalkToKimono:
	.string "...$"

WhirlIslands_LugiaChamber_Text_Zuki:
	.string "...$"
