GoldenrodCity_RadioTower_5F_MapScripts::
	.byte 0

GoldenrodCity_RadioTower_5F_EventScript_Archer::
	lock
	faceplayer
	msgbox RadioTower5F_Text_GiovanniIntro
	trainerbattle_no_intro TRAINER_JOHTO_GIOVANNI, RadioTower5F_Text_GiovanniDefeat
	msgbox RadioTower5F_Text_GiovanniPostDefeat
	closemessage
	msgbox RadioTower5F_Text_SilverArrives
	trainerbattle_no_intro TRAINER_JOHTO_SILVER_4, RadioTower5F_Text_SilverDefeat4
	msgbox RadioTower5F_Text_SilverPostBattle4
	msgbox RadioTower5F_Text_GiovanniEscape
	release
	end

GoldenrodCity_RadioTower_5F_EventScript_Ben::
	msgbox RadioTower5F_Text_BenHint, MSGBOX_NPC
	end

GoldenrodCity_RadioTower_5F_EventScript_Petrel::
	msgbox GoldenrodCity_RadioTower_5F_Text_Petrel, MSGBOX_NPC
	end

GoldenrodCity_RadioTower_5F_EventScript_Petrel2::
	msgbox GoldenrodCity_RadioTower_5F_Text_Petrel2, MSGBOX_NPC
	end

GoldenrodRaidoTower4_EventScript_ARIANA::
	msgbox GoldenrodRaidoTower4_Text_ARIANA, MSGBOX_NPC
	end

RadioTower5F_Text_GiovanniIntro:
	.string "GIOVANNI: So, you've made it\n"
	.string "this far.\p"
	.string "I've been expecting you.\p"
	.string "After our encounter in the\n"
	.string "SEVII ISLANDS, I knew you'd\l"
	.string "come to stop me again.\p"
	.string "But this time, I have rebuilt\n"
	.string "TEAM ROCKET stronger than ever!\p"
	.string "This RADIO TOWER will broadcast\n"
	.string "our return across all of JOHTO!\p"
	.string "You cannot stop what has\n"
	.string "already begun!$"

RadioTower5F_Text_GiovanniDefeat:
	.string "…Impossible.\n"
	.string "Defeated… again…$"

RadioTower5F_Text_GiovanniPostDefeat:
	.string "GIOVANNI: …You.\n"
	.string "Every time, you stand in my way.\p"
	.string "In KANTO… In the SEVII ISLANDS…\n"
	.string "And now here, in JOHTO.\p"
	.string "Perhaps… TEAM ROCKET truly\n"
	.string "is finished this time.$"

RadioTower5F_Text_SilverArrives:
	.string "SILVER: …GIOVANNI!\p"
	.string "So it's true. You really are\n"
	.string "the boss of TEAM ROCKET.\p"
	.string "…I've been looking for you\n"
	.string "for a long time.\p"
	.string "But first…\n"
	.string "{PLAYER}! Battle me!\p"
	.string "I need to know if I'm strong\n"
	.string "enough to face him!$"

RadioTower5F_Text_SilverDefeat4:
	.string "…I still can't beat you.\n"
	.string "But I've gotten stronger.$"

RadioTower5F_Text_SilverPostBattle4:
	.string "SILVER: …I understand now.\p"
	.string "Strength isn't just about\n"
	.string "having powerful POKéMON.\p"
	.string "It's about the bond between\n"
	.string "TRAINER and POKéMON.\p"
	.string "…GIOVANNI. I'll never become\n"
	.string "like you.$"

RadioTower5F_Text_GiovanniEscape:
	.string "GIOVANNI: …SILVER.\p"
	.string "…I see.\p"
	.string "Perhaps you are right to\n"
	.string "despise me.\p"
	.string "TEAM ROCKET is finished.\n"
	.string "This time, for good.\p"
	.string "…Farewell.$"

RadioTower5F_Text_BenHint:
	.string "The top floor… GIOVANNI himself\n"
	.string "was up here the whole time!\p"
	.string "Thank you for saving us!$"


GoldenrodCity_RadioTower_5F_Text_Petrel:
	.string "...$"

GoldenrodCity_RadioTower_5F_Text_Petrel2:
	.string "...$"

GoldenrodRaidoTower4_Text_ARIANA:
	.string "...$"
