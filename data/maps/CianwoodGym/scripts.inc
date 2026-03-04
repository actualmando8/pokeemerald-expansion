CianwoodGym_MapScripts::
	.byte 0

CianwoodGym_EventScript_Chuck::
	trainerbattle_single TRAINER_JOHTO_CHUCK, CianwoodGym_Text_ChuckIntro, CianwoodGym_Text_ChuckDefeat, CianwoodGym_EventScript_DefeatedChuck, NO_MUSIC
	goto_if_unset FLAG_GOT_TM01_FROM_CHUCK, CianwoodGym_EventScript_GiveTM01
	msgbox CianwoodGym_Text_ChuckPostBattle
	release
	end

CianwoodGym_EventScript_DefeatedChuck::
	setflag FLAG_JOHTO_BADGE05_GET
	msgbox CianwoodGym_Text_ChuckBadgeSpeech
	goto CianwoodGym_EventScript_GiveTM01
	end

CianwoodGym_EventScript_GiveTM01::
	giveitem ITEM_TM01
	setflag FLAG_GOT_TM01_FROM_CHUCK
	msgbox CianwoodGym_Text_ChuckPostBattle
	release
	end

CianwoodGym_EventScript_Lao::
	msgbox CianwoodGym_Text_Lao, MSGBOX_NPC
	end

CianwoodGym_EventScript_Lung::
	msgbox CianwoodGym_Text_Lung, MSGBOX_NPC
	end

CianwoodGym_EventScript_Nob::
	trainerbattle_single TRAINER_JOHTO_GYM_NOB, CianwoodGym_Text_NobSeen, CianwoodGym_Text_NobBeaten
	msgbox CianwoodGym_Text_TrainerHint, MSGBOX_AUTOCLOSE
	end

CianwoodGym_EventScript_Yoshi::
	trainerbattle_single TRAINER_JOHTO_GYM_YOSHI, CianwoodGym_Text_YoshiSeen, CianwoodGym_Text_YoshiBeaten
	msgbox CianwoodGym_Text_TrainerHint, MSGBOX_AUTOCLOSE
	end

CianwoodGym_EventScript_Statue::
	msgbox CianwoodGym_Text_GymStatue, MSGBOX_SIGN
	end

CianwoodGym_Text_ChuckIntro:
	.string "WAHAHAH!\n"
	.string "I'm CHUCK, the GYM LEADER!\p"
	.string "I train every day under this\n"
	.string "waterfall to become stronger!\p"
	.string "What? You want to challenge me?\n"
	.string "WAHAHAH! Come at me!$"

CianwoodGym_Text_ChuckDefeat:
	.string "Gah! Wahahah!\n"
	.string "You're strong, kid!\p"
	.string "I got carried away. Here,\n"
	.string "you earned this.$"

CianwoodGym_Text_ChuckBadgeSpeech:
	.string "Take the STORM BADGE!\p"
	.string "And take this TM as well!$"

CianwoodGym_Text_ChuckPostBattle:
	.string "FOCUS PUNCH is devastatingly\n"
	.string "powerful, but you must focus\l"
	.string "on the first turn.\p"
	.string "If you get hit while focusing,\n"
	.string "the move will fail!$"

CianwoodGym_Text_YoshiSeen:
	.string "I train my body and mind\n"
	.string "every day! Prepare yourself!$"

CianwoodGym_Text_YoshiBeaten:
	.string "Impressive technique\ldots$"

CianwoodGym_Text_NobSeen:
	.string "CHUCK taught me everything\n"
	.string "I know! You won't pass!$"

CianwoodGym_Text_NobBeaten:
	.string "I still have much to learn\n"
	.string "from CHUCK\ldots$"

CianwoodGym_Text_TrainerHint:
	.string "CHUCK trains under the\n"
	.string "waterfall every single day.\p"
	.string "His Fighting POKéMON are\n"
	.string "incredibly powerful!$"

CianwoodGym_Text_Lao:
	.string "I came here to train, but\n"
	.string "these boulders are in the way!\p"
	.string "CHUCK says moving them is\n"
	.string "part of the training.$"

CianwoodGym_Text_Lung:
	.string "CHUCK's wife says he forgets\n"
	.string "to eat when he's training.\p"
	.string "That's dedication! I want to\n"
	.string "be that strong someday!$"

CianwoodGym_Text_GymStatue:
	.string "CIANWOOD CITY POKéMON GYM$"

