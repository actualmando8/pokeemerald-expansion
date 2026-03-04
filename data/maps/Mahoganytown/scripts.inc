Mahoganytown_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

MahoganyTown_EventScript_CandybarSign::
	msgbox MahoganyTown_Text_CandybarSign, MSGBOX_SIGN
	end

MahoganyTown_EventScript_Fisher::
	msgbox MahoganyTown_Text_Fisher, MSGBOX_NPC
	end

MahoganyTown_EventScript_Gramps::
	msgbox MahoganyTown_Text_Gramps, MSGBOX_NPC
	end

MahoganyTown_EventScript_GymSign::
	msgbox MahoganyTown_Text_GymSign, MSGBOX_SIGN
	end

MahoganyTown_EventScript_Lass::
	msgbox MahoganyTown_Text_Lass, MSGBOX_NPC
	end

MahoganyTown_EventScript_Merchant::
	msgbox MahoganyTown_Text_Merchant, MSGBOX_NPC
	end

MahoganyTown_EventScript_MerchantTrigger::
	return

MahoganyTown_EventScript_Sign::
	msgbox MahoganyTown_Text_Sign, MSGBOX_SIGN
	end

MahoganyTown_Text_Fisher:
	.string "You can fish up all sorts of\n"
	.string "rare POKeMON in JOHTO's waters!\pYou just need patience!$"

MahoganyTown_Text_Gramps:
	.string "I've lived in JOHTO my whole life.\n"
	.string "It's a beautiful region.\pTake your time and enjoy\n"
	.string "the journey, youngster.$"

MahoganyTown_Text_GymSign:
	.string "MAHOGANY TOWN POKeMON GYM\n"
	.string "LEADER: PRYCE\p"
	.string "The Teacher of Winter's\n"
	.string "Harshness$"

MahoganyTown_Text_Lass:
	.string "I love walking around town.\n"
	.string "The fresh air is wonderful!$"

MahoganyTown_Text_CandybarSign:
	.string "RAGECANDYBAR STAND\n"
	.string "A Local Delicacy!$"

MahoganyTown_Text_Merchant:
	.string "RAGECANDYBARS! Get your\n"
	.string "RAGECANDYBARS here!\p"
	.string "They're a MAHOGANY TOWN\n"
	.string "specialty!$"

MahoganyTown_Text_Sign:
	.string "MAHOGANY TOWN\n"
	.string "Welcome to the Home of\l"
	.string "the Ninja$"
