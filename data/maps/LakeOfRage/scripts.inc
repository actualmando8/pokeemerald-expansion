LakeOfRage_MapScripts::
	.byte 0

LakeOfRage_EventScript_Aaron::
	msgbox LakeOfRage_Text_Aaron, MSGBOX_NPC
	end

LakeOfRage_EventScript_Andre::
	msgbox LakeOfRage_Text_Andre, MSGBOX_NPC
	end

LakeOfRage_EventScript_Dragonite::
	lock
	playmoncry SPECIES_DRAGONITE, CRY_MODE_NORMAL
	msgbox LakeOfRage_Text_Dragonite, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LakeOfRage_EventScript_Gramps::
	msgbox LakeOfRage_Text_Gramps, MSGBOX_NPC
	end

LakeOfRage_EventScript_Gyarados::
	lock
	playmoncry SPECIES_GYARADOS, CRY_MODE_NORMAL
	msgbox LakeOfRage_Text_Gyarados, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LakeOfRage_EventScript_Item_Full_Restore::
	finditem ITEM_FULL_RESTORE
	end

LakeOfRage_EventScript_Item_Max_Revive::
	finditem ITEM_MAX_REVIVE
	end

LakeOfRage_EventScript_Item_Red_Flute::
	finditem ITEM_RED_FLUTE
	end

LakeOfRage_EventScript_Lance::
	msgbox LakeOfRage_Text_Lance, MSGBOX_NPC
	end

LakeOfRage_EventScript_Lass::
	msgbox LakeOfRage_Text_Lass, MSGBOX_NPC
	end

LakeOfRage_EventScript_Lois::
	msgbox LakeOfRage_Text_Lois, MSGBOX_NPC
	end

LakeOfRage_EventScript_Nerd::
	msgbox LakeOfRage_Text_Nerd, MSGBOX_NPC
	end

LakeOfRage_EventScript_Pryce::
	msgbox LakeOfRage_Text_Pryce, MSGBOX_NPC
	end

LakeOfRage_EventScript_Raymond::
	msgbox LakeOfRage_Text_Raymond, MSGBOX_NPC
	end

LakeOfRage_EventScript_Sign1::
	msgbox LakeOfRage_Text_Sign1, MSGBOX_SIGN
	end

LakeOfRage_EventScript_Sign2::
	msgbox LakeOfRage_Text_Sign2, MSGBOX_SIGN
	end

LakeOfRage_EventScript_Wesley::
	msgbox LakeOfRage_Text_Wesley, MSGBOX_NPC
	end

LakeOfRage_Text_Aaron:
	.string "I come here to fish every\n"
	.string "weekend. The lake is so\l"
	.string "peaceful now.\p"
	.string "It wasn't always like this,\n"
	.string "though...$"

LakeOfRage_Text_Andre:
	.string "There used to be a red\n"
	.string "GYARADOS in this lake!\p"
	.string "It was caused by forced\n"
	.string "evolution from radio waves.$"

LakeOfRage_Text_Dragonite:
	.string "DRAGONITE is gazing calmly\n"
	.string "across the lake.$"

LakeOfRage_Text_Gramps:
	.string "I've lived by this lake my\n"
	.string "whole life.\p"
	.string "The water is calm now, but\n"
	.string "it was once full of rage.$"

LakeOfRage_Text_Gyarados:
	.string "GYARADOS is swimming\n"
	.string "powerfully through the lake.$"

LakeOfRage_Text_Lance:
	.string "LANCE: The lake is at peace\n"
	.string "again.\p"
	.string "True strength comes from\n"
	.string "the bond between TRAINER\l"
	.string "and POKeMON.$"

LakeOfRage_Text_Lass:
	.string "The lake is beautiful when\n"
	.string "the water is calm like this.$"

LakeOfRage_Text_Lois:
	.string "My husband and I love\n"
	.string "coming here to relax.\p"
	.string "The scenery is wonderful!$"

LakeOfRage_Text_Nerd:
	.string "I'm studying the GYARADOS\n"
	.string "that live in this lake.\p"
	.string "The forced evolution incident\n"
	.string "left fascinating data to\l"
	.string "analyze.$"

LakeOfRage_Text_Pryce:
	.string "PRYCE: Years of training in\n"
	.string "the cold have taught me\l"
	.string "patience.\p"
	.string "A true battle is won before\n"
	.string "it even begins.$"

LakeOfRage_Text_Raymond:
	.string "I caught a MAGIKARP here\n"
	.string "that was twice the normal\l"
	.string "size!\p"
	.string "The lake produces some\n"
	.string "unusual POKeMON.$"

LakeOfRage_Text_Sign1:
	.string "LAKE OF RAGE\n"
	.string "Home of the Mysterious Lake$"

LakeOfRage_Text_Sign2:
	.string "MAHOGANY TOWN - South\n"
	.string "ROUTE 43 - This Way$"

LakeOfRage_Text_Wesley:
	.string "I'm WESLEY. I visit here\n"
	.string "every Wednesday.\p"
	.string "The lake air keeps my\n"
	.string "POKeMON in top condition!$"

