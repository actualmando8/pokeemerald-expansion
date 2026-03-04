Gate_AzaleaTown_IlexForest_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

Gate_AzaleaTown_IlexForest_EventScript_Granny::
	msgbox Gate_AzaleaTown_IlexForest_Text_Granny, MSGBOX_NPC
	end

Gate_AzaleaTown_IlexForest_EventScript_Officer::
	msgbox Gate_AzaleaTown_IlexForest_Text_Officer, MSGBOX_NPC
	end


Gate_AzaleaTown_IlexForest_Text_Granny:
	.string "Would you like some tea, dear?\nYou look tired from traveling.$"

Gate_AzaleaTown_IlexForest_Text_Officer:
	.string "...$"
