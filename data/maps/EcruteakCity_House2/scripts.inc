EcruteakCity_House2_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

EcruteakCity_House2_EventScript_Book::
	msgbox EcruteakCity_House2_Text_Book, MSGBOX_SIGN
	end

EcruteakCity_House2_EventScript_ItemFinderMan::
	msgbox EcruteakCity_House2_Text_ItemFinderMan, MSGBOX_NPC
	end

EcruteakCity_House2_Text_Book:
	.string "Erta of ECRUTEAK:\n"
	.string "Two towers once stood tall,\l"
	.string "each home to a great bird.\p"
	.string "One burned. The birds fled.\n"
	.string "Three beasts were born...$"

EcruteakCity_House2_Text_ItemFinderMan:
	.string "I've been tinkering with this\n"
	.string "ITEMFINDER.\p"
	.string "It can detect hidden items\n"
	.string "buried underground!$"

