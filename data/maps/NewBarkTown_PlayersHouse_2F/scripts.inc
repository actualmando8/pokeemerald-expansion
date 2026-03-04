NewBarkTown_PlayersHouse_2F_MapScripts::
	.byte 0

NewBarkTown_PlayersHouse_2F_EventScript_NES::
	msgbox NewBarkTown_PlayersHouse_2F_Text_NES, MSGBOX_SIGN
	end

NewBarkTown_PlayersHouse_2F_Script_ClockSetupTrigger1::
	lockall
	msgbox NewBarkTown_PlayersHouse_2F_Text_Clock, MSGBOX_DEFAULT
	releaseall
	end

NewBarkTown_PlayersHouse_2F_Script_ClockSetupTrigger2::
	goto NewBarkTown_PlayersHouse_2F_Script_ClockSetupTrigger1
	end

NewBarkTown_PlayersHouse_2F_Text_NES:
	.string "{PLAYER}'s game console.\n"
	.string "Better get going -- no time\l"
	.string "to play right now!$"

NewBarkTown_PlayersHouse_2F_Text_Clock:
	.string "Better set the clock before\n"
	.string "heading out...\p"
	.string "It's already set. Time to go!$"

