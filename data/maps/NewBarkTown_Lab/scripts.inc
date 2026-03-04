NewBarkTown_Lab_MapScripts::
	.byte 0

NewBarkTown_EventScript_Aide1::
	msgbox NewBarkTown_Lab_Text_Aide1, MSGBOX_NPC
	end

NewBarkTown_EventScript_Aide2::
	msgbox NewBarkTown_Lab_Text_Aide2, MSGBOX_NPC
	end

NewBarkTown_Lab_EventScript_ChikoritaBall::
	msgbox NewBarkTown_Lab_Text_EmptyPlatform, MSGBOX_SIGN
	end

NewBarkTown_Lab_EventScript_CyndaquilBall::
	msgbox NewBarkTown_Lab_Text_EmptyPlatform, MSGBOX_SIGN
	end

NewBarkTown_Lab_EventScript_Elm::
	msgbox NewBarkTown_Lab_Text_Elm, MSGBOX_NPC
	end

NewBarkTown_Lab_EventScript_HealingMachine1::
	msgbox NewBarkTown_Lab_Text_HealingMachine, MSGBOX_SIGN
	end

NewBarkTown_Lab_EventScript_TotodileBall::
	msgbox NewBarkTown_Lab_Text_EmptyPlatform, MSGBOX_SIGN
	end

NewBarkTown_Lab_EventScript_TriggerAideGiveBalls::
	lockall
	msgbox NewBarkTown_Lab_Text_AideGiveBalls, MSGBOX_DEFAULT
	releaseall
	end

NewBarkTown_Lab_EventScript_TriggerAideGivePotion::
	lockall
	msgbox NewBarkTown_Lab_Text_AideGivePotion, MSGBOX_DEFAULT
	releaseall
	end

NewBarkTown_Lab_EventScript_TriggerReturnPlayer::
	lockall
	msgbox NewBarkTown_Lab_Text_ElmReturn, MSGBOX_DEFAULT
	releaseall
	end

NewBarkTown_Lab_EventScript_TriggerStartLab::
	lockall
	msgbox NewBarkTown_Lab_Text_ElmGreet, MSGBOX_DEFAULT
	releaseall
	end

NewBarkTown_Lab_EventScript_TriggerStartLabLeft::
	goto NewBarkTown_Lab_EventScript_TriggerStartLab
	end

NewBarkTown_Lab_EventScript_TriggerStartLabRight::
	goto NewBarkTown_Lab_EventScript_TriggerStartLab
	end

NewBarkTown_Lab_Text_Elm:
	.string "ELM: Ah, {PLAYER}!\p"
	.string "My research into POKeMON\n"
	.string "evolution is progressing well.\p"
	.string "There are so many mysteries\n"
	.string "left to uncover!$"

NewBarkTown_Lab_Text_Aide1:
	.string "PROF. ELM is brilliant, but he\n"
	.string "gets so absorbed in his work\l"
	.string "he forgets to eat!$"

NewBarkTown_Lab_Text_Aide2:
	.string "We're cataloging evolution data\n"
	.string "from across multiple regions.\p"
	.string "The patterns are fascinating!$"

NewBarkTown_Lab_Text_EmptyPlatform:
	.string "The platform is empty.\n"
	.string "A POKeMON was here once.$"

NewBarkTown_Lab_Text_HealingMachine:
	.string "It's a POKeMON healing machine.$"

NewBarkTown_Lab_Text_ElmGreet:
	.string "ELM: Ah, there you are!\p"
	.string "I've been waiting for you.\n"
	.string "I have a favor to ask...\p"
	.string "Would you run an errand\n"
	.string "for me? There's a man called\l"
	.string "MR. POKeMON on ROUTE 30.\p"
	.string "I need you to pick something\n"
	.string "up from him. Take one of\l"
	.string "these POKeMON for protection!$"

NewBarkTown_Lab_Text_AideGiveBalls:
	.string "AIDE: PROF. ELM asked me to\n"
	.string "give you these.\p"
	.string "Here, take some POKe BALLS!$"

NewBarkTown_Lab_Text_AideGivePotion:
	.string "AIDE: Wait! Take this with\n"
	.string "you. It's a POTION.\p"
	.string "Use it if your POKeMON gets\n"
	.string "hurt on the way.$"

NewBarkTown_Lab_Text_ElmReturn:
	.string "ELM: You're back! Excellent!\p"
	.string "So MR. POKeMON gave you a\n"
	.string "POKeMON EGG? Fascinating!\p"
	.string "I'll study it right away.\n"
	.string "Thank you for your help!$"

