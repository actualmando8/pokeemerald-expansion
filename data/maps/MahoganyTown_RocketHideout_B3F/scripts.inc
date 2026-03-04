MahoganyTown_RocketHideout_B3F_MapScripts::
	.byte 0

@ Mahogany Town Rocket Hideout scripts (stubs)

RocketHideout_B3F_EventScript_Door::
	lockall
	msgbox RocketHideout_B3F_Text_Door, MSGBOX_DEFAULT
	releaseall
	end

RocketHideout_B3F_EventScript_Eto::
	msgbox RocketHideout_B3F_Text_Eto, MSGBOX_NPC
	end

RocketHideout_B3F_EventScript_Giovanni::
	lockall
	msgbox RocketHideout_B3F_Text_Giovanni, MSGBOX_DEFAULT
	releaseall
	end

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
	lockall
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
	msgbox RocketHideout_B3F_Text_MurkrowStairsB3, MSGBOX_DEFAULT
	waitmoncry
	releaseall
	end

RocketHideout_B3F_Trigger_Silver::
	lockall
	msgbox RocketHideout_B3F_Text_Silver, MSGBOX_DEFAULT
	releaseall
	end

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

RocketHideout_B3F_Text_Door:
	.string "The door is sealed with an\n"
	.string "electronic lock.\p"
	.string "It requires a password...$"

RocketHideout_B3F_Text_Giovanni:
	.string "The transmission room is\n"
	.string "empty. The voice on the\l"
	.string "radio crackles...\p"
	.string "GIOVANNI: ...TEAM ROCKET\n"
	.string "will return. This is not\l"
	.string "the end.\p"
	.string "The signal goes dead.$"

RocketHideout_B3F_Text_MurkrowStairsB3:
	.string "MURKROW shrieks a warning\n"
	.string "from the darkness!$"

RocketHideout_B3F_Text_Silver:
	.string "SILVER: ...What are you\n"
	.string "doing here?\p"
	.string "TEAM ROCKET... They're\n"
	.string "pathetic. Relying on cheap\l"
	.string "tricks instead of real power.\p"
	.string "I'll crush them myself. Stay\n"
	.string "out of my way.$"

