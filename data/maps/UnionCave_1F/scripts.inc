UnionCave_1F_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

UnionCave_1F_EventScript_FirebreatherBill::
	msgbox UnionCave_1F_Text_FirebreatherBill, MSGBOX_NPC
	end

UnionCave_1F_EventScript_FirebreatherRay::
	msgbox UnionCave_1F_Text_FirebreatherRay, MSGBOX_NPC
	end

UnionCave_1F_EventScript_HikerDaniel::
	msgbox UnionCave_1F_Text_HikerDaniel, MSGBOX_NPC
	end

UnionCave_1F_EventScript_HikerRussell::
	msgbox UnionCave_1F_Text_HikerRussell, MSGBOX_NPC
	end

UnionCave_1F_EventScript_Item_Awakening::
	msgbox UnionCave_1F_Text_Item_Awakening, MSGBOX_NPC
	end

UnionCave_1F_EventScript_Item_GreatBall::
	msgbox UnionCave_1F_Text_Item_GreatBall, MSGBOX_NPC
	end

UnionCave_1F_EventScript_Item_Potion::
	finditem ITEM_POTION
	end

UnionCave_1F_EventScript_Item_Xattack::
	finditem ITEM_X_ATTACK
	end

UnionCave_1F_EventScript_PokemaniacLarry::
	msgbox UnionCave_1F_Text_PokemaniacLarry, MSGBOX_NPC
	end

UnionCave_1F_Trigger_Monview::
	return


UnionCave_1F_Text_FirebreatherBill:
	.string "I manage the PC Storage\nSystem. Need help?$"

UnionCave_1F_Text_FirebreatherRay:
	.string "...$"

UnionCave_1F_Text_HikerDaniel:
	.string "The caves around JOHTO are\nfull of surprises!$"

UnionCave_1F_Text_HikerRussell:
	.string "The caves around JOHTO are\nfull of surprises!$"

UnionCave_1F_Text_Item_Awakening:
	.string "...$"

UnionCave_1F_Text_Item_GreatBall:
	.string "...$"

UnionCave_1F_Text_PokemaniacLarry:
	.string "This is a nice place.\nThe people here are friendly.$"
