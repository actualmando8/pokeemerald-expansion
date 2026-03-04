Route27_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

Route27_EventScript_BaobaCall::
	msgbox Route27_Text_BaobaCall, MSGBOX_NPC
	end

Route27_EventScript_Blake::
	msgbox Route27_Text_Blake, MSGBOX_NPC
	end

Route27_EventScript_Brian::
	msgbox Route27_Text_Brian, MSGBOX_NPC
	end

Route27_EventScript_Fatman::
	msgbox Route27_Text_Fatman, MSGBOX_NPC
	end

Route27_EventScript_FirstSteps::
	msgbox Route27_Text_FirstSteps, MSGBOX_NPC
	end

Route27_EventScript_Gilbert::
	msgbox Route27_Text_Gilbert, MSGBOX_NPC
	end

Route27_EventScript_Item_Moonstone::
	msgbox Route27_Text_Item_Moonstone, MSGBOX_NPC
	end

Route27_EventScript_Item_RareCandy::
	finditem ITEM_RARE_CANDY
	end

Route27_EventScript_Item_Revive::
	finditem ITEM_REVIVE
	end

Route27_EventScript_Item_SolarBeam::
	msgbox Route27_Text_Item_SolarBeam, MSGBOX_NPC
	end

Route27_EventScript_Jose::
	msgbox Route27_Text_Jose, MSGBOX_NPC
	end

Route27_EventScript_Megan::
	msgbox Route27_Text_Megan, MSGBOX_NPC
	end

Route27_EventScript_Reena::
	msgbox Route27_Text_Reena, MSGBOX_NPC
	end

Route27_EventScript_Scott::
	msgbox Route27_Text_Scott, MSGBOX_NPC
	end

Route27_EventScript_TohjoFallsSign::
	msgbox Route27_Text_TohjoFallsSign, MSGBOX_SIGN
	end

Route27_Text_Fatman:
	.string "Heh heh! POKeMON are amazing\n"
	.string "companions! I go everywhere\lwith mine!$"


Route27_Text_BaobaCall:
	.string "...$"

Route27_Text_Blake:
	.string "...$"

Route27_Text_Brian:
	.string "...$"

Route27_Text_FirstSteps:
	.string "...$"

Route27_Text_Gilbert:
	.string "...$"

Route27_Text_Item_Moonstone:
	.string "...$"

Route27_Text_Item_SolarBeam:
	.string "...$"

Route27_Text_Jose:
	.string "...$"

Route27_Text_Megan:
	.string "...$"

Route27_Text_Reena:
	.string "...$"

Route27_Text_Scott:
	.string "...$"

Route27_Text_TohjoFallsSign:
	.string "Route27$"
