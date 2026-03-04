Gate_NationalPark_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

Gate_NationalPark_EventScript_Attendant::
	msgbox Gate_NationalPark_Text_Attendant, MSGBOX_NPC
	end

Gate_NationalPark_EventScript_BAttendant::
	msgbox Gate_NationalPark_Text_BAttendant, MSGBOX_NPC
	end

Route35NationalParkGate_EventScript_BC1::
	msgbox Route35NationalParkGate_Text_BC1, MSGBOX_NPC
	end

Route35NationalParkGate_EventScript_BC2::
	msgbox Route35NationalParkGate_Text_BC2, MSGBOX_NPC
	end

Route35NationalParkGate_EventScript_Beauty::
	msgbox Route35NationalParkGate_Text_Beauty, MSGBOX_NPC
	end

Route35NationalParkGate_EventScript_Policeman::
	msgbox Route35NationalParkGate_Text_Policeman, MSGBOX_NPC
	end

Route35NationalParkGate_EventScript_Rocker::
	msgbox Route35NationalParkGate_Text_Rocker, MSGBOX_NPC
	end

Route35NationalParkGate_Text_Beauty:
	.string "A true TRAINER cares for their\n"
	.string "POKeMON's beauty as well\las their strength!$"


Gate_NationalPark_Text_Attendant:
	.string "Welcome! Please let me know\nif you need assistance.$"

Gate_NationalPark_Text_BAttendant:
	.string "Welcome! Please let me know\nif you need assistance.$"

Route35NationalParkGate_Text_BC1:
	.string "...$"

Route35NationalParkGate_Text_BC2:
	.string "...$"

Route35NationalParkGate_Text_Policeman:
	.string "This is a nice place.\nThe people here are friendly.$"

Route35NationalParkGate_Text_Rocker:
	.string "Rock and roll! POKeMON\nbattles get me fired up!$"
