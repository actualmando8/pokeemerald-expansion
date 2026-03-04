MahoganyTown_RocketHideout_B3F_MapScripts::
	.byte 0

@ Mahogany Town Rocket Hideout scripts (stubs)

RocketHideout_B3F_EventScript_Door::
	return

RocketHideout_B3F_EventScript_Eto::
	msgbox RocketHideout_B3F_Text_Eto, MSGBOX_NPC
	end

RocketHideout_B3F_EventScript_Giovanni::
	return

RocketHideout_B3F_EventScript_GruntF5::
	msgbox RocketHideout_B3F_Text_GruntF5, MSGBOX_NPC
	end

RocketHideout_B3F_EventScript_Item_FullHeal::
	finditem ITEM_FULL_HEAL
	end

RocketHideout_B3F_EventScript_Item_GuardSpec::
	msgbox RocketHideout_B3F_Text_Item_GuardSpec, MSGBOX_NPC
	end

RocketHideout_B3F_EventScript_Item_HyperPotion::
	finditem ITEM_HYPER_POTION
	end

RocketHideout_B3F_EventScript_Item_IceHeal::
	msgbox RocketHideout_B3F_Text_Item_IceHeal, MSGBOX_NPC
	end

RocketHideout_B3F_EventScript_Item_Protein::
	finditem ITEM_PROTEIN
	end

RocketHideout_B3F_EventScript_Mitch::
	msgbox RocketHideout_B3F_Text_Mitch, MSGBOX_NPC
	end


RocketHideout_B3F_EventScript_RocketKO::
	msgbox RocketHideout_B3F_Text_RocketKO, MSGBOX_NPC
	end

RocketHideout_B3F_EventScript_Ross::
	msgbox RocketHideout_B3F_Text_Ross, MSGBOX_NPC
	end

RocketHideout_B3F_Trigger_MurkrowStairs::
	return

RocketHideout_B3F_Trigger_Silver::
	return

RocketHideout_B3F_EventScript_Murkrow::
	lock
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
	msgbox RocketHideout_B3F_Text_Murkrow, MSGBOX_DEFAULT
	waitmoncry
	release
	end


RocketHideout_B3F_Text_Eto:
	.string "...$"

RocketHideout_B3F_Text_GruntF5:
	.string "...$"

RocketHideout_B3F_Text_Item_GuardSpec:
	.string "Please have your pass ready\nto proceed.$"

RocketHideout_B3F_Text_Item_IceHeal:
	.string "...$"

RocketHideout_B3F_Text_Mitch:
	.string "...$"

RocketHideout_B3F_Text_RocketKO:
	.string "...$"

RocketHideout_B3F_Text_Ross:
	.string "...$"

RocketHideout_B3F_Text_Murkrow:
	.string "MURKROW looks content.$"
