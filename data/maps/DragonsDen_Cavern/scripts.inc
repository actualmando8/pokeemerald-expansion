DragonsDen_Cavern_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

DragonsDen_Cavern_EventScript_Cara::
	msgbox DragonsDen_Cavern_Text_Cara, MSGBOX_NPC
	end

DragonsDen_Cavern_EventScript_Darin::
	msgbox DragonsDen_Cavern_Text_Darin, MSGBOX_NPC
	end

DragonsDen_Cavern_EventScript_Item_Dragon_Fang::
	finditem ITEM_DRAGON_FANG
	end

DragonsDen_Cavern_EventScript_Item_Max_Potion::
	finditem ITEM_POTION
	end

DragonsDen_Cavern_EventScript_Item_PP_Max::
	msgbox DragonsDen_Cavern_Text_Item_PP_Max, MSGBOX_NPC
	end

DragonsDen_Cavern_EventScript_TwinLea::
	msgbox DragonsDen_Cavern_Text_TwinLea, MSGBOX_NPC
	end

DragonsDen_Cavern_EventScript_TwinPia::
	msgbox DragonsDen_Cavern_Text_TwinPia, MSGBOX_NPC
	end

DragonsDen_Cavern_Trigger_ClairLeft::
	lockall
	msgbox DragonsDen_Cavern_Text_ClairTrigger, MSGBOX_DEFAULT
	releaseall
	end

DragonsDen_Cavern_Trigger_ClairMid::
	lockall
	msgbox DragonsDen_Cavern_Text_ClairTrigger, MSGBOX_DEFAULT
	releaseall
	end

DragonsDen_Cavern_Trigger_ClairRight::
	lockall
	msgbox DragonsDen_Cavern_Text_ClairTrigger, MSGBOX_DEFAULT
	releaseall
	end

DragonsDen_EventScript_ClairRematch::
	msgbox DragonsDen_Text_ClairRematch, MSGBOX_NPC
	end

EventScript_Whirlpool::
	msgbox Text_Whirlpool, MSGBOX_NPC
	end


DragonsDen_Cavern_Text_Cara:
	.string "...$"

DragonsDen_Cavern_Text_Darin:
	.string "...$"

DragonsDen_Cavern_Text_Item_PP_Max:
	.string "...$"

DragonsDen_Cavern_Text_TwinLea:
	.string "My sibling and I both love\nPOKeMON!$"

DragonsDen_Cavern_Text_TwinPia:
	.string "My sibling and I both love\nPOKeMON!$"

DragonsDen_Text_ClairRematch:
	.string "...$"

Text_Whirlpool:
	.string "...$"

DragonsDen_Cavern_Text_ClairTrigger:
	.string "CLAIR: ...Fine. You beat me.\n"
	.string "But I'm not giving you the\l"
	.string "BADGE just yet.\p"
	.string "Go to the DRAGON SHRINE and\n"
	.string "prove yourself to the ELDER.\p"
	.string "...I'll be watching.$"

