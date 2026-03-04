NewBarkTown_PlayersHouse_1F_MapScripts::
	.byte 0

NewBarkTown_PlayersHouse_1F_EventScript_Mom::
	msgbox NewBarkTown_PlayersHouse_Text_Mom, MSGBOX_NPC
	end

NewBarkTown_PlayersHouse_1F_EventScript_MomsFriend::
	msgbox NewBarkTown_PlayersHouse_Text_MomsFriend, MSGBOX_NPC
	end

NewBarkTown_PlayersHouse_1F_EventScript_MomsIntroTrigger1::
	lockall
	msgbox NewBarkTown_PlayersHouse_Text_MomIntro, MSGBOX_DEFAULT
	releaseall
	end

NewBarkTown_PlayersHouse_1F_EventScript_MomsIntroTrigger2::
	goto NewBarkTown_PlayersHouse_1F_EventScript_MomsIntroTrigger1
	end

NewBarkTown_PlayersHouse_Text_Mom:
	.string "MOM: Welcome home, dear!\p"
	.string "You must be tired from all\n"
	.string "your adventuring.\p"
	.string "Make sure you rest up before\n"
	.string "heading out again!$"

NewBarkTown_PlayersHouse_Text_MomsFriend:
	.string "Your mother talks about you\n"
	.string "all the time!\p"
	.string "She's so proud of everything\n"
	.string "you've accomplished.$"

NewBarkTown_PlayersHouse_Text_MomIntro:
	.string "MOM: Oh, {PLAYER}! Good\n"
	.string "morning!\p"
	.string "PROF. ELM next door was\n"
	.string "looking for you.\p"
	.string "He seemed really excited\n"
	.string "about something!$"

