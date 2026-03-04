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
	return

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_CheckAerodactyl::
	return

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_CheckHooh::
	return

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_CheckKabuto::
	return

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_CheckOmanyte::
	return

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_HooHPuzzle::
	return

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_KabutoPuzzle::
	return

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_OmanytePuzzle::
	return

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_Receptionist::
	msgbox RuinsOfAlph_Puzzle_Text_Receptionist, MSGBOX_NPC
	end

RuinsOfAlph_PuzzleAndRewardChambers_MapScript_AerodactylDescription::
	return

RuinsOfAlph_PuzzleAndRewardChambers_MapScript_HoohDescription::
	return

RuinsOfAlph_PuzzleAndRewardChambers_MapScript_KabutoDescripton::
	return

RuinsOfAlph_PuzzleAndRewardChambers_MapScript_OmanyteDescription::
	return

RuinsOfAlph_Puzzle_Text_Receptionist:
	.string "Welcome to the PUZZLE\n"
	.string "CHAMBERS.\p"
	.string "Solve the tile puzzles to\n"
	.string "discover the UNOWN that\l"
	.string "dwell within!$"

