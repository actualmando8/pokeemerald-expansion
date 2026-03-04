AzaleaTown_MapScripts::
	.byte 0

AzaleaTown_EventScript_SilverTriggerBot::
	lockall
	msgbox AzaleaTown_Text_SilverAppears
	trainerbattle_no_intro TRAINER_JOHTO_SILVER_2, AzaleaTown_Text_SilverDefeat2
	setflag FLAG_DEFEATED_JOHTO_SILVER_2
	msgbox AzaleaTown_Text_SilverPostBattle2
	releaseall
	end

AzaleaTown_EventScript_SilverTriggerTop::
	goto AzaleaTown_EventScript_SilverTriggerBot
	end

AzaleaTown_EventScript_AzaleaSign::
	msgbox AzaleaTown_Text_AzaleaSign, MSGBOX_SIGN
	end

AzaleaTown_EventScript_Gramps::
	msgbox AzaleaTown_Text_GrampsHint, MSGBOX_NPC
	end

AzaleaTown_EventScript_GymSign::
	msgbox AzaleaTown_Text_GymSign, MSGBOX_SIGN
	end

AzaleaTown_EventScript_IlexSign::
	msgbox AzaleaTown_Text_IlexSign, MSGBOX_SIGN
	end

AzaleaTown_EventScript_KilnSign::
	msgbox AzaleaTown_Text_KilnSign, MSGBOX_SIGN
	end

AzaleaTown_EventScript_KurtSign::
	msgbox AzaleaTown_Text_KurtSign, MSGBOX_SIGN
	end

AzaleaTown_EventScript_Lass::
	msgbox AzaleaTown_Text_LassHint, MSGBOX_NPC
	end

AzaleaTown_EventScript_Rocket1::
	msgbox AzaleaTown_Text_Rocket, MSGBOX_NPC
	end

AzaleaTown_EventScript_Rocket2::
	msgbox AzaleaTown_Text_Rocket, MSGBOX_NPC
	end

AzaleaTown_EventScript_Slowpoke::
	lock
	playmoncry SPECIES_SLOWPOKE, CRY_MODE_NORMAL
	msgbox AzaleaTown_Text_Slowpoke, MSGBOX_DEFAULT
	waitmoncry
	release
	end

AzaleaTown_EventScript_WellSign::
	msgbox AzaleaTown_Text_WellSign, MSGBOX_SIGN
	end

AzaleaTown_EventScript_Youngster::
	msgbox AzaleaTown_Text_YoungsterHint, MSGBOX_NPC
	end

AzaleaTown_Text_SilverAppears:
	.string "SILVER: …You again.\p"
	.string "I went to the SLOWPOKE WELL\n"
	.string "and cleaned out those pathetic\l"
	.string "TEAM ROCKET grunts.\p"
	.string "They were too weak to be worth\n"
	.string "my time.\p"
	.string "But you… Let's see if you've\n"
	.string "gotten any stronger!$"

AzaleaTown_Text_SilverDefeat2:
	.string "…Tch.\n"
	.string "You're stronger than before.$"

AzaleaTown_Text_SilverPostBattle2:
	.string "SILVER: I don't understand.\n"
	.string "I only pick strong POKéMON.\p"
	.string "Why do I keep losing to\n"
	.string "someone like you?\p"
	.string "…Whatever. Next time I won't\n"
	.string "lose.$"

AzaleaTown_Text_AzaleaSign:
	.string "AZALEA TOWN\n"
	.string "Living Happily with POKéMON$"

AzaleaTown_Text_GrampsHint:
	.string "Long ago, the SLOWPOKE here\n"
	.string "saved the town from drought.\p"
	.string "We treasure them dearly.$"

AzaleaTown_Text_GymSign:
	.string "AZALEA TOWN POKéMON GYM\n"
	.string "LEADER: BUGSY\p"
	.string "The Walking Bug POKéMON\n"
	.string "Encyclopedia$"

AzaleaTown_Text_IlexSign:
	.string "ILEX FOREST\n"
	.string "The Forest's Protector$"

AzaleaTown_Text_KilnSign:
	.string "CHARCOAL KILN\n"
	.string "Making charcoal since long ago$"

AzaleaTown_Text_KurtSign:
	.string "KURT's House$"

AzaleaTown_Text_LassHint:
	.string "Some shady people were hanging\n"
	.string "around the SLOWPOKE WELL.\p"
	.string "I hope the SLOWPOKE are okay…$"

AzaleaTown_Text_WellSign:
	.string "SLOWPOKE WELL$"

AzaleaTown_Text_YoungsterHint:
	.string "KURT makes special POKe BALLS\n"
	.string "from APRICORNS.\p"
	.string "His house is just over there!$"

AzaleaTown_Text_Slowpoke:
	.string "SLOWPOKE is yawning lazily.\n"
	.string "... ... ... ...$"

AzaleaTown_Text_Rocket:
	.string "ROCKET GRUNT: Get lost, kid!\n"
	.string "We're harvesting SLOWPOKE\l"
	.string "TAILS here!\p"
	.string "It's none of your business!$"

