OlivineCity_Gym_MapScripts::
	.byte 0

OlivineCity_Gym_EventScript_Jasmine::
	trainerbattle_single TRAINER_JOHTO_JASMINE, OlivineCity_Gym_Text_JasmineIntro, OlivineCity_Gym_Text_JasmineDefeat, OlivineCity_Gym_EventScript_DefeatedJasmine, NO_MUSIC
	goto_if_unset FLAG_GOT_TM23_FROM_JASMINE, OlivineCity_Gym_EventScript_GiveTM23
	msgbox OlivineCity_Gym_Text_JasminePostBattle
	release
	end

OlivineCity_Gym_EventScript_DefeatedJasmine::
	setflag FLAG_JOHTO_BADGE06_GET
	msgbox OlivineCity_Gym_Text_JasmineBadgeSpeech
	goto OlivineCity_Gym_EventScript_GiveTM23
	end

OlivineCity_Gym_EventScript_GiveTM23::
	giveitem ITEM_TM23
	setflag FLAG_GOT_TM23_FROM_JASMINE
	msgbox OlivineCity_Gym_Text_JasminePostBattle
	release
	end

OlivineCity_Gym_EventScript_Gent::
	msgbox OlivineCity_Gym_Text_TrainerHint, MSGBOX_NPC
	end

OlivineCity_Gym_EventScript_Lass::
	msgbox OlivineCity_Gym_Text_TrainerHint, MSGBOX_NPC
	end

OlivineCity_Gym_EventScript_GymGuide::
	msgbox OlivineCity_Gym_Text_GymGuyAdvice, MSGBOX_NPC
	end

OlivineCity_Gym_EventScript_Statue::
	msgbox OlivineCity_Gym_Text_GymStatue, MSGBOX_SIGN
	end

OlivineCity_Gym_TriggerRow1::
	return

OlivineCity_Gym_TriggerRow2::
	return

OlivineCity_Gym_Text_JasmineIntro:
	.string "…Um… I'm JASMINE, the GYM\n"
	.string "LEADER here.\p"
	.string "I use Steel-type POKéMON.\n"
	.string "…They're a little rough, but\l"
	.string "also very beautiful.\p"
	.string "…Shall we battle?$"

OlivineCity_Gym_Text_JasmineDefeat:
	.string "…You are truly strong.\n"
	.string "I'll have to train harder.$"

OlivineCity_Gym_Text_JasmineBadgeSpeech:
	.string "Please take the MINERAL BADGE.\p"
	.string "…And this TM, too.$"

OlivineCity_Gym_Text_JasminePostBattle:
	.string "IRON TAIL is a powerful Steel\n"
	.string "move that may lower the foe's\l"
	.string "Defense.\p"
	.string "…Please take care of your\n"
	.string "POKéMON.$"

OlivineCity_Gym_Text_TrainerHint:
	.string "JASMINE is quiet, but her\n"
	.string "Steel POKéMON are incredibly\l"
	.string "durable!$"

OlivineCity_Gym_Text_GymGuyAdvice:
	.string "Yo! CHAMP in the making!\p"
	.string "JASMINE uses Steel types.\n"
	.string "Fire and Ground moves will\l"
	.string "melt right through them!$"

OlivineCity_Gym_Text_GymStatue:
	.string "OLIVINE CITY POKéMON GYM$"

