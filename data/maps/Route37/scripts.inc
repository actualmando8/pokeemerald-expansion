Route37_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

EcruteakCity_EventScript_Trigger::
	lockall
	msgbox Route37_Text_EcruteakAhead, MSGBOX_DEFAULT
	releaseall
	end

Route37_EventScript_Greg::
	msgbox Route37_Text_Greg, MSGBOX_NPC
	end

Route37_EventScript_Sign::
	msgbox Route37_Text_Sign, MSGBOX_SIGN
	end

Route37_EventScript_Sunny::
	msgbox Route37_Text_Sunny, MSGBOX_NPC
	end

Route37_EventScript_TwinAnn::
	msgbox Route37_Text_TwinAnn, MSGBOX_NPC
	end

Route37_EventScript_TwinAnne::
	msgbox Route37_Text_TwinAnne, MSGBOX_NPC
	end


Route37_Text_Greg:
	.string "...$"

Route37_Text_Sign:
	.string "Route37$"

Route37_Text_Sunny:
	.string "...$"

Route37_Text_TwinAnn:
	.string "My sibling and I both love\nPOKeMON!$"

Route37_Text_TwinAnne:
	.string "My sibling and I both love\nPOKeMON!$"

Route37_Text_EcruteakAhead:
	.string "The ancient rooftops of\n"
	.string "ECRUTEAK CITY come into view.\p"
	.string "A faint aura of legend\n"
	.string "hangs over the city...$"

