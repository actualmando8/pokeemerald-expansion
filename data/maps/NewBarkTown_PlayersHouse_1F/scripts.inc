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
	.string "PROF. ELM has been so kind,\n"
	.string "letting us stay here.\p"
	.string "JOHTO is lovely. Make sure\n"
	.string "you rest up before heading\l"
	.string "out again!$"

NewBarkTown_PlayersHouse_Text_MomsFriend:
	.string "Your mother moved here from\n"
	.string "KANTO just to be near you!\p"
	.string "She's so proud of everything\n"
	.string "you've accomplished.\p"
	.string "A real CHAMPION's mother!$"

NewBarkTown_PlayersHouse_Text_MomIntro:
	.string "MOM: {PLAYER}! You made it!\p"
	.string "PROF. ELM told me you'd be\n"
	.string "coming to JOHTO.\p"
	.string "He arranged this house for\n"
	.string "us. Isn't that wonderful?\p"
	.string "He's waiting for you at his\n"
	.string "lab next door. You should\l"
	.string "go see him!$"

