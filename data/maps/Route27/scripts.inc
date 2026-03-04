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
	.string "... ... ...\p"
	.string "BAOBA here! I run the\n"
	.string "SAFARI ZONE in JOHTO!\p"
	.string "Come visit sometime!$"

Route27_Text_Blake:
	.string "ROUTE 27 connects KANTO\n"
	.string "and JOHTO.\p"
	.string "The POKeMON here are tough.\n"
	.string "You'd better be prepared!$"

Route27_Text_Brian:
	.string "I came from JOHTO to fish\n"
	.string "in KANTO's waters.\p"
	.string "But the fishing here isn't\n"
	.string "half as good as back home!$"

Route27_Text_FirstSteps:
	.string "This is where KANTO ends\n"
	.string "and JOHTO begins.\p"
	.string "Your first steps into a\n"
	.string "whole new region!$"

Route27_Text_Gilbert:
	.string "The waterfall up ahead leads\n"
	.string "to TOHJO FALLS.\p"
	.string "It's a natural border between\n"
	.string "the two regions.$"

Route27_Text_Item_Moonstone:
	.string "{PLAYER} found a MOON STONE!$"

Route27_Text_Item_SolarBeam:
	.string "{PLAYER} found TM SOLARBEAM!$"

Route27_Text_Jose:
	.string "I've been training on this\n"
	.string "route for years.\p"
	.string "The POKeMON near the border\n"
	.string "are stronger than most!$"

Route27_Text_Megan:
	.string "Are you heading to JOHTO?\p"
	.string "NEW BARK TOWN is just ahead.\n"
	.string "It's small, but PROF. ELM's\l"
	.string "lab is there.$"

Route27_Text_Reena:
	.string "A red-haired boy rushed past\n"
	.string "here not long ago.\p"
	.string "He didn't even stop to battle.\n"
	.string "He seemed... angry.$"

Route27_Text_Scott:
	.string "SCOTT: {PLAYER}! Fancy\n"
	.string "meeting you here!\p"
	.string "JOHTO, huh? I've heard the\n"
	.string "GYM LEADERS here are no joke.\p"
	.string "I'll be watching your\n"
	.string "progress with great interest!$"

Route27_Text_TohjoFallsSign:
	.string "ROUTE 27\n"
	.string "TOHJO FALLS ahead$"
