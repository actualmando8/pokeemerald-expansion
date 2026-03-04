MahoganyTown_PokemonCenter_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

MahoganyTown_PokemonCenter_EventScript_Boy::
	msgbox MahoganyTown_PokemonCenter_Text_Boy, MSGBOX_NPC
	end

MahoganyTown_PokemonCenter_EventScript_Girl::
	msgbox MahoganyTown_PokemonCenter_Text_Girl, MSGBOX_NPC
	end

MahoganyTown_PokemonCenter_EventScript_Hiker::
	msgbox MahoganyTown_PokemonCenter_Text_Hiker, MSGBOX_NPC
	end

MahoganyTown_PokemonCenter_Text_Boy:
	.string "Did you know there are POKeMON\n"
	.string "you can only find at night?$"

MahoganyTown_PokemonCenter_Text_Girl:
	.string "I heard some POKeMON only evolve\n"
	.string "when they really trust you!$"

MahoganyTown_PokemonCenter_Text_Hiker:
	.string "The mountains of JOHTO are\n"
	.string "treacherous but rewarding.\pBe sure to bring ROCK SMASH!$"

