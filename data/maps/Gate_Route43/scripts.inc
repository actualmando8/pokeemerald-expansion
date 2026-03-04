Gate_Route43_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

Gate_Route43_Rocket_EventScript_Policeman::
	msgbox Gate_Route43_Rocket_Text_Policeman, MSGBOX_NPC
	end

Gate_Route43_Rocket_EventScript_Rockets::
	msgbox Gate_Route43_Rocket_Text_Rockets, MSGBOX_NPC
	end


Gate_Route43_Rocket_Text_Policeman:
	.string "This is a nice place.\nThe people here are friendly.$"

Gate_Route43_Rocket_Text_Rockets:
	.string "...$"
