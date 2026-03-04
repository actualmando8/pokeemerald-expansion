MahoganyTown_RocketHideout_B2F_MapScripts::
	.byte 0

@ Mahogany Town Rocket Hideout scripts (stubs)

RocketHideout_B2F_EventScript_Electrode::
	msgbox RocketHideout_B2F_Text_Electrode, MSGBOX_NPC
	end

RocketHideout_B2F_EventScript_Grunt14::
	msgbox RocketHideout_B2F_Text_Grunt14, MSGBOX_NPC
	end

RocketHideout_B2F_EventScript_Grunt15::
	msgbox RocketHideout_B2F_Text_Grunt15, MSGBOX_NPC
	end

RocketHideout_B2F_EventScript_Grunt16::
	msgbox RocketHideout_B2F_Text_Grunt16, MSGBOX_NPC
	end

RocketHideout_B2F_EventScript_Lance::
	msgbox RocketHideout_B2F_Text_Lance, MSGBOX_NPC
	end

RocketHideout_B2F_EventScript_LanceTriggerLeft::
	lockall
	msgbox RocketHideout_B2F_Text_LanceTrigger, MSGBOX_DEFAULT
	releaseall
	end

RocketHideout_B2F_EventScript_LanceTriggerRight::
	lockall
	msgbox RocketHideout_B2F_Text_LanceTrigger, MSGBOX_DEFAULT
	releaseall
	end

RocketHideout_B2F_EventScript_ReadyForBattlePrompt::
	msgbox RocketHideout_B2F_Text_ReadyForBattlePrompt, MSGBOX_NPC
	end

RocketHideout_B2F_Trigger_Ariana::
	lockall
	msgbox RocketHideout_B2F_Text_Ariana, MSGBOX_DEFAULT
	releaseall
	end

RocketHideout_B2F_Trigger_Electrode::
	lockall
	msgbox RocketHideout_B2F_Text_ElectrodeTrigger, MSGBOX_DEFAULT
	releaseall
	end

RocketHideout_B2F_Trigger_MurkrowGate::
	lockall
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
	msgbox RocketHideout_B2F_Text_MurkrowGate, MSGBOX_DEFAULT
	waitmoncry
	releaseall
	end

RocketHideout_B2F_Trigger_MurkrowStairs::
	lockall
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
	msgbox RocketHideout_B2F_Text_MurkrowStairs, MSGBOX_DEFAULT
	waitmoncry
	releaseall
	end

RocketHideout_EventScript_Item_Thief::
	msgbox RocketHideout_Text_Item_Thief, MSGBOX_NPC
	end

RocketHideout_B2F_Text_Lance:
	.string "LANCE: Dragons are the\n"
	.string "strongest POKeMON.\pBut true strength comes from\n"
	.string "the bond between TRAINER\land POKeMON.$"


RocketHideout_B2F_Text_Electrode:
	.string "...$"

RocketHideout_B2F_Text_Grunt14:
	.string "...$"

RocketHideout_B2F_Text_Grunt15:
	.string "...$"

RocketHideout_B2F_Text_Grunt16:
	.string "...$"

RocketHideout_B2F_Text_ReadyForBattlePrompt:
	.string "...$"

RocketHideout_Text_Item_Thief:
	.string "...$"

RocketHideout_B2F_Text_LanceTrigger:
	.string "LANCE: I infiltrated this base\n"
	.string "to stop TEAM ROCKET.\p"
	.string "They're using radio waves\n"
	.string "to force POKeMON to evolve!\p"
	.string "We have to destroy the\n"
	.string "signal generator. Follow me!$"

RocketHideout_B2F_Text_Ariana:
	.string "ARIANA: So you've made it\n"
	.string "this far... Impressive.\p"
	.string "But this is where your\n"
	.string "little adventure ends!\p"
	.string "TEAM ROCKET's plans will\n"
	.string "not be stopped by a child!$"

RocketHideout_B2F_Text_ElectrodeTrigger:
	.string "LANCE: These ELECTRODE power\n"
	.string "the radio transmitter.\p"
	.string "I know it's unfortunate, but\n"
	.string "we have to shut them down\l"
	.string "to stop the signal!$"

RocketHideout_B2F_Text_MurkrowGate:
	.string "A MURKROW caws from the\n"
	.string "rafters! It seems to be\l"
	.string "standing guard...$"

RocketHideout_B2F_Text_MurkrowStairs:
	.string "A MURKROW eyes you from the\n"
	.string "stairway above...$"

