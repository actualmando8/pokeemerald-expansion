CherrygroveCity_Mart_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

Cherrygrove_Pokemart_EventScript_Bugcatcher::
	msgbox Cherrygrove_Pokemart_Text_Bugcatcher, MSGBOX_NPC
	end

Cherrygrove_Pokemart_EventScript_Youngster::
	msgbox Cherrygrove_Pokemart_Text_Youngster, MSGBOX_NPC
	end

Cherrygrove_Pokemart_Text_Bugcatcher:
	.string "Have you tried looking for\n"
	.string "Bug POKeMON in tall grass?\pSome of them are really rare!$"

Cherrygrove_Pokemart_Text_Youngster:
	.string "I want to catch every kind of\n"
	.string "POKeMON in JOHTO!$"

