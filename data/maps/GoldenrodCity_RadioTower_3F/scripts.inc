GoldenrodCity_RadioTower_3F_MapScripts::
	.byte 0

GoldenrodCity_RadioTower_3F_EventScript_Cooltrainer::
	lock
	faceplayer
	msgbox RadioTower3F_Text_SilverAppears
	trainerbattle_no_intro TRAINER_JOHTO_SILVER_3, RadioTower3F_Text_SilverDefeat3
	msgbox RadioTower3F_Text_SilverPostBattle3
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_Gate::
	msgbox GoldenrodCity_RadioTower_3F_Text_Gate, MSGBOX_NPC
	end

GoldenrodCity_RadioTower_3F_EventScript_Nerd::
	msgbox RadioTower3F_Text_NerdHint, MSGBOX_NPC
	end

GoldenrodCity_RadioTower_3F_EventScript_Sign1::
	msgbox RadioTower3F_Text_Sign1, MSGBOX_SIGN
	end

GoldenrodCity_RadioTower_3F_EventScript_Sign2::
	msgbox RadioTower3F_Text_Sign2, MSGBOX_SIGN
	end

GoldenrodRaidoTower3_EventScript_Grunt6::
	msgbox GoldenrodRaidoTower3_Text_Grunt6, MSGBOX_NPC
	end

GoldenrodRaidoTower3_EventScript_Grunt7::
	msgbox GoldenrodRaidoTower3_Text_Grunt7, MSGBOX_NPC
	end

GoldenrodRaidoTower3_EventScript_Grunt8::
	msgbox GoldenrodRaidoTower3_Text_Grunt8, MSGBOX_NPC
	end

GoldenrodRaidoTower3_EventScript_Scientist::
	msgbox GoldenrodRaidoTower3_Text_Scientist, MSGBOX_NPC
	end

RadioTower3F_Text_SilverAppears:
	.string "SILVER: …So you're here too.\p"
	.string "These ROCKET fools are an\n"
	.string "embarrassment.\p"
	.string "But before I deal with them,\n"
	.string "I want to see how strong\l"
	.string "you've really become!$"

RadioTower3F_Text_SilverDefeat3:
	.string "…You're as strong as ever.\n"
	.string "Maybe even stronger.$"

RadioTower3F_Text_SilverPostBattle3:
	.string "SILVER: …Fine.\n"
	.string "You handle the upper floors.\p"
	.string "I'll clean up the grunts\n"
	.string "down here.\p"
	.string "…Don't lose to GIOVANNI.$"

RadioTower3F_Text_NerdHint:
	.string "TEAM ROCKET has taken over\n"
	.string "the entire RADIO TOWER!\p"
	.string "Please, you have to stop them!$"

RadioTower3F_Text_Sign1:
	.string "RADIO TOWER 3F\n"
	.string "Production Studios$"

RadioTower3F_Text_Sign2:
	.string "Staff Only Beyond This Point$"

GoldenrodRaidoTower3_Text_Scientist:
	.string "My research is almost complete.\n"
	.string "POKeMON never cease to amaze\lme!$"


GoldenrodCity_RadioTower_3F_Text_Gate:
	.string "...$"

GoldenrodRaidoTower3_Text_Grunt6:
	.string "...$"

GoldenrodRaidoTower3_Text_Grunt7:
	.string "...$"

GoldenrodRaidoTower3_Text_Grunt8:
	.string "...$"
