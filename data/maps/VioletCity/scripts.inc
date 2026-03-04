VioletCity_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

Route30_EventScript_Poliwag::
	lock
	playmoncry SPECIES_POLIWAG, CRY_MODE_NORMAL
	msgbox VioletCity_Text_Poliwag, MSGBOX_DEFAULT
	waitmoncry
	release
	end

VioletCity_EventScript_Bellsprout::
	lock
	playmoncry SPECIES_BELLSPROUT, CRY_MODE_NORMAL
	msgbox VioletCity_Text_Bellsprout, MSGBOX_DEFAULT
	waitmoncry
	release
	end

VioletCity_EventScript_Boy::
	msgbox VioletCity_Text_Boy, MSGBOX_NPC
	end

VioletCity_EventScript_Earl::
	msgbox VioletCity_Text_Earl, MSGBOX_NPC
	end

VioletCity_EventScript_ElmCall_Trigger::
	return

VioletCity_EventScript_Gramps::
	msgbox VioletCity_Text_Gramps, MSGBOX_NPC
	end

VioletCity_EventScript_GymSign::
	msgbox VioletCity_Text_GymSign, MSGBOX_SIGN
	end

VioletCity_EventScript_ItemHyperPotion::
	finditem ITEM_HYPER_POTION
	end

VioletCity_EventScript_ItemPechaBerry::
	finditem ITEM_PECHA_BERRY
	end

VioletCity_EventScript_ItemRareCandy::
	finditem ITEM_RARE_CANDY
	end

VioletCity_EventScript_Lass::
	msgbox VioletCity_Text_Lass, MSGBOX_NPC
	end

VioletCity_EventScript_Pichu::
	lock
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
	msgbox VioletCity_Text_Pichu, MSGBOX_DEFAULT
	waitmoncry
	release
	end

VioletCity_EventScript_Youngster::
	msgbox VioletCity_Text_Youngster, MSGBOX_NPC
	end

VioletCity_Text_Boy:
	.string "Did you know there are POKeMON\n"
	.string "you can only find at night?$"

VioletCity_Text_Earl:
	.string "EARL I am! Good at teaching!\n"
	.string "Come to my school and learn\lall about POKeMON!$"

VioletCity_Text_Gramps:
	.string "I've lived in JOHTO my whole life.\n"
	.string "It's a beautiful region.\pTake your time and enjoy\n"
	.string "the journey, youngster.$"

VioletCity_Text_GymSign:
	.string "VIOLET CITY POKeMON GYM\nLEADER: FALKNER\pThe Elegant Master of\nFlying POKeMON$"

VioletCity_Text_Lass:
	.string "I love walking around town.\n"
	.string "The fresh air is wonderful!$"

VioletCity_Text_Youngster:
	.string "I want to catch every kind of\n"
	.string "POKeMON in JOHTO!$"

VioletCity_Text_Poliwag:
	.string "POLIWAG is splashing around\n"
	.string "happily.$"

VioletCity_Text_Bellsprout:
	.string "BELLSPROUT is swaying gently\n"
	.string "in the breeze.$"

VioletCity_Text_Pichu:
	.string "PICHU's cheeks are sparking\n"
	.string "with electricity!$"

