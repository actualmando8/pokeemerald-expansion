NewBarkTown_MapScripts::
	.byte 0

NewBarkTown_EventScript_Door::
	return

NewBarkTown_EventScript_ElmsHouseMailbox::
	msgbox NewBarkTown_Text_ElmsMailbox, MSGBOX_SIGN
	end

NewBarkTown_EventScript_FatMan::
	msgbox NewBarkTown_Text_FatMan, MSGBOX_NPC
	end

NewBarkTown_EventScript_LabSign::
	msgbox NewBarkTown_Text_LabSign, MSGBOX_SIGN
	end

NewBarkTown_EventScript_Lass::
	msgbox NewBarkTown_Text_Lass, MSGBOX_NPC
	end

NewBarkTown_EventScript_LeaveTrigger::
	return

NewBarkTown_EventScript_PlayersHouseMailbox::
	msgbox NewBarkTown_Text_PlayersMailbox, MSGBOX_SIGN
	end

NewBarkTown_EventScript_Silver::
	return

NewBarkTown_EventScript_TownSign::
	msgbox NewBarkTown_Text_TownSign, MSGBOX_SIGN
	end

NewBarkTown_Text_ElmsMailbox:
	.string "PROF. ELM's HOUSE$"

NewBarkTown_Text_FatMan:
	.string "NEW BARK TOWN is small, but\n"
	.string "PROF. ELM's lab puts us on\l"
	.string "the map!\p"
	.string "He's always researching\n"
	.string "POKeMON evolution patterns.$"

NewBarkTown_Text_LabSign:
	.string "PROF. ELM's POKeMON LAB$"

NewBarkTown_Text_Lass:
	.string "The wind blows a new beginning\n"
	.string "from this town every day.\p"
	.string "That's why it's called\n"
	.string "NEW BARK TOWN!$"

NewBarkTown_Text_PlayersMailbox:
	.string "{PLAYER}'s house.$"

NewBarkTown_Text_TownSign:
	.string "NEW BARK TOWN\n"
	.string "The Town Where the Wind of a\l"
	.string "New Beginning Blows$"

