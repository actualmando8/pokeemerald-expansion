BurnedTower_1F_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

BurnedTower_1F_EventScript_Eusine::
	msgbox BurnedTower_1F_Text_Eusine, MSGBOX_NPC
	end

BurnedTower_1F_EventScript_Item_Ether::
	finditem ITEM_ETHER
	end

BurnedTower_1F_EventScript_Item_HpUp::
	finditem ITEM_HP_UP
	end

BurnedTower_1F_EventScript_Morty::
	msgbox BurnedTower_1F_Text_Morty, MSGBOX_NPC
	end

BurnedTower_1F_EventScript_Nard::
	msgbox BurnedTower_1F_Text_Nard, MSGBOX_NPC
	end

BurnedTower_1F_EventScript_Richardo::
	msgbox BurnedTower_1F_Text_Richardo, MSGBOX_NPC
	end

BurnedTower_1F_EventScript_Silver::
	lockall
	msgbox BurnedTower_1F_Text_Silver, MSGBOX_DEFAULT
	releaseall
	end

RuinsOfAlph_PuzzleAndRewardChambers_MapScript_StatueDescription::
	msgbox RuinsOfAlph_PuzzleAndRewardChambers_MapText_StatueDescription, MSGBOX_SIGN
	end


BurnedTower_1F_Text_Eusine:
	.string "...$"

BurnedTower_1F_Text_Morty:
	.string "...$"

BurnedTower_1F_Text_Nard:
	.string "...$"

BurnedTower_1F_Text_Richardo:
	.string "...$"

RuinsOfAlph_PuzzleAndRewardChambers_MapText_StatueDescription:
	.string "BurnedTower 1F$"

BurnedTower_1F_Text_Silver:
	.string "SILVER: ...The legendary\n"
	.string "POKeMON are said to rest\l"
	.string "below this tower.\p"
	.string "I'll prove I'm strong enough\n"
	.string "to face them. After I deal\l"
	.string "with you!\p"
	.string "...\p"
	.string "Hmph. You got lucky.\n"
	.string "Don't think this is over.$"

