CherrygroveCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CherrygroveCity_OnTransition
	.byte 0

CherrygroveCity_OnTransition::
	setflag FLAG_WORLD_MAP_CHERRYGROVE_CITY
	end

CherryGroveCity_EventScript_TriggerSilver::
	lockall
	msgbox CherryGroveCity_Text_SilverAppears
	trainerbattle_no_intro TRAINER_JOHTO_SILVER_1, CherryGroveCity_Text_SilverDefeat1
	setflag FLAG_DEFEATED_JOHTO_SILVER_1
	msgbox CherryGroveCity_Text_SilverPostBattle1
	releaseall
	end

CherryGroveCity_EventScript_TriggerSilver_Bottom::
	goto CherryGroveCity_EventScript_TriggerSilver
	end

CherryGroveCity_EventScript_TriggerSilver_Top::
	goto CherryGroveCity_EventScript_TriggerSilver
	end

CherryGroveCity_EventScript_Boy::
	msgbox CherryGroveCity_Text_BoyHint, MSGBOX_NPC
	end

CherryGroveCity_EventScript_Corsola::
	lock
	playmoncry SPECIES_CORSOLA, CRY_MODE_NORMAL
	msgbox CherryGroveCity_Text_Corsola, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CherryGroveCity_EventScript_Fisherman::
	msgbox CherryGroveCity_Text_FishermanHint, MSGBOX_NPC
	end

CherryGroveCity_EventScript_Krabby::
	lock
	playmoncry SPECIES_KRABBY, CRY_MODE_NORMAL
	msgbox CherryGroveCity_Text_Krabby, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CherryGroveCity_EventScript_Lass::
	msgbox CherryGroveCity_Text_LassHint, MSGBOX_NPC
	end

CherryGroveCity_EventScript_Sign::
	msgbox CherryGroveCity_Text_CitySign, MSGBOX_SIGN
	end

CherryGroveCity_EventScript_Staryu::
	lock
	playmoncry SPECIES_STARYU, CRY_MODE_NORMAL
	msgbox CherryGroveCity_Text_Staryu, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CherryGroveCity_EventScript_TriggerGent_Bottom::
	lockall
	msgbox CherryGroveCity_Text_GentGreeting, MSGBOX_DEFAULT
	releaseall
	end

CherryGroveCity_EventScript_TriggerGent_Mid::
	goto CherryGroveCity_EventScript_TriggerGent_Bottom
	end

CherryGroveCity_EventScript_TriggerGent_Top::
	goto CherryGroveCity_EventScript_TriggerGent_Bottom
	end

CherryGroveCity_Text_SilverAppears:
	.string "???: …Hey, you.\p"
	.string "You got POKéMON from the lab,\n"
	.string "right?\p"
	.string "What a waste. Giving good\n"
	.string "POKéMON to some weakling.\p"
	.string "I'll show you how a real\n"
	.string "TRAINER battles!$"

CherryGroveCity_Text_SilverDefeat1:
	.string "…Hmph.\n"
	.string "Are you happy you won?$"

CherryGroveCity_Text_SilverPostBattle1:
	.string "SILVER: I'm going to be the\n"
	.string "strongest TRAINER.\p"
	.string "I don't need weak POKéMON.\n"
	.string "I only need strong ones.\p"
	.string "…You'd better get out of\n"
	.string "my way.$"

CherryGroveCity_Text_BoyHint:
	.string "CHERRYGROVE CITY is a nice,\n"
	.string "quiet place.\p"
	.string "The sea breeze is so pleasant!$"

CherryGroveCity_Text_FishermanHint:
	.string "The waters here are full of\n"
	.string "TENTACOOL and KRABBY.\p"
	.string "Perfect for an angler like me!$"

CherryGroveCity_Text_LassHint:
	.string "If you're heading north,\n"
	.string "VIOLET CITY has a GYM.\p"
	.string "The LEADER uses bird POKéMON!$"

CherryGroveCity_Text_CitySign:
	.string "CHERRYGROVE CITY\n"
	.string "The City of Fragrant Flowers$"


CherryGroveCity_Text_Corsola:
	.string "CORSOLA looks content.$"

CherryGroveCity_Text_Krabby:
	.string "KRABBY looks content.$"

CherryGroveCity_Text_Staryu:
	.string "STARYU looks content.$"

CherryGroveCity_Text_GentGreeting:
	.string "OLD MAN: Hey, you! You're a\n"
	.string "new TRAINER, aren't you?\p"
	.string "Let me show you around town!\n"
	.string "Follow me!\p"
	.string "...\p"
	.string "Here's the POKeMON CENTER,\n"
	.string "and over there is the MART.\p"
	.string "And that's the sea! Isn't\n"
	.string "the view wonderful?$"

