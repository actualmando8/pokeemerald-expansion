AzaleaTown_Mart_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

AzaleaTown_Mart_EventScriptBugCatcher::
	msgbox AzaleaTown_Mart_Text_BugCatcher, MSGBOX_NPC
	end

AzaleaTown_Mart_EventScriptCooltrainerM::
	msgbox AzaleaTown_Mart_Text_CooltrainerM, MSGBOX_NPC
	end

AzaleaTown_Mart_Text_BugCatcher:
	.string "I love BUG POKeMON! AZALEA\n"
	.string "TOWN is the best place for\l"
	.string "them!$"

AzaleaTown_Mart_Text_CooltrainerM:
	.string "Stock up before heading into\n"
	.string "ILEX FOREST!\p"
	.string "It's easy to get lost in\n"
	.string "there!$"

Cherrygrove_Pokemart_EventScript_Clerk::
	msgbox Cherrygrove_Pokemart_Text_Clerk, MSGBOX_NPC
	end

Cherrygrove_Pokemart_Text_Clerk:
	.string "Welcome! Let me know if you\n"
	.string "need anything.$"

