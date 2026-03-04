MtSilver_SummitDay_MapScripts::
	.byte 0

MtSilver_SummitDay_EventScript_Red::
	lock
	faceplayer
	msgbox MtSilver_Text_SilverAppears
	trainerbattle_no_intro TRAINER_JOHTO_SILVER_5, MtSilver_Text_SilverDefeat5
	msgbox MtSilver_Text_SilverPostBattle5
	release
	end

MtSilver_Text_SilverAppears:
	.string "SILVER: …{PLAYER}.\p"
	.string "I knew you'd make it here.\p"
	.string "MT. SILVER… The strongest\n"
	.string "TRAINERS in the world come\l"
	.string "here to train.\p"
	.string "I've been training here ever\n"
	.string "since the RADIO TOWER.\p"
	.string "I've learned what it truly\n"
	.string "means to be strong.\p"
	.string "This time, I won't lose.\n"
	.string "Let's battle!$"

MtSilver_Text_SilverDefeat5:
	.string "…I lost again.\n"
	.string "But this time, it's different.$"

MtSilver_Text_SilverPostBattle5:
	.string "SILVER: …Thank you, {PLAYER}.\p"
	.string "I finally understand.\n"
	.string "The reason you're strong…\p"
	.string "It's because you truly care\n"
	.string "about your POKéMON.\p"
	.string "I'll keep training. And one day,\n"
	.string "I'll surpass you.\p"
	.string "…Until then, take care of\n"
	.string "yourself.$"

