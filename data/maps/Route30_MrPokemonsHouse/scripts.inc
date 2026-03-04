Route30_MrPokemonsHouse_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

MrPokemonHouse_EventScript_Coins::
	msgbox MrPokemonHouse_Text_Coins, MSGBOX_NPC
	end

MrPokemonHouse_EventScript_Magazine::
	msgbox MrPokemonHouse_Text_Magazine, MSGBOX_NPC
	end

MrPokemonHouse_EventScript_MrPokemon::
	msgbox MrPokemonHouse_Text_MrPokemon, MSGBOX_NPC
	end


MrPokemonHouse_Text_Coins:
	.string "...$"

MrPokemonHouse_Text_Magazine:
	.string "...$"

MrPokemonHouse_Text_MrPokemon:
	.string "...$"
