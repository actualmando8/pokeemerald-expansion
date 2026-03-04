TinTower_RoofDay_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TinTower_RoofDay_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, TinTower_RoofDay_OnResume
	.byte 0

TinTower_RoofDay_OnTransition:
	call_if_set FLAG_CAUGHT_HO_OH, TinTower_RoofDay_EventScript_HideHoOh
	call_if_unset FLAG_CAUGHT_HO_OH, TinTower_RoofDay_EventScript_TryShowHoOh
	end

TinTower_RoofDay_EventScript_HideHoOh::
	setflag FLAG_HIDE_HO_OH
	return

TinTower_RoofDay_EventScript_TryShowHoOh::
	goto_if_set FLAG_DEFEATED_HO_OH, Common_EventScript_NopReturn
	clearflag FLAG_HIDE_HO_OH
	return

TinTower_RoofDay_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, TinTower_RoofDay_EventScript_TryRemoveHoOh
	end

TinTower_RoofDay_EventScript_TryRemoveHoOh::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject 8
	return

TinTower_RoofDay_EventScript_HoOh::
	lockall
	playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	delay 20
	seteventmon SPECIES_HO_OH, 65
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setvar VAR_LAST_TALKED, 8
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, TinTower_RoofDay_EventScript_DefeatedHoOh
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, TinTower_RoofDay_EventScript_RanFromHoOh
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, TinTower_RoofDay_EventScript_RanFromHoOh
	setflag FLAG_CAUGHT_HO_OH
	releaseall
	end

TinTower_RoofDay_EventScript_DefeatedHoOh::
	setflag FLAG_DEFEATED_HO_OH
	setvar VAR_0x8004, SPECIES_HO_OH
	goto Common_EventScript_LegendaryFlewAway
	end

TinTower_RoofDay_EventScript_RanFromHoOh::
	setvar VAR_0x8004, SPECIES_HO_OH
	goto Common_EventScript_LegendaryFlewAway
	end

TinTower_RoofDay_EventScript_Kuni::
	msgbox TinTower_RoofDay_Text_Kuni, MSGBOX_NPC
	end

TinTower_RoofDay_EventScript_Miki::
	msgbox TinTower_RoofDay_Text_Miki, MSGBOX_NPC
	end

TinTower_RoofDay_EventScript_Naoko::
	msgbox TinTower_RoofDay_Text_Naoko, MSGBOX_NPC
	end

TinTower_RoofDay_EventScript_Sayo::
	msgbox TinTower_RoofDay_Text_Sayo, MSGBOX_NPC
	end

TinTower_RoofDay_EventScript_TalkToKimono::
	msgbox TinTower_RoofDay_Text_TalkToKimono, MSGBOX_NPC
	end

TinTower_RoofDay_EventScript_Zuki::
	msgbox TinTower_RoofDay_Text_Zuki, MSGBOX_NPC
	end


TinTower_RoofDay_Text_Kuni:
	.string "...$"

TinTower_RoofDay_Text_Miki:
	.string "...$"

TinTower_RoofDay_Text_Naoko:
	.string "...$"

TinTower_RoofDay_Text_Sayo:
	.string "...$"

TinTower_RoofDay_Text_TalkToKimono:
	.string "...$"

TinTower_RoofDay_Text_Zuki:
	.string "...$"
