NewBarkTown_Lab_MapScripts::
	.byte 0

NewBarkTown_EventScript_Aide1::
	msgbox NewBarkTown_Lab_Text_Aide1, MSGBOX_NPC
	end

NewBarkTown_EventScript_Aide2::
	msgbox NewBarkTown_Lab_Text_Aide2, MSGBOX_NPC
	end

NewBarkTown_Lab_EventScript_ChikoritaBall::
	lock
	goto_if_ge VAR_NEWBARKTOWN_LABSTATE, 10, NewBarkTown_Lab_EventScript_EmptyPlatform
	goto_if_lt VAR_NEWBARKTOWN_LABSTATE, 3, NewBarkTown_Lab_EventScript_PokeballDefault
	showmonpic SPECIES_CHIKORITA, 10, 3
	msgbox NewBarkTown_Lab_Text_TakeChikorita, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, NewBarkTown_Lab_EventScript_DontChoose
	goto NewBarkTown_Lab_EventScript_GiveChikorita
	end

NewBarkTown_Lab_EventScript_CyndaquilBall::
	lock
	goto_if_ge VAR_NEWBARKTOWN_LABSTATE, 10, NewBarkTown_Lab_EventScript_EmptyPlatform
	goto_if_lt VAR_NEWBARKTOWN_LABSTATE, 3, NewBarkTown_Lab_EventScript_PokeballDefault
	showmonpic SPECIES_CYNDAQUIL, 10, 3
	msgbox NewBarkTown_Lab_Text_TakeCyndaquil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, NewBarkTown_Lab_EventScript_DontChoose
	goto NewBarkTown_Lab_EventScript_GiveCyndaquil
	end

NewBarkTown_Lab_EventScript_TotodileBall::
	lock
	goto_if_ge VAR_NEWBARKTOWN_LABSTATE, 10, NewBarkTown_Lab_EventScript_EmptyPlatform
	goto_if_lt VAR_NEWBARKTOWN_LABSTATE, 3, NewBarkTown_Lab_EventScript_PokeballDefault
	showmonpic SPECIES_TOTODILE, 10, 3
	msgbox NewBarkTown_Lab_Text_TakeTotodile, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, NewBarkTown_Lab_EventScript_DontChoose
	goto NewBarkTown_Lab_EventScript_GiveTotodile
	end

NewBarkTown_Lab_EventScript_EmptyPlatform::
	msgbox NewBarkTown_Lab_Text_EmptyPlatform, MSGBOX_SIGN
	release
	end

NewBarkTown_Lab_EventScript_PokeballDefault::
	msgbox NewBarkTown_Lab_Text_PokeballDefault, MSGBOX_SIGN
	release
	end

NewBarkTown_Lab_EventScript_DontChoose::
	hidemonpic
	msgbox NewBarkTown_Lab_Text_TakeYourTime, MSGBOX_DEFAULT
	release
	end

NewBarkTown_Lab_EventScript_GiveChikorita::
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHIKORITA
	givemon SPECIES_CHIKORITA, 35
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, NewBarkTown_Lab_EventScript_StarterToParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, NewBarkTown_Lab_EventScript_StarterToPC
	hidemonpic
	goto Common_EventScript_NoMoreRoomForPokemon
	end

NewBarkTown_Lab_EventScript_GiveCyndaquil::
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CYNDAQUIL
	givemon SPECIES_CYNDAQUIL, 35
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, NewBarkTown_Lab_EventScript_StarterToParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, NewBarkTown_Lab_EventScript_StarterToPC
	hidemonpic
	goto Common_EventScript_NoMoreRoomForPokemon
	end

NewBarkTown_Lab_EventScript_GiveTotodile::
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TOTODILE
	givemon SPECIES_TOTODILE, 35
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, NewBarkTown_Lab_EventScript_StarterToParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, NewBarkTown_Lab_EventScript_StarterToPC
	hidemonpic
	goto Common_EventScript_NoMoreRoomForPokemon
	end

NewBarkTown_Lab_EventScript_StarterToParty::
	playfanfare MUS_OBTAIN_ITEM
	message NewBarkTown_Lab_Text_ReceivedStarter
	waitmessage
	waitfanfare
	hidemonpic
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, NewBarkTown_Lab_EventScript_FinishStarter
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto NewBarkTown_Lab_EventScript_FinishStarter
	end

NewBarkTown_Lab_EventScript_StarterToPC::
	playfanfare MUS_OBTAIN_ITEM
	message NewBarkTown_Lab_Text_ReceivedStarter
	waitmessage
	waitfanfare
	hidemonpic
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, NewBarkTown_Lab_EventScript_StarterSentToPC
	call Common_EventScript_NameReceivedBoxMon
	goto NewBarkTown_Lab_EventScript_StarterSentToPC
	end

NewBarkTown_Lab_EventScript_StarterSentToPC::
	call Common_EventScript_TransferredToPC
	goto NewBarkTown_Lab_EventScript_FinishStarter
	end

NewBarkTown_Lab_EventScript_FinishStarter::
	setvar VAR_NEWBARKTOWN_LABSTATE, 10
	msgbox NewBarkTown_Lab_Text_ElmAfterStarter, MSGBOX_DEFAULT
	release
	end

NewBarkTown_Lab_EventScript_Elm::
	lock
	faceplayer
	goto_if_ge VAR_NEWBARKTOWN_LABSTATE, 10, NewBarkTown_Lab_EventScript_ElmPostStarter
	goto_if_ge VAR_NEWBARKTOWN_LABSTATE, 3, NewBarkTown_Lab_EventScript_ElmChooseReminder
	msgbox NewBarkTown_Lab_Text_ElmDefault, MSGBOX_DEFAULT
	release
	end

