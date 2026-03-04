Route39_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

OlivineCity_EventScript_CityTrigger::
	return

Route39_EventScript_Derek::
	msgbox Route39_Text_Derek, MSGBOX_NPC
	end

Route39_EventScript_Eugene::
	msgbox Route39_Text_Eugene, MSGBOX_NPC
	end

Route39_EventScript_Item_Nugget::
	finditem ITEM_NUGGET
	end

Route39_EventScript_Item_TM::
	msgbox Route39_Text_Item_TM, MSGBOX_NPC
	end

Route39_EventScript_Jamie::
	msgbox Route39_Text_Jamie, MSGBOX_NPC
	end

Route39_EventScript_LegendaryTrigger::
	return

Route39_EventScript_Miltank::
	lock
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
	msgbox Route39_Text_Miltank, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route39_EventScript_Norman::
	msgbox Route39_Text_Norman, MSGBOX_NPC
	end

Route39_EventScript_Ruth::
	msgbox Route39_Text_Ruth, MSGBOX_NPC
	end

Route39_EventScript_Sign1::
	msgbox Route39_Text_Sign1, MSGBOX_SIGN
	end

Route39_EventScript_Sign2::
	msgbox Route39_Text_Sign2, MSGBOX_SIGN
	end

Route39_EventScript_Sign3::
	msgbox Route39_Text_Sign3, MSGBOX_SIGN
	end

Route39_EventScript_Woman::
	msgbox Route39_Text_Woman, MSGBOX_NPC
	end

Route39_Text_Woman:
	.string "Be sure to stock up on supplies\n"
	.string "before heading out on your\ljourney!$"


Route39_Text_Derek:
	.string "...$"

Route39_Text_Eugene:
	.string "...$"

Route39_Text_Item_TM:
	.string "...$"

Route39_Text_Jamie:
	.string "...$"

Route39_Text_Miltank:
	.string "MILTANK is mooing contentedly.$"

Route39_Text_Norman:
	.string "This is a nice place.\nThe people here are friendly.$"

Route39_Text_Ruth:
	.string "...$"

Route39_Text_Sign1:
	.string "Route39$"

Route39_Text_Sign2:
	.string "Route39$"

Route39_Text_Sign3:
	.string "Route39$"
