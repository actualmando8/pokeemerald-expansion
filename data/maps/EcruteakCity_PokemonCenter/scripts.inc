EcruteakCity_PokemonCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EcruteakCity_PokemonCenter_OnTransition
	.byte 0

EcruteakCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_ECRUTEAK_CITY
	end

@ Johto map scripts (imported from HnS, stubs)

EcruteakCity_PokemonCenter_EventScript_Bill::
	msgbox EcruteakCity_PC_Text_Bill, MSGBOX_NPC
	end

EcruteakCity_PokemonCenter_EventScript_Hiker::
	msgbox EcruteakCity_PokemonCenter_Text_Hiker, MSGBOX_NPC
	end

EcruteakCity_PokemonCenter_EventScript_Nerd::
	msgbox EcruteakCity_PC_Text_Nerd, MSGBOX_NPC
	end

EcruteakCity_PokemonCenter_EventScript_Woman::
	msgbox EcruteakCity_PokemonCenter_Text_Woman, MSGBOX_NPC
	end

EcruteakCity_PokemonCenter_Text_Hiker:
	.string "The mountains of JOHTO are\n"
	.string "treacherous but rewarding.\pBe sure to bring ROCK SMASH!$"

EcruteakCity_PokemonCenter_Text_Woman:
	.string "Be sure to stock up on supplies\n"
	.string "before heading out on your\l"
	.string "journey!$"

EcruteakCity_PC_Text_Bill:
	.string "I'm BILL! I manage the\n"
	.string "PC Storage System.\p"
	.string "If your PC BOXes are full,\n"
	.string "come talk to me!$"

EcruteakCity_PC_Text_Nerd:
	.string "MORTY is a fascinating fellow.\n"
	.string "He claims he can see the\l"
	.string "future.\p"
	.string "Quite the mystic, that one.$"

