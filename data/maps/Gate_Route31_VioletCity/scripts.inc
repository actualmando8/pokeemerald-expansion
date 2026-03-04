Gate_Route31_VioletCity_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

Gate_Route31_VioletCity_EventScript_CooltrainerF::
	msgbox Gate_Route31_VioletCity_Text_CooltrainerF, MSGBOX_NPC
	end

Gate_Route31_VioletCity_EventScript_Policeman::
	msgbox Gate_Route31_VioletCity_Text_Policeman, MSGBOX_NPC
	end

VioletCity_EventScript_Trigger::
	lockall
	msgbox Gate_Route31_Text_Welcome, MSGBOX_DEFAULT
	releaseall
	end

Gate_Route31_VioletCity_Text_CooltrainerF:
	.string "Training POKeMON isn't just\n"
	.string "about winning battles.\pIt's about building bonds.$"


Gate_Route31_VioletCity_Text_Policeman:
	.string "This is a nice place.\nThe people here are friendly.$"

Gate_Route31_Text_Welcome:
	.string "Welcome to VIOLET CITY!\n"
	.string "The city of nostalgic scents.$"

