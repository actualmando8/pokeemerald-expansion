BlackthornCity_Gym_MapScripts::
	.byte 0

BlackthornGym_EventScript_Clair::
	trainerbattle_single TRAINER_JOHTO_CLAIR, BlackthornGym_Text_ClairIntro, BlackthornGym_Text_ClairDefeat, BlackthornGym_EventScript_DefeatedClair, NO_MUSIC
	goto_if_unset FLAG_GOT_TM59_FROM_CLAIR, BlackthornGym_EventScript_GiveTM59
	msgbox BlackthornGym_Text_ClairPostBattle
	release
	end

BlackthornGym_EventScript_DefeatedClair::
	setflag FLAG_JOHTO_BADGE08_GET
	setflag FLAG_ALL_JOHTO_BADGES
	msgbox BlackthornGym_Text_ClairBadgeSpeech
	goto BlackthornGym_EventScript_GiveTM59
	end

BlackthornGym_EventScript_GiveTM59::
	giveitem ITEM_TM59
	setflag FLAG_GOT_TM59_FROM_CLAIR
	msgbox BlackthornGym_Text_ClairPostBattle
	release
	end

BlackthornGym_EventScript_Cody::
	trainerbattle_single TRAINER_JOHTO_GYM_CODY, BlackthornGym_Text_CodySeen, BlackthornGym_Text_CodyBeaten
	msgbox BlackthornGym_Text_TrainerHint, MSGBOX_AUTOCLOSE
	end

BlackthornGym_EventScript_Fran::
	trainerbattle_single TRAINER_JOHTO_GYM_FRAN, BlackthornGym_Text_FranSeen, BlackthornGym_Text_FranBeaten
	msgbox BlackthornGym_Text_TrainerHint, MSGBOX_AUTOCLOSE
	end

BlackthornGym_EventScript_Lola::
	msgbox BlackthornGym_Text_Lola, MSGBOX_NPC
	end

BlackthornGym_EventScript_Mike::
	msgbox BlackthornGym_Text_Mike, MSGBOX_NPC
	end

BlackthornGym_EventScript_Paul::
	msgbox BlackthornGym_Text_Paul, MSGBOX_NPC
	end

BlackthornGym_EventScript_GymGuy::
	msgbox BlackthornGym_Text_GymGuyAdvice, MSGBOX_NPC
	end

BlackthornGym_EventScript_Statue::
	msgbox BlackthornGym_Text_GymStatue, MSGBOX_SIGN
	end

BlackthornGym_TriggerBridge1::
	return

BlackthornGym_TriggerBridge2::
	return

BlackthornGym_TriggerBridge3::
	return

BlackthornGym_TriggerBridge4::
	return

BlackthornGym_Text_ClairIntro:
	.string "I am CLAIR, the world's best\n"
	.string "Dragon-type master!\p"
	.string "Do you think you can defeat\n"
	.string "dragons? You'd better not\l"
	.string "underestimate us!\p"
	.string "Let's go!$"

BlackthornGym_Text_ClairDefeat:
	.string "…I lost?\n"
	.string "No… That's impossible!\p"
	.string "…Fine. I'll admit you are\n"
	.string "skilled enough.$"

BlackthornGym_Text_ClairBadgeSpeech:
	.string "Here. Take the RISING BADGE.\p"
	.string "With all eight JOHTO BADGES,\n"
	.string "any POKéMON will obey you.\p"
	.string "And take this TM.$"

BlackthornGym_Text_ClairPostBattle:
	.string "DRAGON PULSE is a special\n"
	.string "Dragon-type move.\p"
	.string "It's very powerful and never\n"
	.string "misses.\p"
	.string "You've earned all eight\n"
	.string "JOHTO BADGES.\p"
	.string "I wonder what challenges\n"
	.string "await you next…$"

BlackthornGym_Text_CodySeen:
	.string "Only the strongest trainers\n"
	.string "can handle Dragon POKéMON!$"

BlackthornGym_Text_CodyBeaten:
	.string "You might actually be able\n"
	.string "to challenge CLAIR\ldots$"

BlackthornGym_Text_FranSeen:
	.string "Dragons are beautiful AND\n"
	.string "powerful! I'll show you!$"

BlackthornGym_Text_FranBeaten:
	.string "Even my dragons fell\ldots$"

BlackthornGym_Text_TrainerHint:
	.string "Dragon POKéMON are the\n"
	.string "mightiest of all types!\p"
	.string "You won't beat CLAIR easily!$"

BlackthornGym_Text_Lola:
	.string "CLAIR is LANCE's cousin.\n"
	.string "Can you believe that?\p"
	.string "Dragon mastery runs in\n"
	.string "their family!$"

BlackthornGym_Text_Mike:
	.string "The lava in this GYM makes\n"
	.string "it unbearably hot!\p"
	.string "But CLAIR says a true Dragon\n"
	.string "master endures any trial.$"

BlackthornGym_Text_Paul:
	.string "I've been training here for\n"
	.string "months, but CLAIR still won't\l"
	.string "acknowledge my skill.\p"
	.string "She only respects trainers\n"
	.string "who can defeat her in battle.$"

BlackthornGym_Text_GymGuyAdvice:
	.string "Yo! CHAMP in the making!\p"
	.string "CLAIR uses Dragon types.\n"
	.string "Ice and Fairy moves are your\l"
	.string "best bet against them!$"

BlackthornGym_Text_GymStatue:
	.string "BLACKTHORN CITY POKéMON GYM$"

