MahoganyTown_RocketHideout_B1F_MapScripts::
	.byte 0

@ Mahogany Town Rocket Hideout scripts (stubs)





RocketHideout_B1F_EventScript_Persian::
	msgbox RocketHideout_B1F_Text_Persian, MSGBOX_NPC
	end















RocketHideout_B1F_EventScript_DummyPanel::
	msgbox RocketHideout_B1F_Text_DummyPanel, MSGBOX_SIGN
	end

RocketHideout_B1F_EventScript_Item_BigNugget::
	finditem ITEM_NUGGET
	end

RocketHideout_B1F_EventScript_Item_HyperPotion::
	finditem ITEM_HYPER_POTION
	end

RocketHideout_B1F_EventScript_Item_Revive::
	finditem ITEM_REVIVE
	end

RocketHideout_B1F_EventScript_Rocket16::
	return

RocketHideout_B1F_EventScript_Switch::
	msgbox RocketHideout_B1F_Text_Switch, MSGBOX_NPC
	end

RocketHideout_B1F_EventScript_TrainerJed::
	msgbox RocketHideout_B1F_Text_TrainerJed, MSGBOX_NPC
	end

RocketHideout_B1F_TriggerTest::
	return

RocketHideout_B1F_Trigger_SpawnGruntStatue1::
	return

RocketHideout_B1F_Trigger_SpawnGruntStatue2::
	return

RocketHideout_B1F_Trigger_SpawnGruntStatue3::
	return

RocketHideout_B1F_Trigger_SpawnGruntStatue4::
	return

RocketHideout_B1F_Trigger_SpawnGruntStatue5::
	return

RocketHideout_B1F_Trigger_Statue1::
	return

RocketHideout_B1F_Trigger_Statue2::
	return

RocketHideout_B1F_Trigger_Statue3::
	return

RocketHideout_B1F_Trigger_Statue4::
	return

RocketHideout_B1F_Trigger_Statue5::
	return


RocketHideout_B1F_Text_Persian:
	.string "...$"

RocketHideout_B1F_Text_DummyPanel:
	.string "MahoganyTown RocketHideout B1F$"

RocketHideout_B1F_Text_Switch:
	.string "...$"

RocketHideout_B1F_Text_TrainerJed:
	.string "...$"
