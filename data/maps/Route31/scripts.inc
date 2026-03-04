Route31_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

Route31_EventScript_Boy::
	msgbox Route31_Text_Boy, MSGBOX_NPC
	end

Route31_EventScript_Bugcatcher_Wade::
	msgbox Route31_Text_Bugcatcher_Wade, MSGBOX_NPC
	end

Route31_EventScript_DarkCaveSign::
	msgbox Route31_Text_DarkCaveSign, MSGBOX_SIGN
	end

Route31_EventScript_ItemAntidote::
	finditem ITEM_ANTIDOTE
	end

Route31_EventScript_ItemPokeBall::
	msgbox Route31_Text_ItemPokeBall, MSGBOX_NPC
	end

Route31_EventScript_Sign::
	msgbox Route31_Text_Sign, MSGBOX_SIGN
	end

Route31_EventScript_SleepyMan::
	msgbox Route31_Text_SleepyMan, MSGBOX_NPC
	end

Route31_EventScript_Youngster::
	msgbox Route31_Text_Youngster, MSGBOX_NPC
	end

Route31_Text_Boy:
	.string "Did you know there are POKeMON\n"
	.string "you can only find at night?$"

Route31_Text_Youngster:
	.string "I want to catch every kind of\n"
	.string "POKeMON in JOHTO!$"


Route31_Text_Bugcatcher_Wade:
	.string "BUG POKeMON are the best!\nI love catching them!$"

Route31_Text_DarkCaveSign:
	.string "Route31$"

Route31_Text_ItemPokeBall:
	.string "...$"

Route31_Text_Sign:
	.string "Route31$"

Route31_Text_SleepyMan:
	.string "This is a nice place.\nThe people here are friendly.$"
