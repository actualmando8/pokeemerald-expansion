RuinsOfAlph_PuzzleAndRewardChambers_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

RuinsOfAlph_EventScript_Item_Charcoal::
	finditem ITEM_CHARCOAL
	end

RuinsOfAlph_EventScript_Item_EnergyPowder::
	finditem ITEM_ENERGY_POWDER
	end

RuinsOfAlph_EventScript_Item_EnergyRoot::
	finditem ITEM_ENERGY_ROOT
	end

RuinsOfAlph_EventScript_Item_HealPowder1::
	finditem ITEM_HEAL_POWDER
	end

RuinsOfAlph_EventScript_Item_HealPowder2::
	finditem ITEM_HEAL_POWDER
	end

RuinsOfAlph_EventScript_Item_LumBerry1::
	finditem ITEM_LUM_BERRY
	end

RuinsOfAlph_EventScript_Item_LumBerry2::
	finditem ITEM_LUM_BERRY
	end

RuinsOfAlph_EventScript_Item_MaxRevive1::
	finditem ITEM_MAX_REVIVE
	end

RuinsOfAlph_EventScript_Item_MoonStone::
	finditem ITEM_MOON_STONE
	end

RuinsOfAlph_EventScript_Item_OranBerry::
	finditem ITEM_ORAN_BERRY
	end

RuinsOfAlph_EventScript_Item_PechaBerry::
	finditem ITEM_PECHA_BERRY
	end

RuinsOfAlph_EventScript_Item_SacredAsh::
	finditem ITEM_SACRED_ASH
	end

RuinsOfAlph_EventScript_Item_SitrusBerry2::
	finditem ITEM_SITRUS_BERRY
	end

RuinsOfAlph_EventScript_Item_StarPiece::
	finditem ITEM_STAR_PIECE
	end

RuinsOfAlph_EventScript_Item_Stardust::
	finditem ITEM_STARDUST
	end

RuinsOfAlph_EventScript_Item_WaterStone::
	finditem ITEM_WATER_STONE
	end

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_AerodactylPuzzle::
	msgbox RuinsOfAlph_Puzzle_Text_AerodactylPuzzle, MSGBOX_SIGN
	end

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_CheckAerodactyl::
	msgbox RuinsOfAlph_Puzzle_Text_CheckAerodactyl, MSGBOX_SIGN
	end

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_CheckHooh::
	msgbox RuinsOfAlph_Puzzle_Text_CheckHooh, MSGBOX_SIGN
	end

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_CheckKabuto::
	msgbox RuinsOfAlph_Puzzle_Text_CheckKabuto, MSGBOX_SIGN
	end

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_CheckOmanyte::
	msgbox RuinsOfAlph_Puzzle_Text_CheckOmanyte, MSGBOX_SIGN
	end

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_HooHPuzzle::
	msgbox RuinsOfAlph_Puzzle_Text_HooHPuzzle, MSGBOX_SIGN
	end

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_KabutoPuzzle::
	msgbox RuinsOfAlph_Puzzle_Text_KabutoPuzzle, MSGBOX_SIGN
	end

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_OmanytePuzzle::
	msgbox RuinsOfAlph_Puzzle_Text_OmanytePuzzle, MSGBOX_SIGN
	end

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_Receptionist::
	msgbox RuinsOfAlph_Puzzle_Text_Receptionist, MSGBOX_NPC
	end

RuinsOfAlph_PuzzleAndRewardChambers_MapScript_AerodactylDescription::
	msgbox RuinsOfAlph_Puzzle_Text_AerodactylDesc, MSGBOX_SIGN
	end

RuinsOfAlph_PuzzleAndRewardChambers_MapScript_HoohDescription::
	msgbox RuinsOfAlph_Puzzle_Text_HoohDesc, MSGBOX_SIGN
	end

RuinsOfAlph_PuzzleAndRewardChambers_MapScript_KabutoDescripton::
	msgbox RuinsOfAlph_Puzzle_Text_KabutoDesc, MSGBOX_SIGN
	end

RuinsOfAlph_PuzzleAndRewardChambers_MapScript_OmanyteDescription::
	msgbox RuinsOfAlph_Puzzle_Text_OmanyteDesc, MSGBOX_SIGN
	end

RuinsOfAlph_Puzzle_Text_Receptionist:
	.string "Welcome to the PUZZLE\n"
	.string "CHAMBERS.\p"
	.string "Solve the tile puzzles to\n"
	.string "discover the UNOWN that\l"
	.string "dwell within!$"

RuinsOfAlph_Puzzle_Text_AerodactylPuzzle:
	.string "A tile puzzle depicting an\n"
	.string "ancient POKeMON.\p"
	.string "Slide the tiles to complete\n"
	.string "the image...$"

RuinsOfAlph_Puzzle_Text_HooHPuzzle:
	.string "A tile puzzle depicting an\n"
	.string "ancient POKeMON.\p"
	.string "Slide the tiles to complete\n"
	.string "the image...$"

RuinsOfAlph_Puzzle_Text_KabutoPuzzle:
	.string "A tile puzzle depicting an\n"
	.string "ancient POKeMON.\p"
	.string "Slide the tiles to complete\n"
	.string "the image...$"

RuinsOfAlph_Puzzle_Text_OmanytePuzzle:
	.string "A tile puzzle depicting an\n"
	.string "ancient POKeMON.\p"
	.string "Slide the tiles to complete\n"
	.string "the image...$"

RuinsOfAlph_Puzzle_Text_CheckAerodactyl:
	.string "The completed puzzle depicts\n"
	.string "AERODACTYL.\p"
	.string "A passage opens in the\n"
	.string "floor below!$"

RuinsOfAlph_Puzzle_Text_CheckHooh:
	.string "The completed puzzle depicts\n"
	.string "HO-OH.\p"
	.string "A passage opens in the\n"
	.string "floor below!$"

RuinsOfAlph_Puzzle_Text_CheckKabuto:
	.string "The completed puzzle depicts\n"
	.string "KABUTO.\p"
	.string "A passage opens in the\n"
	.string "floor below!$"

RuinsOfAlph_Puzzle_Text_CheckOmanyte:
	.string "The completed puzzle depicts\n"
	.string "OMANYTE.\p"
	.string "A passage opens in the\n"
	.string "floor below!$"

RuinsOfAlph_Puzzle_Text_AerodactylDesc:
	.string "This chamber's puzzle depicts\n"
	.string "AERODACTYL, the ancient\n"
	.string "flying POKeMON.$"

RuinsOfAlph_Puzzle_Text_HoohDesc:
	.string "This chamber's puzzle depicts\n"
	.string "HO-OH, the legendary\n"
	.string "rainbow POKeMON.$"

RuinsOfAlph_Puzzle_Text_KabutoDesc:
	.string "This chamber's puzzle depicts\n"
	.string "KABUTO, an ancient\n"
	.string "shellfish POKeMON.$"

RuinsOfAlph_Puzzle_Text_OmanyteDesc:
	.string "This chamber's puzzle depicts\n"
	.string "OMANYTE, an ancient\n"
	.string "spiral POKeMON.$"

