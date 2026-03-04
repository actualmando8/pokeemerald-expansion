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
	msgbox ReceptionGate_Text_Janine, MSGBOX_NPC
	end

ReceptionGate_EventScript_KantoGuard::
	msgbox ReceptionGate_Text_KantoGuard, MSGBOX_NPC
	end

ReceptionGate_EventScript_Officer::
	msgbox ReceptionGate_Text_Officer, MSGBOX_NPC
	end

ReceptionGate_EventScript_SilverGuard::
	msgbox ReceptionGate_Text_SilverGuard, MSGBOX_NPC
	end

ReceptionGate_Trigger::
	lockall
	msgbox ReceptionGate_Text_Trigger, MSGBOX_DEFAULT
	releaseall
	end

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

ReceptionGate_Text_Janine:
	.string "JANINE: I'm training to be\n"
	.string "as great as my father, KOGA.\p"
	.string "He joined the ELITE FOUR, so\n"
	.string "I took over the FUCHSIA GYM.\p"
	.string "Are you heading to JOHTO?\n"
	.string "I hear they have strong\l"
	.string "TRAINERS there!$"

ReceptionGate_Text_KantoGuard:
	.string "GUARD: This gate connects\n"
	.string "KANTO and JOHTO.\p"
	.string "Have your POKeMON ready --\n"
	.string "the routes ahead are tough.$"

ReceptionGate_Text_Officer:
	.string "OFFICER: We monitor traffic\n"
	.string "between the two regions.\p"
	.string "Please report anything\n"
	.string "suspicious to the guards.$"

ReceptionGate_Text_SilverGuard:
	.string "GUARD: A red-haired young man\n"
	.string "passed through here earlier.\p"
	.string "He seemed to be in quite\n"
	.string "a hurry... Do you know him?$"

ReceptionGate_Text_Trigger:
	.string "You've entered the RECEPTION\n"
	.string "GATE between KANTO and JOHTO.$"

