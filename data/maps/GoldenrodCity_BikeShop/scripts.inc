GoldenrodCity_BikeShop_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

GoldenrodCity_BikeShop_EventScript_Bike::
	msgbox GoldenrodCity_BikeShop_Text_Bike, MSGBOX_NPC
	end

GoldenrodCity_BikeShop_EventScript_Clerk::
	msgbox GoldenrodCity_BikeShop_Text_Clerk, MSGBOX_NPC
	end

GoldenrodCity_BikeShop_EventScript_Clerk2::
	msgbox GoldenrodCity_BikeShop_Text_Clerk2, MSGBOX_NPC
	end

GoldenrodCity_BikeShop_Text_Clerk:
	.string "Welcome! Let me know if you\n"
	.string "need anything.$"


GoldenrodCity_BikeShop_Text_Bike:
	.string "...$"

GoldenrodCity_BikeShop_Text_Clerk2:
	.string "Welcome! Let me know if you\nneed anything.$"
