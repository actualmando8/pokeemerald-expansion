UnionCave_B1F_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

UnionCave_B1F_EventScript_HikerLeonard::
	msgbox UnionCave_B1F_Text_HikerLeonard, MSGBOX_NPC
	end

UnionCave_B1F_EventScript_HikerPhillip::
	msgbox UnionCave_B1F_Text_HikerPhillip, MSGBOX_NPC
	end

UnionCave_B1F_EventScript_Item_SecretPower::
	msgbox UnionCave_B1F_Text_Item_SecretPower, MSGBOX_NPC
	end

UnionCave_B1F_EventScript_Item_Xdefend::
	finditem ITEM_X_DEFEND
	end

UnionCave_B1F_EventScript_PokemaniacAndrew::
	msgbox UnionCave_B1F_Text_PokemaniacAndrew, MSGBOX_NPC
	end

UnionCave_B1F_EventScript_PokemaniacCalvin::
	msgbox UnionCave_B1F_Text_PokemaniacCalvin, MSGBOX_NPC
	end


UnionCave_B1F_Text_HikerLeonard:
	.string "The caves around JOHTO are\nfull of surprises!$"

UnionCave_B1F_Text_HikerPhillip:
	.string "The caves around JOHTO are\nfull of surprises!$"

UnionCave_B1F_Text_Item_SecretPower:
	.string "...$"

UnionCave_B1F_Text_PokemaniacAndrew:
	.string "This is a nice place.\nThe people here are friendly.$"

UnionCave_B1F_Text_PokemaniacCalvin:
	.string "This is a nice place.\nThe people here are friendly.$"
