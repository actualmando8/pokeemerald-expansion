DarkCave_NorthSide_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

DarkCave2_EventScript_BlackGlasses::
	msgbox DarkCave2_Text_BlackGlasses, MSGBOX_NPC
	end

DarkCave2_EventScript_Item_BlackFlute::
	msgbox DarkCave2_Text_Item_BlackFlute, MSGBOX_NPC
	end

DarkCave2_EventScript_Item_StarPiece::
	finditem ITEM_STAR_PIECE
	end


DarkCave2_Text_BlackGlasses:
	.string "I love this area! It is so\npeaceful here.$"

DarkCave2_Text_Item_BlackFlute:
	.string "...$"
