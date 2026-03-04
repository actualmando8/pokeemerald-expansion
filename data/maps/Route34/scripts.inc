Route34_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

GoldenrodCity_EventScript_Trigger::
	lockall
	msgbox Route34_Text_GoldenrodAhead, MSGBOX_DEFAULT
	releaseall
	end

Route34_EventScript_CamperTodd::
	msgbox Route34_Text_CamperTodd, MSGBOX_NPC
	end

Route34_EventScript_DaycareMan::
	msgbox Route34_Text_DaycareMan, MSGBOX_NPC
	end

Route34_EventScript_Irene::
	msgbox Route34_Text_Irene, MSGBOX_NPC
	end

Route34_EventScript_Item_RareCandy::
	finditem ITEM_RARE_CANDY
	end

Route34_EventScript_Item_SoftSand::
	msgbox Route34_Text_Item_SoftSand, MSGBOX_NPC
	end

Route34_EventScript_Item_SuperPotion::
	finditem ITEM_SUPER_POTION
	end

Route34_EventScript_Jenn::
	msgbox Route34_Text_Jenn, MSGBOX_NPC
	end

Route34_EventScript_Kate::
	msgbox Route34_Text_Kate, MSGBOX_NPC
	end

Route34_EventScript_OfficerKeith::
	msgbox Route34_Text_OfficerKeith, MSGBOX_NPC
	end

Route34_EventScript_PicnickerGina::
	msgbox Route34_Text_PicnickerGina, MSGBOX_NPC
	end

Route34_EventScript_PokefanMBrandon::
	msgbox Route34_Text_PokefanMBrandon, MSGBOX_NPC
	end

Route34_EventScript_Sign1::
	msgbox Route34_Text_Sign1, MSGBOX_SIGN
	end

Route34_EventScript_Sign2::
	msgbox Route34_Text_Sign2, MSGBOX_SIGN
	end

Route34_EventScript_Sign3::
	msgbox Route34_Text_Sign3, MSGBOX_SIGN
	end

Route34_EventScript_YoungsterIan::
	msgbox Route34_Text_YoungsterIan, MSGBOX_NPC
	end

Route34_EventScript_YoungsterSamuel::
	msgbox Route34_Text_YoungsterSamuel, MSGBOX_NPC
	end


Route34_Text_CamperTodd:
	.string "Nothing beats camping under\nthe stars with POKeMON!$"

Route34_Text_DaycareMan:
	.string "This is a nice place.\nThe people here are friendly.$"

Route34_Text_Irene:
	.string "...$"

Route34_Text_Item_SoftSand:
	.string "...$"

Route34_Text_Jenn:
	.string "...$"

Route34_Text_Kate:
	.string "...$"

Route34_Text_OfficerKeith:
	.string "...$"

Route34_Text_PicnickerGina:
	.string "I love having lunch with\nmy POKeMON outdoors!$"

Route34_Text_PokefanMBrandon:
	.string "My POKeMON is the cutest!\nDo you not agree?$"

Route34_Text_Sign1:
	.string "Route34$"

Route34_Text_Sign2:
	.string "Route34$"

Route34_Text_Sign3:
	.string "Route34$"

Route34_Text_YoungsterIan:
	.string "I want to be the best TRAINER\nin all of JOHTO!$"

Route34_Text_YoungsterSamuel:
	.string "I want to be the best TRAINER\nin all of JOHTO!$"

Route34_Text_GoldenrodAhead:
	.string "The towering buildings of\n"
	.string "GOLDENROD CITY are visible\l"
	.string "in the distance...$"

