Route32_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

Route32_EventScript_BaldingMan::
	msgbox Route32_Text_BaldingMan, MSGBOX_NPC
	end

Route32_EventScript_BaldingManTriggerLeft::
	return

Route32_EventScript_BaldingManTriggerMid::
	return

Route32_EventScript_BaldingManTriggerRight::
	return

Route32_EventScript_BirdkeeperPeter::
	msgbox Route32_Text_BirdkeeperPeter, MSGBOX_NPC
	end

Route32_EventScript_CamperRoland::
	msgbox Route32_Text_CamperRoland, MSGBOX_NPC
	end

Route32_EventScript_FisherHenry::
	msgbox Route32_Text_FisherHenry, MSGBOX_NPC
	end

Route32_EventScript_FisherJustin::
	msgbox Route32_Text_FisherJustin, MSGBOX_NPC
	end

Route32_EventScript_FisherRalph::
	msgbox Route32_Text_FisherRalph, MSGBOX_NPC
	end

Route32_EventScript_Frieda::
	msgbox Route32_Text_Frieda, MSGBOX_NPC
	end

Route32_EventScript_GreatBall::
	msgbox Route32_Text_GreatBall, MSGBOX_NPC
	end

Route32_EventScript_GreatBallII::
	msgbox Route32_Text_GreatBallII, MSGBOX_NPC
	end

Route32_EventScript_PicnickerLiz::
	msgbox Route32_Text_PicnickerLiz, MSGBOX_NPC
	end

Route32_EventScript_Potion::
	msgbox Route32_Text_Potion, MSGBOX_NPC
	end

Route32_EventScript_Roar::
	msgbox Route32_Text_Roar, MSGBOX_NPC
	end

Route32_EventScript_Sign1::
	msgbox Route32_Text_Sign1, MSGBOX_SIGN
	end

Route32_EventScript_Sign2::
	msgbox Route32_Text_Sign2, MSGBOX_SIGN
	end

Route32_EventScript_Sign3::
	msgbox Route32_Text_Sign3, MSGBOX_SIGN
	end

Route32_EventScript_SlowpokeTail::
	lock
	playmoncry SPECIES_SLOWPOKE, CRY_MODE_NORMAL
	msgbox Route32_Text_SlowpokeTail, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route32_EventScript_SlowpokeTail_TriggerLeft::
	return

Route32_EventScript_SlowpokeTail_TriggerMid::
	return

Route32_EventScript_SlowpokeTail_TriggerRight::
	return

Route32_EventScript_SuperPotion::
	msgbox Route32_Text_SuperPotion, MSGBOX_NPC
	end

Route32_EventScript_YoungsterAlbert::
	msgbox Route32_Text_YoungsterAlbert, MSGBOX_NPC
	end

Route32_EventScript_YoungsterGordon::
	msgbox Route32_Text_YoungsterGordon, MSGBOX_NPC
	end

VioletCity_EventScript_LiquidJustice::
	msgbox VioletCity_Text_LiquidJustice, MSGBOX_NPC
	end

Route32_Text_BaldingMan:
	.string "When I was young, I traveled\n"
	.string "across JOHTO with my POKeMON.\pThose were the days...$"


Route32_Text_BirdkeeperPeter:
	.string "My bird POKeMON soar through\nthe skies!$"

Route32_Text_CamperRoland:
	.string "Nothing beats camping under\nthe stars with POKeMON!$"

Route32_Text_FisherHenry:
	.string "Fishing is the best hobby!\nYou just need patience!$"

Route32_Text_FisherJustin:
	.string "Fishing is the best hobby!\nYou just need patience!$"

Route32_Text_FisherRalph:
	.string "Fishing is the best hobby!\nYou just need patience!$"

Route32_Text_Frieda:
	.string "...$"

Route32_Text_GreatBall:
	.string "...$"

Route32_Text_GreatBallII:
	.string "...$"

Route32_Text_PicnickerLiz:
	.string "I love having lunch with\nmy POKeMON outdoors!$"

Route32_Text_Potion:
	.string "...$"

Route32_Text_Roar:
	.string "...$"

Route32_Text_Sign1:
	.string "Route32$"

Route32_Text_Sign2:
	.string "Route32$"

Route32_Text_Sign3:
	.string "Route32$"

Route32_Text_SlowpokeTail:
	.string "SLOWPOKE is staring blankly.\n... ... ... ...$"

Route32_Text_SuperPotion:
	.string "...$"

Route32_Text_YoungsterAlbert:
	.string "I want to be the best TRAINER\nin all of JOHTO!$"

Route32_Text_YoungsterGordon:
	.string "I want to be the best TRAINER\nin all of JOHTO!$"

VioletCity_Text_LiquidJustice:
	.string "...$"
