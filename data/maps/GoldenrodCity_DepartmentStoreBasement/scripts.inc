GoldenrodCity_DepartmentStoreBasement_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

GoldenrodCity_DepartmentStoreBasement_EventScript_BlackBelt1::
	msgbox GoldenrodCity_DepartmentStoreBasement_Text_BlackBelt1, MSGBOX_NPC
	end

GoldenrodCity_DepartmentStoreBasement_EventScript_BlackBelt2::
	msgbox GoldenrodCity_DepartmentStoreBasement_Text_BlackBelt2, MSGBOX_NPC
	end

GoldenrodCity_DepartmentStoreBasement_EventScript_BlackBelt3::
	msgbox GoldenrodCity_DepartmentStoreBasement_Text_BlackBelt3, MSGBOX_NPC
	end

GoldenrodCity_DepartmentStoreBasement_EventScript_Item_AmuletCoin::
	msgbox GoldenrodCity_DepartmentStoreBasement_Text_Item_AmuletCoin, MSGBOX_NPC
	end

GoldenrodCity_DepartmentStoreBasement_EventScript_Item_Ether::
	finditem ITEM_ETHER
	end

GoldenrodCity_DepartmentStoreBasement_EventScript_Item_ExpShare::
	msgbox GoldenrodCity_DepartmentStoreBasement_Text_Item_ExpShare, MSGBOX_NPC
	end

GoldenrodCity_DepartmentStoreBasement_EventScript_Item_UltraBall::
	finditem ITEM_ULTRA_BALL
	end

GoldenrodCity_DepartmentStoreBasement_EventScript_Machoke::
	lock
	playmoncry SPECIES_MACHOKE, CRY_MODE_NORMAL
	msgbox GoldenrodCity_DepartmentStoreBasement_Text_Machoke, MSGBOX_DEFAULT
	waitmoncry
	release
	end

GoldenrodDeptElevator_EventScript_Elevator::
	msgbox GoldenrodDeptElevator_Text_Elevator, MSGBOX_NPC
	end


GoldenrodCity_DepartmentStoreBasement_Text_BlackBelt1:
	.string "Hiyaah! A strong body makes\nfor strong POKeMON!$"

GoldenrodCity_DepartmentStoreBasement_Text_BlackBelt2:
	.string "Hiyaah! A strong body makes\nfor strong POKeMON!$"

GoldenrodCity_DepartmentStoreBasement_Text_BlackBelt3:
	.string "Hiyaah! A strong body makes\nfor strong POKeMON!$"

GoldenrodCity_DepartmentStoreBasement_Text_Item_AmuletCoin:
	.string "...$"

GoldenrodCity_DepartmentStoreBasement_Text_Item_ExpShare:
	.string "...$"

GoldenrodCity_DepartmentStoreBasement_Text_Machoke:
	.string "MACHOKE is flexing proudly.$"

GoldenrodDeptElevator_Text_Elevator:
	.string "...$"
