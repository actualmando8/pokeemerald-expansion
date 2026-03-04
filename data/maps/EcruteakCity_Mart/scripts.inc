EcruteakCity_Mart_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

EcruteakCity_Mart_EventScript_Granny::
	msgbox EcruteakCity_Mart_Text_Granny, MSGBOX_NPC
	end

EcruteakCity_Mart_EventScript_Nerd::
	msgbox EcruteakCity_Mart_Text_Nerd, MSGBOX_NPC
	end

EcruteakCity_Mart_Text_Granny:
	.string "ECRUTEAK's MART has supplies\n"
	.string "for exploring the towers.\p"
	.string "Be careful in there, dear!$"

EcruteakCity_Mart_Text_Nerd:
	.string "I tried to go into the BURNED\n"
	.string "TOWER but it's too dark!\p"
	.string "I need to bring a POKeMON\n"
	.string "that knows FLASH.$"

