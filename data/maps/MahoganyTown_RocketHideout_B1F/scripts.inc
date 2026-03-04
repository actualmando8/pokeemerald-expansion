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
	msgbox RocketHideout_B1F_Text_Rocket16, MSGBOX_NPC
	end

RocketHideout_B1F_EventScript_Switch::
	msgbox RocketHideout_B1F_Text_Switch, MSGBOX_NPC
	end

RocketHideout_B1F_EventScript_TrainerJed::
	msgbox RocketHideout_B1F_Text_TrainerJed, MSGBOX_NPC
	end

RocketHideout_B1F_TriggerTest::
	lockall
	msgbox RocketHideout_B1F_Text_TriggerTest, MSGBOX_DEFAULT
	releaseall
	end

RocketHideout_B1F_Trigger_SpawnGruntStatue1::
	lockall
	msgbox RocketHideout_B1F_Text_StatueAlarm, MSGBOX_DEFAULT
	releaseall
	end

RocketHideout_B1F_Trigger_SpawnGruntStatue2::
	lockall
	msgbox RocketHideout_B1F_Text_StatueAlarm, MSGBOX_DEFAULT
	releaseall
	end

RocketHideout_B1F_Trigger_SpawnGruntStatue3::
	lockall
	msgbox RocketHideout_B1F_Text_StatueAlarm, MSGBOX_DEFAULT
	releaseall
	end

RocketHideout_B1F_Trigger_SpawnGruntStatue4::
	lockall
	msgbox RocketHideout_B1F_Text_StatueAlarm, MSGBOX_DEFAULT
	releaseall
	end

RocketHideout_B1F_Trigger_SpawnGruntStatue5::
	lockall
	msgbox RocketHideout_B1F_Text_StatueAlarm, MSGBOX_DEFAULT
	releaseall
	end

RocketHideout_B1F_Trigger_Statue1::
	msgbox RocketHideout_B1F_Text_StatueExamine, MSGBOX_SIGN
	end

RocketHideout_B1F_Trigger_Statue2::
	msgbox RocketHideout_B1F_Text_StatueExamine, MSGBOX_SIGN
	end

RocketHideout_B1F_Trigger_Statue3::
	msgbox RocketHideout_B1F_Text_StatueExamine, MSGBOX_SIGN
	end

RocketHideout_B1F_Trigger_Statue4::
	msgbox RocketHideout_B1F_Text_StatueExamine, MSGBOX_SIGN
	end

RocketHideout_B1F_Trigger_Statue5::
	msgbox RocketHideout_B1F_Text_StatueExamine, MSGBOX_SIGN
	end


RocketHideout_B1F_Text_Persian:
	.string "...$"

RocketHideout_B1F_Text_DummyPanel:
	.string "MahoganyTown RocketHideout B1F$"

RocketHideout_B1F_Text_Switch:
	.string "...$"

RocketHideout_B1F_Text_TrainerJed:
	.string "...$"

RocketHideout_B1F_Text_Rocket16:
	.string "ROCKET GRUNT: You'll never\n"
	.string "make it past our defenses!\p"
	.string "The passwords to the doors\n"
	.string "are hidden in the statues!$"

RocketHideout_B1F_Text_TriggerTest:
	.string "An alarm sounds!\p"
	.string "Security has been triggered!$"

RocketHideout_B1F_Text_StatueAlarm:
	.string "The statue's eyes glow red!\p"
	.string "An alarm sounds -- a GRUNT\n"
	.string "rushes in to investigate!$"

RocketHideout_B1F_Text_StatueExamine:
	.string "A suspicious-looking statue.\n"
	.string "Its eyes seem to follow you.\p"
	.string "There might be a camera\n"
	.string "hidden inside...$"

