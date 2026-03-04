NewBarkTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NewBarkTown_OnTransition
	.byte 0

NewBarkTown_OnTransition::
	setflag FLAG_WORLD_MAP_NEW_BARK_TOWN
	end

NewBarkTown_EventScript_Door::
	lockall
	msgbox NewBarkTown_Text_DoorLocked, MSGBOX_DEFAULT
	releaseall
	end

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
	lockall
	msgbox NewBarkTown_Text_LeaveTrigger, MSGBOX_DEFAULT
	releaseall
	end

NewBarkTown_EventScript_PlayersHouseMailbox::
	msgbox NewBarkTown_Text_PlayersMailbox, MSGBOX_SIGN
	end

NewBarkTown_EventScript_Silver::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	msgbox NewBarkTown_Text_SilverPeek, MSGBOX_DEFAULT
	releaseall
	end

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

NewBarkTown_Text_DoorLocked:
	.string "The door is locked.$"

NewBarkTown_Text_LeaveTrigger:
	.string "PROF. ELM's words echo...\p"
	.string "Be careful out there!\n"
	.string "The world is vast!$"

NewBarkTown_Text_SilverPeek:
	.string "...\p"
	.string "A red-haired boy is peering\n"
	.string "through the lab window.\p"
	.string "He notices you and glares\n"
	.string "before walking away...$"

