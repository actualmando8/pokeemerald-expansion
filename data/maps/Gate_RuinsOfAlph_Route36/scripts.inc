Gate_RuinsOfAlph_Route36_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

Gate_RuinsOfAlph_Route36_EventScript_Officer::
	msgbox Gate_RuinsOfAlph_Route36_Text_Officer, MSGBOX_NPC
	end

Gate_RuinsOfAlph_Route36_EventScript_PokefanM::
	msgbox Gate_RuinsOfAlph_Route36_Text_PokefanM, MSGBOX_NPC
	end

Gate_RuinsOfAlph_Route36_EventScript_Youngster::
	msgbox Gate_RuinsOfAlph_Route36_Text_Youngster, MSGBOX_NPC
	end


Gate_RuinsOfAlph_Route36_Text_Officer:
	.string "...$"

Gate_RuinsOfAlph_Route36_Text_PokefanM:
	.string "My POKeMON is the cutest!\nDo you not agree?$"

Gate_RuinsOfAlph_Route36_Text_Youngster:
	.string "I want to be the best TRAINER\nin all of JOHTO!$"
