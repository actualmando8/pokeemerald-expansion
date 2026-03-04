EcruteakCity_Gym_MapScripts::
	.byte 0

EcruteakCity_Gym_EventScript_Morty::
	trainerbattle_single TRAINER_JOHTO_MORTY, EcruteakCity_Gym_Text_MortyIntro, EcruteakCity_Gym_Text_MortyDefeat, EcruteakCity_Gym_EventScript_DefeatedMorty, NO_MUSIC
	goto_if_unset FLAG_GOT_TM30_FROM_MORTY, EcruteakCity_Gym_EventScript_GiveTM30
	msgbox EcruteakCity_Gym_Text_MortyPostBattle
	release
	end

EcruteakCity_Gym_EventScript_DefeatedMorty::
	setflag FLAG_JOHTO_BADGE04_GET
	msgbox EcruteakCity_Gym_Text_MortyBadgeSpeech
	goto EcruteakCity_Gym_EventScript_GiveTM30
	end

EcruteakCity_Gym_EventScript_GiveTM30::
	giveitem ITEM_TM30
	setflag FLAG_GOT_TM30_FROM_MORTY
	msgbox EcruteakCity_Gym_Text_MortyPostBattle
	release
	end

EcruteakCity_Gym_EventScript_Grace::
	msgbox EcruteakCity_Gym_Text_Grace, MSGBOX_NPC
	end

EcruteakCity_Gym_EventScript_Jeffrey::
	trainerbattle_single TRAINER_JOHTO_GYM_JEFFREY, EcruteakCity_Gym_Text_JeffreySeen, EcruteakCity_Gym_Text_JeffreyBeaten
	msgbox EcruteakCity_Gym_Text_TrainerHint, MSGBOX_AUTOCLOSE
	end

EcruteakCity_Gym_EventScript_Martha::
	trainerbattle_single TRAINER_JOHTO_GYM_MARTHA, EcruteakCity_Gym_Text_MarthaSeen, EcruteakCity_Gym_Text_MarthaBeaten
	msgbox EcruteakCity_Gym_Text_TrainerHint, MSGBOX_AUTOCLOSE
	end

EcruteakCity_Gym_EventScript_Ping::
	msgbox EcruteakCity_Gym_Text_Ping, MSGBOX_NPC
	end

EcruteakCity_Gym_EventScript_GymGuy::
	msgbox EcruteakCity_Gym_Text_GymGuyAdvice, MSGBOX_NPC
	end

EcruteakCity_Gym_EventScript_Statue::
	msgbox EcruteakCity_Gym_Text_GymStatue, MSGBOX_SIGN
	end

EcruteakCity_Gym_Text_MortyIntro:
	.string "I see that you have a powerful\n"
	.string "spirit.\p"
	.string "I have trained among the spirits\n"
	.string "of this GYM to communicate with\l"
	.string "Ghost-type POKéMON.\p"
	.string "Let me test you with my\n"
	.string "Ghost-type POKéMON!$"

EcruteakCity_Gym_Text_MortyDefeat:
	.string "I see… Your spirit was\n"
	.string "stronger than mine.\p"
	.string "Perhaps I still have much\n"
	.string "to learn about the world.$"

EcruteakCity_Gym_Text_MortyBadgeSpeech:
	.string "Here is the FOG BADGE as proof\n"
	.string "of your victory.\p"
	.string "And take this TM.$"

EcruteakCity_Gym_Text_MortyPostBattle:
	.string "SHADOW BALL is a powerful Ghost\n"
	.string "move that may lower Sp. Def.\p"
	.string "I've been searching for HO-OH,\n"
	.string "the legendary rainbow POKéMON.\p"
	.string "Perhaps you'll see it someday.$"

EcruteakCity_Gym_Text_JeffreySeen:
	.string "The spirits in this GYM test\n"
	.string "all who enter!$"

EcruteakCity_Gym_Text_JeffreyBeaten:
	.string "The spirits have spoken\ldots$"

EcruteakCity_Gym_Text_MarthaSeen:
	.string "I can sense strong energy\n"
	.string "from you\ldots Let me test it!$"

EcruteakCity_Gym_Text_MarthaBeaten:
	.string "Such powerful energy\ldots$"

EcruteakCity_Gym_Text_TrainerHint:
	.string "Ghost POKéMON are tricky.\n"
	.string "Normal moves won't touch them!$"

EcruteakCity_Gym_Text_Grace:
	.string "This GYM is terrifying\ldots\n"
	.string "The floor keeps giving way!\p"
	.string "I swear something brushed\n"
	.string "past me in the dark\ldots$"

EcruteakCity_Gym_Text_Ping:
	.string "MORTY spends his days\n"
	.string "meditating and communing\l"
	.string "with spirits.\p"
	.string "He says he's searching for\n"
	.string "the legendary rainbow POKéMON.$"

EcruteakCity_Gym_Text_GymGuyAdvice:
	.string "Yo! CHAMP in the making!\p"
	.string "MORTY uses Ghost types.\n"
	.string "Dark-type moves are super\l"
	.string "effective against them!$"

EcruteakCity_Gym_Text_GymStatue:
	.string "ECRUTEAK CITY POKéMON GYM$"

