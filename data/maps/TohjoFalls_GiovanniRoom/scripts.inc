TohjoFalls_GiovanniRoom_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

TohjoFalls_EventScript_GiovanniScene::
	lockall
	msgbox TohjoFalls_Text_GiovanniScene, MSGBOX_DEFAULT
	releaseall
	end

TohjoFalls_EventScript_GiovanniSceneLeft::
	goto TohjoFalls_EventScript_GiovanniScene
	end

TohjoFalls_EventScript_GiovanniSceneRight::
	goto TohjoFalls_EventScript_GiovanniScene
	end

TohjoFalls_GiovanniRoom_EventScript_Radio::
	msgbox TohjoFalls_GiovanniRoom_Text_Radio, MSGBOX_NPC
	end


TohjoFalls_GiovanniRoom_Text_Radio:
	.string "...$"

TohjoFalls_Text_GiovanniScene:
	.string "The cave is silent except for\n"
	.string "the sound of falling water.\p"
	.string "A radio crackles in the\n"
	.string "corner of the chamber...\p"
	.string "We are TEAM ROCKET! We have\n"
	.string "taken over the GOLDENROD\l"
	.string "RADIO TOWER!\p"
	.string "The voice of GIOVANNI echoes\n"
	.string "faintly in the chamber...\p"
	.string "But there is no one here.\n"
	.string "Only the sound of water.$"

