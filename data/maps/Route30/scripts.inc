Route30_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

Route30_EventScript_Boy::
	msgbox Route30_Text_Boy, MSGBOX_NPC
	end

Route30_EventScript_Bugcatcher_Don::
	msgbox Route30_Text_Bugcatcher_Don, MSGBOX_NPC
	end

Route30_EventScript_ElmCall_Trigger::
	lockall
	msgbox Route30_Text_ElmCall, MSGBOX_DEFAULT
	releaseall
	end

Route30_EventScript_Girl::
	msgbox Route30_Text_Girl, MSGBOX_NPC
	end

Route30_EventScript_Mailbox::
	msgbox Route30_Text_Mailbox, MSGBOX_NPC
	end

Route30_EventScript_Sign::
	msgbox Route30_Text_Sign, MSGBOX_SIGN
	end

Route30_EventScript_TrainerTips::
	msgbox Route30_Text_TrainerTips, MSGBOX_NPC
	end

Route30_EventScript_Youngster_Joey::
	msgbox Route30_Text_Youngster_Joey, MSGBOX_NPC
	end

Route30_EventScript_Youngster_Joey_Fighting::
	msgbox Route30_Text_Youngster_Joey_Fighting, MSGBOX_NPC
	end

Route30_EventScript_Youngster_Mikey::
	msgbox Route30_Text_Youngster_Mikey, MSGBOX_NPC
	end

Route30_Text_Boy:
	.string "Did you know there are POKeMON\n"
	.string "you can only find at night?$"

Route30_Text_Girl:
	.string "I heard some POKeMON only evolve\n"
	.string "when they really trust you!$"


Route30_Text_Bugcatcher_Don:
	.string "BUG POKeMON are the best!\nI love catching them!$"

Route30_Text_Mailbox:
	.string "...$"

Route30_Text_Sign:
	.string "Route30$"

Route30_Text_TrainerTips:
	.string "...$"

Route30_Text_Youngster_Joey:
	.string "I want to be the best TRAINER\nin all of JOHTO!$"

Route30_Text_Youngster_Joey_Fighting:
	.string "I want to be the best TRAINER\nin all of JOHTO!$"

Route30_Text_Youngster_Mikey:
	.string "I want to be the best TRAINER\nin all of JOHTO!$"

Route30_Text_ElmCall:
	.string "... ... ...\p"
	.string "The POKeGEAR rings!\p"
	.string "ELM: {PLAYER}? Are you\n"
	.string "OK? MR. POKeMON's house\l"
	.string "is just ahead on ROUTE 30.\p"
	.string "Be careful out there!$"

