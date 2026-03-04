WhirlIslands_B1F_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

WhirlIslands_B1F_EventScript_Item_Big_Nugget::
	finditem ITEM_NUGGET
	end

WhirlIslands_B1F_EventScript_Item_Calcium::
	finditem ITEM_CALCIUM
	end

WhirlIslands_B1F_EventScript_Item_Carbos::
	finditem ITEM_CARBOS
	end

WhirlIslands_B1F_EventScript_Item_Escape_Rope::
	finditem ITEM_ESCAPE_ROPE
	end

WhirlIslands_B1F_EventScript_Item_Full_Restore::
	finditem ITEM_FULL_RESTORE
	end

WhirlIslands_B1F_Trigger_Rain::
	lockall
	msgbox WhirlIslands_B1F_Text_Rain, MSGBOX_DEFAULT
	releaseall
	end

WhirlIslands_B1F_Trigger_Shade::
	lockall
	msgbox WhirlIslands_B1F_Text_Shade, MSGBOX_DEFAULT
	releaseall
	end

WhirlIslands_B1F_Trigger_Sunlight::
	lockall
	msgbox WhirlIslands_B1F_Text_Sunlight, MSGBOX_DEFAULT
	releaseall
	end

WhirlIslands_B1F_Text_Rain:
	.string "Drops of water fall from the\n"
	.string "cave ceiling...\p"
	.string "The air grows heavy with\n"
	.string "moisture.$"

WhirlIslands_B1F_Text_Shade:
	.string "A deep shadow falls over the\n"
	.string "passage ahead...\p"
	.string "Something powerful stirs\n"
	.string "in the depths below...$"

WhirlIslands_B1F_Text_Sunlight:
	.string "A shaft of light pierces\n"
	.string "through a crack above.\p"
	.string "The water below sparkles\n"
	.string "with an ethereal glow...$"

