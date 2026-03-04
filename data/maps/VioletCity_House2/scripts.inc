VioletCity_House2_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

VioletCity_House2_EventScript_Lass::
	msgbox VioletCity_House2_Text_Lass, MSGBOX_NPC
	end

VioletCity_House2_EventScript_Pidgey::
	lock
	playmoncry SPECIES_PIDGEY, CRY_MODE_NORMAL
	msgbox VioletCity_House2_Text_Pidgey, MSGBOX_DEFAULT
	waitmoncry
	release
	end

VioletCity_House2_EventScript_Teacher::
	msgbox VioletCity_House2_Text_Teacher, MSGBOX_NPC
	end

VioletCity_House2_Text_Pidgey:
	.string "PIDGEY is cooing softly.$"

VioletCity_House2_Text_Teacher:
	.string "SPROUT TOWER is just north\n"
	.string "of town. Monks train there\l"
	.string "with their BELLSPROUT.\p"
	.string "It's a sight to see!$"

VioletCity_House2_Text_Lass:
	.string "I love walking around town.\n"
	.string "The fresh air is wonderful!$"

