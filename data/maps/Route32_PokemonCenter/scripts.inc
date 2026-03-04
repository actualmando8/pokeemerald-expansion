Route32_PokemonCenter_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

Route32_PokemonCenter_EventScript_FishingGuru::
	msgbox Route32_PokemonCenter_Text_FishingGuru, MSGBOX_NPC
	end

Route32_PokemonCenter_EventScript_Lass::
	msgbox Route32_PokemonCenter_Text_Lass, MSGBOX_NPC
	end

Route32_PokemonCenter_Text_Lass:
	.string "I love walking around town.\n"
	.string "The fresh air is wonderful!$"


Route32_PokemonCenter_Text_FishingGuru:
	.string "...$"
