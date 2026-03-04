MahoganyTown_Gym_MapScripts::
	.byte 0

MahoganyTown_Gym_EventScript_Pryce::
	trainerbattle_single TRAINER_JOHTO_PRYCE, MahoganyTown_Gym_Text_PryceIntro, MahoganyTown_Gym_Text_PryceDefeat, MahoganyTown_Gym_EventScript_DefeatedPryce, NO_MUSIC
	goto_if_unset FLAG_GOT_TM07_FROM_PRYCE, MahoganyTown_Gym_EventScript_GiveTM07
	msgbox MahoganyTown_Gym_Text_PrycePostBattle
	release
	end

MahoganyTown_Gym_EventScript_DefeatedPryce::
	setflag FLAG_JOHTO_BADGE07_GET
	msgbox MahoganyTown_Gym_Text_PryceBadgeSpeech
	goto MahoganyTown_Gym_EventScript_GiveTM07
	end

MahoganyTown_Gym_EventScript_GiveTM07::
	giveitem ITEM_TM07
	setflag FLAG_GOT_TM07_FROM_PRYCE
	msgbox MahoganyTown_Gym_Text_PrycePostBattle
	release
	end

MahoganyTown_Gym_EventScript_Brad::
	msgbox MahoganyTown_Gym_Text_Brad, MSGBOX_NPC
	end

MahoganyTown_Gym_EventScript_Clarissa::
	msgbox MahoganyTown_Gym_Text_Clarissa, MSGBOX_NPC
	end

MahoganyTown_Gym_EventScript_Douglas::
	msgbox MahoganyTown_Gym_Text_Douglas, MSGBOX_NPC
	end

MahoganyTown_Gym_EventScript_Ronald::
	trainerbattle_single TRAINER_JOHTO_GYM_RONALD, MahoganyTown_Gym_Text_RonaldSeen, MahoganyTown_Gym_Text_RonaldBeaten
	msgbox MahoganyTown_Gym_Text_TrainerHint, MSGBOX_AUTOCLOSE
	end

MahoganyTown_Gym_EventScript_Roxanne::
	trainerbattle_single TRAINER_JOHTO_GYM_ROXANNE, MahoganyTown_Gym_Text_RoxanneSeen, MahoganyTown_Gym_Text_RoxanneBeaten
	msgbox MahoganyTown_Gym_Text_TrainerHint, MSGBOX_AUTOCLOSE
	end

MahoganyTown_GymEventScript_GymGuy::
	msgbox MahoganyTown_Gym_Text_GymGuyAdvice, MSGBOX_NPC
	end

MahoganyTown_Gym_EventScript_Statue::
	msgbox MahoganyTown_Gym_Text_GymStatue, MSGBOX_SIGN
	end

MahoganyTown_Gym_Text_PryceIntro:
	.string "…I am PRYCE, the MAHOGANY\n"
	.string "GYM LEADER.\p"
	.string "I have been training POKéMON\n"
	.string "since long before you were born.\p"
	.string "The harshness of my Ice-type\n"
	.string "POKéMON will be your undoing!$"

MahoganyTown_Gym_Text_PryceDefeat:
	.string "…Hmph. You are young, but your\n"
	.string "skills are formidable.\p"
	.string "It seems my long years of\n"
	.string "training were not enough.$"

MahoganyTown_Gym_Text_PryceBadgeSpeech:
	.string "Take the GLACIER BADGE.\p"
	.string "And this TM as well.$"

MahoganyTown_Gym_Text_PrycePostBattle:
	.string "HAIL creates a hailstorm that\n"
	.string "damages all POKéMON except\l"
	.string "Ice types.\p"
	.string "In my youth, I traveled many\n"
	.string "lands with my POKéMON.\p"
	.string "Those memories keep me warm\n"
	.string "even now.$"

MahoganyTown_Gym_Text_RonaldSeen:
	.string "The ice here makes it hard\n"
	.string "to keep your footing!$"

MahoganyTown_Gym_Text_RonaldBeaten:
	.string "I slipped up\ldots$"

MahoganyTown_Gym_Text_RoxanneSeen:
	.string "My Ice POKéMON will freeze\n"
	.string "you in your tracks!$"

MahoganyTown_Gym_Text_RoxanneBeaten:
	.string "Brrr\ldots I got the chills\ldots$"

MahoganyTown_Gym_Text_TrainerHint:
	.string "PRYCE has trained for over\n"
	.string "fifty years! His Ice POKéMON\l"
	.string "are incredibly tough!$"

MahoganyTown_Gym_Text_Brad:
	.string "Be careful on the ice!\n"
	.string "One wrong step and you'll\l"
	.string "slide right into trouble.\p"
	.string "PRYCE doesn't slip, though.\n"
	.string "He's been walking on ice\l"
	.string "for decades!$"

MahoganyTown_Gym_Text_Clarissa:
	.string "PRYCE may seem cold, but\n"
	.string "he cares deeply about his\l"
	.string "POKéMON.\p"
	.string "He once told me about a\n"
	.string "POKéMON he lost long ago\ldots$"

MahoganyTown_Gym_Text_Douglas:
	.string "I've trained under PRYCE for\n"
	.string "years. He's a tough master.\p"
	.string "He always says patience is\n"
	.string "the key to any battle.$"

MahoganyTown_Gym_Text_GymGuyAdvice:
	.string "Yo! CHAMP in the making!\p"
	.string "PRYCE uses Ice types.\n"
	.string "Fire and Fighting moves will\l"
	.string "thaw them out in no time!$"

MahoganyTown_Gym_Text_GymStatue:
	.string "MAHOGANY TOWN POKéMON GYM$"

