SlowpokeWell_B1F_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

SlowpokeWell_B1F_EventScript_Eto::
	msgbox SlowpokeWell_B1F_Text_Eto, MSGBOX_NPC
	end

SlowpokeWell_B1F_EventScript_Grunt21::
	msgbox SlowpokeWell_B1F_Text_Grunt21, MSGBOX_NPC
	end

SlowpokeWell_B1F_EventScript_Grunt22F::
	msgbox SlowpokeWell_B1F_Text_Grunt22F, MSGBOX_NPC
	end

SlowpokeWell_B1F_EventScript_Item_Full_Heal::
	finditem ITEM_FULL_HEAL
	end

SlowpokeWell_B1F_EventScript_Item_Great_Ball::
	msgbox SlowpokeWell_B1F_Text_Item_Great_Ball, MSGBOX_NPC
	end

SlowpokeWell_B1F_EventScript_Item_Super_Potion_1::
	finditem ITEM_SUPER_POTION
	end

SlowpokeWell_B1F_EventScript_Item_Super_Potion_2::
	finditem ITEM_SUPER_POTION
	end

SlowpokeWell_B1F_EventScript_Kurt::
	msgbox SlowpokeWell_B1F_Text_Kurt, MSGBOX_NPC
	end

SlowpokeWell_B1F_EventScript_Proton::
	msgbox SlowpokeWell_B1F_Text_Proton, MSGBOX_NPC
	end

SlowpokeWell_B1F_Text_Kurt:
	.string "I'm KURT! I make POKe BALLS\n"
	.string "from APRICORNS.\pBring me some APRICORNS and\n"
	.string "I'll craft something special!$"


SlowpokeWell_B1F_Text_Eto:
	.string "...$"

SlowpokeWell_B1F_Text_Grunt21:
	.string "...$"

SlowpokeWell_B1F_Text_Grunt22F:
	.string "...$"

SlowpokeWell_B1F_Text_Item_Great_Ball:
	.string "...$"

SlowpokeWell_B1F_Text_Proton:
	.string "...$"
