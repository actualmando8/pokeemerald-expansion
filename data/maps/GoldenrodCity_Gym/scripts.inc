GoldenrodCity_Gym_MapScripts::
	.byte 0

GoldenrodCity_Gym_EventScript_Whitney::
	trainerbattle_single TRAINER_JOHTO_WHITNEY, GoldenrodCity_Gym_Text_WhitneyIntro, GoldenrodCity_Gym_Text_WhitneyDefeat, GoldenrodCity_Gym_EventScript_DefeatedWhitney, NO_MUSIC
	goto_if_unset FLAG_GOT_TM45_FROM_WHITNEY, GoldenrodCity_Gym_EventScript_GiveTM45
	msgbox GoldenrodCity_Gym_Text_WhitneyPostBattle
	release
	end

GoldenrodCity_Gym_EventScript_DefeatedWhitney::
	setflag FLAG_JOHTO_BADGE03_GET
	msgbox GoldenrodCity_Gym_Text_WhitneyBadgeSpeech
	goto GoldenrodCity_Gym_EventScript_GiveTM45
	end

GoldenrodCity_Gym_EventScript_GiveTM45::
	giveitem ITEM_TM45
	setflag FLAG_GOT_TM45_FROM_WHITNEY
	msgbox GoldenrodCity_Gym_Text_WhitneyPostBattle
	release
	end

GoldenrodCity_Gym_EventScript_Bridget::
	trainerbattle_single TRAINER_JOHTO_GYM_BRIDGET, GoldenrodCity_Gym_Text_BridgetSeen, GoldenrodCity_Gym_Text_BridgetBeaten
	msgbox GoldenrodCity_Gym_Text_TrainerHint, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_Gym_EventScript_Carrie::
	trainerbattle_single TRAINER_JOHTO_GYM_CARRIE, GoldenrodCity_Gym_Text_CarrieSeen, GoldenrodCity_Gym_Text_CarrieBeaten
	msgbox GoldenrodCity_Gym_Text_TrainerHint, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_Gym_EventScript_Samantha::
	msgbox GoldenrodCity_Gym_Text_Samantha, MSGBOX_NPC
	end

GoldenrodCity_Gym_EventScript_Victoria::
	msgbox GoldenrodCity_Gym_Text_Victoria, MSGBOX_NPC
	end

GoldenrodCity_Gym_EventScript_Gym_Guy::
	msgbox GoldenrodCity_Gym_Text_GymGuyAdvice, MSGBOX_NPC
	end

GoldenrodCity_Gym_EventScript_Statue::
	msgbox GoldenrodCity_Gym_Text_GymStatue, MSGBOX_SIGN
	end

GoldenrodCity_Gym_EventScript_Trigger::
	return

GoldenrodCity_Gym_Text_WhitneyIntro:
	.string "Hi! I'm WHITNEY!\n"
	.string "Everyone was nice to me, so I\l"
	.string "became the GYM LEADER!\p"
	.string "I don't really get Pokemon\n"
	.string "battles, but let's go!$"

GoldenrodCity_Gym_Text_WhitneyDefeat:
	.string "Waaah! Waaah!\n"
	.string "You're mean! You made me cry!$"

GoldenrodCity_Gym_Text_WhitneyBadgeSpeech:
	.string "…Sniff…\p"
	.string "Fine, here's the PLAIN BADGE.\p"
	.string "And take this TM. I'm not\n"
	.string "going to use it anyway!$"

GoldenrodCity_Gym_Text_WhitneyPostBattle:
	.string "ATTRACT makes the foe fall in\n"
	.string "love with your POKéMON.\p"
	.string "It only works on the opposite\n"
	.string "gender, though!$"

GoldenrodCity_Gym_Text_BridgetSeen:
	.string "WHITNEY is the cutest GYM\n"
	.string "LEADER ever! I won't let you\l"
	.string "bother her!$"

GoldenrodCity_Gym_Text_BridgetBeaten:
	.string "Hmph! You're strong\ldots$"

GoldenrodCity_Gym_Text_CarrieSeen:
	.string "Do you have cute POKéMON?\n"
	.string "Let's see how they battle!$"

GoldenrodCity_Gym_Text_CarrieBeaten:
	.string "Oh no! My cute POKéMON!$"

GoldenrodCity_Gym_Text_TrainerHint:
	.string "WHITNEY's MILTANK is super\n"
	.string "tough! Watch out for it!$"

GoldenrodCity_Gym_Text_Samantha:
	.string "WHITNEY cries when she loses,\n"
	.string "but don't let that fool you.\p"
	.string "She's actually really strong!\n"
	.string "Her MILTANK is a nightmare!$"

GoldenrodCity_Gym_Text_Victoria:
	.string "I came here to challenge\n"
	.string "WHITNEY, but this maze is\l"
	.string "so confusing!\p"
	.string "How do you even get to her?$"

GoldenrodCity_Gym_Text_GymGuyAdvice:
	.string "Yo! CHAMP in the making!\p"
	.string "WHITNEY uses Normal types.\n"
	.string "A Fighting type will make\l"
	.string "short work of them!$"

GoldenrodCity_Gym_Text_GymStatue:
	.string "GOLDENROD CITY POKéMON GYM$"

