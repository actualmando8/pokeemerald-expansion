GoldenrodCity_RadioTower_4F_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

GoldenrodCity_RadioTower_4F4_EventScript_Fisher::
	msgbox GoldenrodCity_RadioTower_4F4_Text_Fisher, MSGBOX_NPC
	end

GoldenrodCity_RadioTower_4F4_EventScript_Mary::
	msgbox GoldenrodCity_RadioTower_4F4_Text_Mary, MSGBOX_NPC
	end

GoldenrodCity_RadioTower_4F4_EventScript_Meowth::
	lock
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
	msgbox GoldenrodCity_RadioTower_4F4_Text_Meowth, MSGBOX_DEFAULT
	waitmoncry
	release
	end

GoldenrodCity_RadioTower_4F4_EventScript_Scientist::
	msgbox GoldenrodCity_RadioTower_4F4_Text_Scientist, MSGBOX_NPC
	end

GoldenrodCity_RadioTower_4F4_EventScript_Sign1::
	msgbox GoldenrodCity_RadioTower_4F4_Text_Sign1, MSGBOX_SIGN
	end

GoldenrodCity_RadioTower_4F4_EventScript_Sign2::
	msgbox GoldenrodCity_RadioTower_4F4_Text_Sign2, MSGBOX_SIGN
	end

GoldenrodCity_RadioTower_5F_EventScript_Trigger_NPCS::
	return

GoldenrodRaidoTower4_EventScript_Grunt28::
	msgbox GoldenrodRaidoTower4_Text_Grunt28, MSGBOX_NPC
	end

GoldenrodRaidoTower4_EventScript_Grunt9::
	msgbox GoldenrodRaidoTower4_Text_Grunt9, MSGBOX_NPC
	end

GoldenrodRaidoTower4_EventScript_Proton::
	msgbox GoldenrodRaidoTower4_Text_Proton, MSGBOX_NPC
	end

GoldenrodCity_RadioTower_4F4_Text_Fisher:
	.string "You can fish up all sorts of\n"
	.string "rare POKeMON in JOHTO's waters!\pYou just need patience!$"

GoldenrodCity_RadioTower_4F4_Text_Scientist:
	.string "My research is almost complete.\n"
	.string "POKeMON never cease to amaze\lme!$"


GoldenrodCity_RadioTower_4F4_Text_Mary:
	.string "...$"

GoldenrodCity_RadioTower_4F4_Text_Meowth:
	.string "MEOWTH is purring softly.$"

GoldenrodCity_RadioTower_4F4_Text_Sign1:
	.string "GoldenrodCity RadioTower 4F$"

GoldenrodCity_RadioTower_4F4_Text_Sign2:
	.string "GoldenrodCity RadioTower 4F$"

GoldenrodRaidoTower4_Text_Grunt28:
	.string "...$"

GoldenrodRaidoTower4_Text_Grunt9:
	.string "...$"

GoldenrodRaidoTower4_Text_Proton:
	.string "...$"
