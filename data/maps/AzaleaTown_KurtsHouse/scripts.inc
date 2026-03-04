AzaleaTown_KurtsHouse_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

AzaleaTown_KurtsHouse_EventScript_CelebiStatue::
	msgbox AzaleaTown_KurtsHouse_Text_Statue, MSGBOX_SIGN
	end

AzaleaTown_KurtsHouse_EventScript_Girl::
	msgbox AzaleaTown_KurtsHouse_Text_Girl, MSGBOX_NPC
	end

AzaleaTown_KurtsHouse_EventScript_Kurt::
	msgbox AzaleaTown_KurtsHouse_Text_Kurt, MSGBOX_NPC
	end

AzaleaTown_KurtsHouse_EventScript_KurtBefore::
	lockall
	msgbox AzaleaTown_KurtsHouse_Text_KurtBefore, MSGBOX_DEFAULT
	releaseall
	end

AzaleaTown_KurtsHouse_EventScript_OakPhoto::
	msgbox AzaleaTown_KurtsHouse_Text_OakPhoto, MSGBOX_SIGN
	end

AzaleaTown_KurtsHouse_Text_Girl:
	.string "I heard some POKeMON only evolve\n"
	.string "when they really trust you!$"

AzaleaTown_KurtsHouse_Text_Kurt:
	.string "I'm KURT! I make POKe BALLS\n"
	.string "from APRICORNS.\p"
	.string "Bring me some APRICORNS and\n"
	.string "I'll craft something special!$"

AzaleaTown_KurtsHouse_Text_Statue:
	.string "A small wooden carving of a\n"
	.string "forest sprite.\p"
	.string "It seems to radiate a gentle\n"
	.string "warmth...$"

AzaleaTown_KurtsHouse_Text_OakPhoto:
	.string "A photo of KURT with\n"
	.string "PROF. OAK.\p"
	.string "They seem to be old friends.$"

AzaleaTown_KurtsHouse_Text_KurtBefore:
	.string "KURT: Those no-good ROCKETs\n"
	.string "are back! They're cutting\l"
	.string "SLOWPOKETAILS in the WELL!\p"
	.string "I'm going down there to\n"
	.string "put a stop to it!\p"
	.string "Follow me if you dare!$"

