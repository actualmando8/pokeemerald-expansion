ReceptionGate_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ReceptionGate_OnTransition
	.byte 0

ReceptionGate_OnTransition:
	@ Hide blocker only if BOTH Champion and Sevii Giovanni defeated
	goto_if_unset FLAG_IS_KANTO_CHAMPION, ReceptionGate_EventScript_KeepBlocker
	goto_if_unset FLAG_JOHTO_ACCESS_UNLOCKED, ReceptionGate_EventScript_KeepBlocker
	setflag FLAG_HIDE_RECEPTION_GATE_BLOCKER
	return

ReceptionGate_EventScript_KeepBlocker::
	clearflag FLAG_HIDE_RECEPTION_GATE_BLOCKER
	return

@ Johto map scripts (imported from HnS, stubs)

ReceptionGate_EventScript_Janine::
	return

ReceptionGate_EventScript_KantoGuard::
	return

ReceptionGate_EventScript_Officer::
	return

ReceptionGate_EventScript_SilverGuard::
	return

ReceptionGate_Trigger::
	return

ReceptionGate_EventScript_JohtoBlocker::
	lock
	faceplayer
	goto_if_unset FLAG_IS_KANTO_CHAMPION, ReceptionGate_EventScript_BlockerNeedChampion
	goto_if_unset FLAG_JOHTO_ACCESS_UNLOCKED, ReceptionGate_EventScript_BlockerNeedGiovanni
	@ Both conditions met — shouldn't reach here, but just in case
	setflag FLAG_HIDE_RECEPTION_GATE_BLOCKER
	release
	end

ReceptionGate_EventScript_BlockerNeedChampion::
	goto_if_set FLAG_JOHTO_ACCESS_UNLOCKED, ReceptionGate_EventScript_BlockerNeedOnlyChampion
	msgbox ReceptionGate_Text_JohtoBlocked, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	release
	end

ReceptionGate_EventScript_BlockerNeedOnlyChampion::
	msgbox ReceptionGate_Text_NeedChampion, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	release
	end

ReceptionGate_EventScript_BlockerNeedGiovanni::
	msgbox ReceptionGate_Text_NeedGiovanni, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	release
	end

ReceptionGate_Text_JohtoBlocked::
	.string "The road to JOHTO is closed.\p"
	.string "There have been reports of criminal\n"
	.string "activity in the SEVII ISLANDS.\p"
	.string "Until the situation is resolved,\n"
	.string "passage south is restricted.$"

ReceptionGate_Text_NeedChampion::
	.string "We've received reports that GIOVANNI\n"
	.string "fled south toward JOHTO.\p"
	.string "Only the CHAMPION of the INDIGO\n"
	.string "LEAGUE has clearance to pursue.\p"
	.string "Prove yourself at the POKÉMON\n"
	.string "LEAGUE first.$"

ReceptionGate_Text_NeedGiovanni::
	.string "The road to JOHTO is closed.\p"
	.string "There are reports of ROCKET\n"
	.string "activity in the SEVII ISLANDS.\p"
	.string "We can't open the southern passage\n"
	.string "until the threat is dealt with.$"

