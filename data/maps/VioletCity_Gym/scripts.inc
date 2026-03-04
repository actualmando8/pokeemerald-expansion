VioletCity_Gym_MapScripts::
	.byte 0

VioletCity_Gym_EventScript_Falkner::
	trainerbattle_single TRAINER_JOHTO_FALKNER, VioletCity_Gym_Text_FalknerIntro, VioletCity_Gym_Text_FalknerDefeat, VioletCity_Gym_EventScript_DefeatedFalkner, NO_MUSIC
	goto_if_unset FLAG_GOT_TM40_FROM_FALKNER, VioletCity_Gym_EventScript_GiveTM40
	msgbox VioletCity_Gym_Text_FalknerPostBattle
	release
	end

VioletCity_Gym_EventScript_DefeatedFalkner::
	setflag FLAG_JOHTO_BADGE01_GET
	msgbox VioletCity_Gym_Text_FalknerBadgeSpeech
	goto VioletCity_Gym_EventScript_GiveTM40
	end

VioletCity_Gym_EventScript_GiveTM40::
	giveitem ITEM_TM40
	setflag FLAG_GOT_TM40_FROM_FALKNER
	msgbox VioletCity_Gym_Text_FalknerPostBattle
	release
	end

VioletCity_Gym_EventScript_Abe::
	trainerbattle_single TRAINER_JOHTO_GYM_ABE, VioletCity_Gym_Text_AbeSeen, VioletCity_Gym_Text_AbeBeaten
	msgbox VioletCity_Gym_Text_AbeHint, MSGBOX_AUTOCLOSE
	end

VioletCity_Gym_EventScript_Rod::
	trainerbattle_single TRAINER_JOHTO_GYM_ROD, VioletCity_Gym_Text_RodSeen, VioletCity_Gym_Text_RodBeaten
	msgbox VioletCity_Gym_Text_RodHint, MSGBOX_AUTOCLOSE
	end

VioletCity_Gym_EventScript_GymGuy::
	msgbox VioletCity_Gym_Text_GymGuyAdvice, MSGBOX_NPC
	end

VioletCity_Gym_EventScript_Statue::
	msgbox VioletCity_Gym_Text_GymStatue, MSGBOX_SIGN
	end

VioletCity_Gym_Text_FalknerIntro:
	.string "I'm FALKNER, the VIOLET CITY\n"
	.string "GYM LEADER!\p"
	.string "People say you can't win with\n"
	.string "Flying-type POKéMON alone.\p"
	.string "I won't allow anyone to insult\n"
	.string "bird POKéMON!\p"
	.string "Prepare for a Pokemon battle!$"

VioletCity_Gym_Text_FalknerDefeat:
	.string "…I understand.\n"
	.string "My father's cherished bird\l"
	.string "POKéMON…\p"
	.string "But a defeat is a defeat.$"

VioletCity_Gym_Text_FalknerBadgeSpeech:
	.string "Here, take the ZEPHYR BADGE.\p"
	.string "With this BADGE, POKéMON up to\n"
	.string "Lv. 20 will obey you.\p"
	.string "I also want you to have this.$"

VioletCity_Gym_Text_FalknerPostBattle:
	.string "That TM contains AERIAL ACE.\n"
	.string "It never misses!\p"
	.string "My dad is always traveling,\n"
	.string "training.\p"
	.string "I hope I can become as strong\n"
	.string "as him one day.$"

VioletCity_Gym_Text_AbeSeen:
	.string "My bird POKéMON and I share a\n"
	.string "special bond!$"

VioletCity_Gym_Text_AbeBeaten:
	.string "My birds couldn't keep up…$"

VioletCity_Gym_Text_AbeHint:
	.string "Bird POKéMON are weak against\n"
	.string "Rock and Electric moves!$"

VioletCity_Gym_Text_RodSeen:
	.string "You think you can handle our\n"
	.string "Flying-type POKéMON?$"

VioletCity_Gym_Text_RodBeaten:
	.string "FALKNER will avenge us!$"

VioletCity_Gym_Text_RodHint:
	.string "FALKNER's birds are fast.\n"
	.string "Don't underestimate them!$"

VioletCity_Gym_Text_GymGuyAdvice:
	.string "Yo! CHAMP in the making!\p"
	.string "FALKNER uses bird POKéMON.\n"
	.string "An Electric or Rock type will\l"
	.string "clip those wings!$"

VioletCity_Gym_Text_GymStatue:
	.string "VIOLET CITY POKéMON GYM$"

