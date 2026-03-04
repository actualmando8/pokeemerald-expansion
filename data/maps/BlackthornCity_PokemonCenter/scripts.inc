BlackthornCity_PokemonCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BlackthornCity_PokemonCenter_OnTransition
	.byte 0

BlackthornCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_BLACKTHORN_CITY
	end

@ Johto map scripts (imported from HnS, stubs)

BlackthornCity_PokemonCenter_EventScript_Gent::
	msgbox BlackthornCity_PokemonCenter_Text_Gent, MSGBOX_NPC
	end

BlackthornCity_PokemonCenter_EventScript_Twin::
	msgbox BlackthornCity_PokemonCenter_Text_Twin, MSGBOX_NPC
	end


BlackthornCity_PokemonCenter_Text_Gent:
	.string "...$"

BlackthornCity_PokemonCenter_Text_Twin:
	.string "My sibling and I both love\nPOKeMON!$"
