GoldenrodCity_UndergroundSwitches_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

GoldenrodCity_UndergroundSwitches_EventScript_Duncan::
	msgbox GoldenrodCity_UndergroundSwitches_Text_Duncan, MSGBOX_NPC
	end

GoldenrodCity_UndergroundSwitches_EventScript_Eddie::
	msgbox GoldenrodCity_UndergroundSwitches_Text_Eddie, MSGBOX_NPC
	end

GoldenrodCity_UndergroundSwitches_EventScript_Grunt10::
	msgbox GoldenrodCity_UndergroundSwitches_Text_Grunt10, MSGBOX_NPC
	end

GoldenrodCity_UndergroundSwitches_EventScript_Grunt11::
	msgbox GoldenrodCity_UndergroundSwitches_Text_Grunt11, MSGBOX_NPC
	end

GoldenrodCity_UndergroundSwitches_EventScript_Grunt20::
	msgbox GoldenrodCity_UndergroundSwitches_Text_Grunt20, MSGBOX_NPC
	end

GoldenrodCity_UndergroundSwitches_EventScript_Grunt27::
	msgbox GoldenrodCity_UndergroundSwitches_Text_Grunt27, MSGBOX_NPC
	end

GoldenrodCity_UndergroundSwitches_EventScript_Item_MaxPotion::
	finditem ITEM_MAX_POTION
	end

GoldenrodCity_UndergroundSwitches_EventScript_Item_Revive::
	finditem ITEM_REVIVE
	end

GoldenrodCity_UndergroundSwitches_EventScript_Item_SmokeBall::
	finditem ITEM_SMOKE_BALL
	end

GoldenrodCity_UndergroundSwitches_EventScript_Panel1::
	msgbox GoldenrodCity_UndergroundSwitches_Text_Panel1, MSGBOX_SIGN
	end

GoldenrodCity_UndergroundSwitches_EventScript_Panel2::
	msgbox GoldenrodCity_UndergroundSwitches_Text_Panel2, MSGBOX_SIGN
	end

GoldenrodCity_UndergroundSwitches_EventScript_Panel3::
	msgbox GoldenrodCity_UndergroundSwitches_Text_Panel3, MSGBOX_SIGN
	end

GoldenrodCity_UndergroundSwitches_EventScript_SilverTriggerBot::
	lockall
	msgbox GoldenrodCity_Underground_Text_Silver, MSGBOX_DEFAULT
	releaseall
	end

GoldenrodCity_UndergroundSwitches_EventScript_SilverTriggerTop::
	lockall
	msgbox GoldenrodCity_Underground_Text_Silver, MSGBOX_DEFAULT
	releaseall
	end


GoldenrodCity_UndergroundSwitches_Text_Duncan:
	.string "...$"

GoldenrodCity_UndergroundSwitches_Text_Eddie:
	.string "...$"

GoldenrodCity_UndergroundSwitches_Text_Grunt10:
	.string "...$"

GoldenrodCity_UndergroundSwitches_Text_Grunt11:
	.string "...$"

GoldenrodCity_UndergroundSwitches_Text_Grunt20:
	.string "...$"

GoldenrodCity_UndergroundSwitches_Text_Grunt27:
	.string "...$"

GoldenrodCity_UndergroundSwitches_Text_Panel1:
	.string "GoldenrodCity UndergroundSwitches$"

GoldenrodCity_UndergroundSwitches_Text_Panel2:
	.string "GoldenrodCity UndergroundSwitches$"

GoldenrodCity_UndergroundSwitches_Text_Panel3:
	.string "GoldenrodCity UndergroundSwitches$"

GoldenrodCity_Underground_Text_Silver:
	.string "SILVER: ...TEAM ROCKET is\n"
	.string "nothing but a bunch of\l"
	.string "cowards.\p"
	.string "They hide underground like\n"
	.string "the rats they are.\p"
	.string "I'll deal with them my own\n"
	.string "way. Don't slow me down.$"