NewBarkTown_Lab_EventScript_ElmChooseReminder::
	msgbox NewBarkTown_Lab_Text_ElmChoose, MSGBOX_DEFAULT
	release
	end

NewBarkTown_Lab_EventScript_ElmPostStarter::
	msgbox NewBarkTown_Lab_Text_ElmResearch, MSGBOX_DEFAULT
	release
	end

NewBarkTown_Lab_EventScript_HealingMachine1::
	msgbox NewBarkTown_Lab_Text_HealingMachine, MSGBOX_SIGN
	end

NewBarkTown_Lab_EventScript_TriggerStartLab::
	lockall
	msgbox NewBarkTown_Lab_Text_ElmGreet, MSGBOX_DEFAULT
	setvar VAR_NEWBARKTOWN_LABSTATE, 3
	releaseall
	end

NewBarkTown_Lab_EventScript_TriggerStartLabLeft::
	goto NewBarkTown_Lab_EventScript_TriggerStartLab
	end

NewBarkTown_Lab_EventScript_TriggerStartLabRight::
	goto NewBarkTown_Lab_EventScript_TriggerStartLab
	end

NewBarkTown_Lab_EventScript_TriggerReturnPlayer::
	end

NewBarkTown_Lab_EventScript_TriggerAideGivePotion::
	end

NewBarkTown_Lab_EventScript_TriggerAideGiveBalls::
	end

NewBarkTown_Lab_Text_TakeChikorita:
	.string "It's CHIKORITA, the Leaf\n"
	.string "POKeMON!\p"
	.string "A gentle Grass-type native\n"
	.string "to JOHTO.\p"
	.string "Will you take CHIKORITA?$"

NewBarkTown_Lab_Text_TakeCyndaquil:
	.string "It's CYNDAQUIL, the Fire Mouse\n"
	.string "POKeMON!\p"
	.string "A timid but powerful Fire-type\n"
	.string "from JOHTO.\p"
	.string "Will you take CYNDAQUIL?$"

NewBarkTown_Lab_Text_TakeTotodile:
	.string "It's TOTODILE, the Big Jaw\n"
	.string "POKeMON!\p"
	.string "An energetic Water-type\n"
	.string "from JOHTO.\p"
	.string "Will you take TOTODILE?$"

NewBarkTown_Lab_Text_TakeYourTime:
	.string "ELM: Take your time.\n"
	.string "Choose whichever one calls\l"
	.string "to you.$"

NewBarkTown_Lab_Text_ReceivedStarter:
	.string "{PLAYER} received\n"
	.string "{STR_VAR_1} from PROF. ELM!$"

NewBarkTown_Lab_Text_ElmAfterStarter:
	.string "ELM: Wonderful choice!\p"
	.string "I've arranged a house for you\n"
	.string "here in town. Your mother is\l"
	.string "already there.\p"
	.string "Head west to CHERRYGROVE CITY\n"
	.string "to start. VIOLET CITY's GYM\l"
	.string "is beyond that.\p"
	.string "Good luck, CHAMPION. JOHTO\n"
	.string "is counting on you.$"

NewBarkTown_Lab_Text_ElmDefault:
	.string "ELM: Welcome to my lab!\p"
	.string "I study POKeMON evolution.\n"
	.string "But we can talk later --\l"
	.string "please, look around.$"

NewBarkTown_Lab_Text_ElmChoose:
	.string "ELM: Go ahead and choose a\n"
	.string "POKeMON from those POKe BALLS\l"
	.string "on the table.$"

NewBarkTown_Lab_Text_ElmResearch:
	.string "ELM: My research focuses on\n"
	.string "POKeMON evolution. JOHTO has\l"
	.string "so many unique species!\p"
	.string "If you discover anything\n"
	.string "unusual on your journey,\l"
	.string "please let me know.$"

NewBarkTown_Lab_Text_ElmGreet:
	.string "ELM: You must be {PLAYER}!\p"
	.string "PROF. OAK and PROF. BIRCH both\n"
	.string "told me about you.\p"
	.string "The CHAMPION who dismantled\n"
	.string "TEAM ROCKET on the SEVII\l"
	.string "ISLANDS... It's an honor!\p"
	.string "I called you here because\n"
	.string "GIOVANNI -- the ROCKET boss\l"
	.string "you defeated -- was spotted\l"
	.string "heading through JOHTO.\p"
	.string "And a young man with red hair\n"
	.string "has been seen following his\l"
	.string "trail. He calls himself SILVER.\p"
	.string "SILVER is reckless. I'm worried\n"
	.string "he'll cause trouble.\p"
	.string "JOHTO has 8 GYM LEADERS\n"
	.string "across the region. If you\l"
	.string "challenge them, you'll build\l"
	.string "allies who can help.\p"
	.string "I'd also like you to take one\n"
	.string "of my research POKeMON.\p"
	.string "They're native to JOHTO.\n"
	.string "Go ahead -- choose from the\l"
	.string "POKe BALLS on the table.$"

NewBarkTown_Lab_Text_Aide1:
	.string "PROF. ELM is brilliant, but he\n"
	.string "gets so absorbed in his work\l"
	.string "he forgets to eat!$"

NewBarkTown_Lab_Text_Aide2:
	.string "Are you the CHAMPION from\n"
	.string "KANTO? Amazing!\p"
	.string "We're cataloging evolution\n"
	.string "data from across regions.\p"
	.string "JOHTO species have the most\n"
	.string "fascinating patterns!$"

NewBarkTown_Lab_Text_EmptyPlatform:
	.string "The platform is empty.$"

NewBarkTown_Lab_Text_PokeballDefault:
	.string "A POKe BALL is set on\n"
	.string "the platform.$"

NewBarkTown_Lab_Text_HealingMachine:
	.string "It's a POKeMON healing machine.$"
