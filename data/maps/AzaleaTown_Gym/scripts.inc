AzaleaTown_Gym_MapScripts::
	.byte 0

AzaleaTown_Gym_EventScript_Bugsy::
	trainerbattle_single TRAINER_JOHTO_BUGSY, AzaleaTown_Gym_Text_BugsyIntro, AzaleaTown_Gym_Text_BugsyDefeat, AzaleaTown_Gym_EventScript_DefeatedBugsy, NO_MUSIC
	goto_if_unset FLAG_GOT_TM89_FROM_BUGSY, AzaleaTown_Gym_EventScript_GiveTM89
	msgbox AzaleaTown_Gym_Text_BugsyPostBattle
	release
	end

AzaleaTown_Gym_EventScript_DefeatedBugsy::
	setflag FLAG_JOHTO_BADGE02_GET
	msgbox AzaleaTown_Gym_Text_BugsyBadgeSpeech
	goto AzaleaTown_Gym_EventScript_GiveTM89
	end

AzaleaTown_Gym_EventScript_GiveTM89::
	giveitem ITEM_TM89
	setflag FLAG_GOT_TM89_FROM_BUGSY
	msgbox AzaleaTown_Gym_Text_BugsyPostBattle
	release
	end

AzaleaTown_Gym_EventScript_Al::
	trainerbattle_single TRAINER_JOHTO_GYM_AL, AzaleaTown_Gym_Text_AlSeen, AzaleaTown_Gym_Text_AlBeaten
	msgbox AzaleaTown_Gym_Text_TrainerHint1, MSGBOX_AUTOCLOSE
	end

AzaleaTown_Gym_EventScript_Amy::
	msgbox AzaleaTown_Gym_Text_Amy, MSGBOX_NPC
	end

AzaleaTown_Gym_EventScript_Benny::
	trainerbattle_single TRAINER_JOHTO_GYM_BENNY, AzaleaTown_Gym_Text_BennySeen, AzaleaTown_Gym_Text_BennyBeaten
	msgbox AzaleaTown_Gym_Text_TrainerHint1, MSGBOX_AUTOCLOSE
	end

AzaleaTown_Gym_EventScript_Josh::
	msgbox AzaleaTown_Gym_Text_Josh, MSGBOX_NPC
	end

AzaleaTown_Gym_EventScript_May::
	msgbox AzaleaTown_Gym_Text_May, MSGBOX_NPC
	end

AzaleaTown_Gym_EventScript_GymGuy::
	msgbox AzaleaTown_Gym_Text_GymGuyAdvice, MSGBOX_NPC
	end

AzaleaTown_Gym_EventScript_Statue::
	msgbox AzaleaTown_Gym_Text_GymStatue, MSGBOX_SIGN
	end

AzaleaTown_Gym_EventScript_Trigger_1::
	return

AzaleaTown_Gym_EventScript_Trigger_2::
	return

AzaleaTown_Gym_EventScript_Trigger_3::
	return

AzaleaTown_Gym_EventScript_Trigger_4::
	return

AzaleaTown_Gym_EventScript_Trigger_5::
	return

AzaleaTown_Gym_EventScript_Trigger_6::
	return

AzaleaTown_Gym_EventScript_Trigger_7::
	return

AzaleaTown_Gym_EventScript_Trigger_8::
	return

AzaleaTown_Gym_EventScript_Trigger_9::
	return

AzaleaTown_Gym_EventScript_Trigger_10::
	return

AzaleaTown_Gym_EventScript_Trigger_11::
	return

AzaleaTown_Gym_EventScript_Trigger_12::
	return

AzaleaTown_Gym_Text_BugsyIntro:
	.string "I'm BUGSY!\p"
	.string "I never lose when it comes to\n"
	.string "Bug-type POKéMON.\p"
	.string "My research is going to make me\n"
	.string "the authority on Bug POKéMON!\p"
	.string "Let me demonstrate what I've\n"
	.string "learned!$"

AzaleaTown_Gym_Text_BugsyDefeat:
	.string "Whoa, amazing!\n"
	.string "You're an expert on POKéMON!\p"
	.string "My research isn't complete yet.\n"
	.string "I see I have much more to learn.$"

AzaleaTown_Gym_Text_BugsyBadgeSpeech:
	.string "You deserve the HIVE BADGE.\p"
	.string "Take this TM too.$"

AzaleaTown_Gym_Text_BugsyPostBattle:
	.string "U-TURN lets your POKéMON strike\n"
	.string "and then switch out.\p"
	.string "It's perfect for keeping the\n"
	.string "momentum in battle!$"

AzaleaTown_Gym_Text_AlSeen:
	.string "My Bug POKéMON are tougher\n"
	.string "than they look!$"

AzaleaTown_Gym_Text_AlBeaten:
	.string "Ack! My bugs!$"

AzaleaTown_Gym_Text_BennySeen:
	.string "Bug POKéMON have amazing\n"
	.string "potential! Let me show you!$"

AzaleaTown_Gym_Text_BennyBeaten:
	.string "I need to study more about\n"
	.string "Bug-type strategies\l$"

AzaleaTown_Gym_Text_TrainerHint1:
	.string "Bug POKéMON evolve quickly.\n"
	.string "Don't let your guard down!$"

AzaleaTown_Gym_Text_Amy:
	.string "My twin and I love watching\n"
	.string "Bug POKéMON evolve!\p"
	.string "BUGSY showed us a METAPOD\n"
	.string "evolving. It was amazing!$"

AzaleaTown_Gym_Text_Josh:
	.string "I've been collecting bugs since\n"
	.string "I was little.\p"
	.string "BUGSY knows everything about\n"
	.string "them, though. I can't compete!$"

AzaleaTown_Gym_Text_May:
	.string "My sister AMY dragged me here,\n"
	.string "but this GYM is actually cool!\p"
	.string "The spider webs are a bit much,\n"
	.string "though\ldots$"

AzaleaTown_Gym_Text_GymGuyAdvice:
	.string "Yo! CHAMP in the making!\p"
	.string "BUGSY's Bug types are tough!\n"
	.string "Fire and Flying moves work\l"
	.string "great against them!$"

AzaleaTown_Gym_Text_GymStatue:
	.string "AZALEA TOWN POKéMON GYM$"

