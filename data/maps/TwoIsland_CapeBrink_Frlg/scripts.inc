TwoIsland_CapeBrink_Frlg_MapScripts::
	.byte 0

TwoIsland_CapeBrink_EventScript_Noland::
	trainerbattle_single TRAINER_SEVII_NOLAND, TwoIsland_CapeBrink_Text_NolandIntro, TwoIsland_CapeBrink_Text_NolandDefeat, TwoIsland_CapeBrink_EventScript_NolandDefeated
	msgbox TwoIsland_CapeBrink_Text_NolandPostBattle, MSGBOX_AUTOCLOSE
	end

TwoIsland_CapeBrink_EventScript_NolandDefeated::
	setflag FLAG_DEFEATED_SEVII_NOLAND
	msgbox TwoIsland_CapeBrink_Text_NolandDefeat, MSGBOX_DEFAULT
	release
	end

TwoIsland_CapeBrink_Text_NolandIntro::
	.string "The name's NOLAND!\n"
	.string "I'm the FACTORY HEAD!\p"
	.string "I came to CAPE BRINK to study the\n"
	.string "unique POKéMON of these islands.\p"
	.string "Let me test what I've learned\n"
	.string "against you!$"

TwoIsland_CapeBrink_Text_NolandDefeat::
	.string "Impressive! Your battle data is\n"
	.string "off the charts!\p"
	.string "I need to update my notes after\n"
	.string "a battle like that!$"

TwoIsland_CapeBrink_Text_NolandPostBattle::
	.string "The move tutor who lives here\n"
	.string "has incredible knowledge.\p"
	.string "Between the two of us, we could\n"
	.string "catalog every POKéMON technique!$"
