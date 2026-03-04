MtMortar_1F_North_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

MtMortar_1F_North_EventScript_Item_EscapeRope::
	finditem ITEM_ESCAPE_ROPE
	end

MtMortar_1F_North_EventScript_Item_FullIncense::
	msgbox MtMortar_1F_North_Text_Item_FullIncense, MSGBOX_NPC
	end

MtMortar_1F_North_EventScript_Item_KingsRock::
	msgbox MtMortar_1F_North_Text_Item_KingsRock, MSGBOX_NPC
	end

MtMortar_1F_North_EventScript_Item_MaxPotion::
	finditem ITEM_MAX_POTION
	end

MtMortar_1F_North_EventScript_Item_MaxRepel::
	finditem ITEM_REPEL
	end

MtMortar_1F_North_EventScript_Item_Nugget::
	finditem ITEM_NUGGET
	end

MtMortar_1F_North_EventScript_Item_UltraBall::
	finditem ITEM_ULTRA_BALL
	end

MtMortar_1F_North_EventScript_Markus::
	msgbox MtMortar_1F_North_Text_Markus, MSGBOX_NPC
	end

MtMortar_1F_North_EventScript_Miller::
	msgbox MtMortar_1F_North_Text_Miller, MSGBOX_NPC
	end


MtMortar_1F_North_Text_Item_FullIncense:
	.string "...$"

MtMortar_1F_North_Text_Item_KingsRock:
	.string "...$"

MtMortar_1F_North_Text_Markus:
	.string "...$"

MtMortar_1F_North_Text_Miller:
	.string "...$"
