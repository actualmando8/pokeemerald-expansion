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
	return

NewBarkTown_Lab_EventScript_TriggerAideGivePotion::
	return

NewBarkTown_Lab_EventScript_TriggerReturnPlayer::
	return

NewBarkTown_Lab_EventScript_TriggerStartLab::
	return

NewBarkTown_Lab_EventScript_TriggerStartLabLeft::
	return

NewBarkTown_Lab_EventScript_TriggerStartLabRight::
	return

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

