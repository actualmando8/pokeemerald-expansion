EmbeddedTower_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, EmbeddedTower_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, EmbeddedTower_OnTransition
	.byte 0

EmbeddedTower_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, EmbeddedTower_EventScript_TryRemoveRegidrago
	end

EmbeddedTower_EventScript_TryRemoveRegidrago::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

EmbeddedTower_OnTransition::
	call_if_unset FLAG_DEFEATED_REGIDRAGO, EmbeddedTower_EventScript_ShowRegidrago
	end

EmbeddedTower_EventScript_ShowRegidrago::
	clearflag FLAG_HIDE_REGIDRAGO
	return

EmbeddedTower_EventScript_Regidrago::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_REGIDRAGO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_REGIDRAGO, 65
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, EmbeddedTower_EventScript_DefeatedRegidrago
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, EmbeddedTower_EventScript_RanFromRegidrago
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, EmbeddedTower_EventScript_RanFromRegidrago
	setflag FLAG_DEFEATED_REGIDRAGO
	release
	end

EmbeddedTower_EventScript_DefeatedRegidrago::
	setflag FLAG_DEFEATED_REGIDRAGO
	goto Common_EventScript_RemoveStaticPokemon
	end

EmbeddedTower_EventScript_RanFromRegidrago::
	setvar VAR_0x8004, SPECIES_REGIDRAGO
	goto Common_EventScript_LegendaryFlewAway
	end

