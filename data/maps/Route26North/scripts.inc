Route26North_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

Route26North_Trigger::
	lockall
	msgbox Route26North_Text_Trigger, MSGBOX_DEFAULT
	releaseall
	end

Route26_EventScript_Beth::
	msgbox Route26_Text_Beth, MSGBOX_NPC
	end


Route26_Text_Beth:
	.string "...$"

Route26North_Text_Trigger:
	.string "VICTORY ROAD lies ahead.\n"
	.string "Only the strongest TRAINERS\l"
	.string "may pass...$"

