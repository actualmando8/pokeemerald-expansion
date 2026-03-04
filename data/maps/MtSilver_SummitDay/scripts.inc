MtSilver_SummitDay_MapScripts::
	.byte 0

MtSilver_SummitDay_EventScript_Red::
	lock
	faceplayer
	msgbox MtSilver_Text_RedAppears
	trainerbattle_no_intro TRAINER_JOHTO_RED, MtSilver_Text_RedDefeat
	msgbox MtSilver_Text_RedPostBattle
	release
	end

MtSilver_Text_RedAppears:
	.string "…\p"
	.string "A young man stands silently\n"
	.string "at the summit.\p"
	.string "His cap is pulled low, but\n"
	.string "his eyes burn with intensity.\p"
	.string "Without a word, he reaches\n"
	.string "for a POKé BALL…$"

MtSilver_Text_RedDefeat:
	.string "…$"

MtSilver_Text_RedPostBattle:
	.string "…\p"
	.string "RED smiles faintly.\p"
	.string "He tips his cap to you,\n"
	.string "then turns and walks away\l"
	.string "into the falling snow.\p"
	.string "The strongest TRAINER in\n"
	.string "the world has acknowledged\l"
	.string "you as an equal.$"

