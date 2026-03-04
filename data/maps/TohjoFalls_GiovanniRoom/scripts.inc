TohjoFalls_GiovanniRoom_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

TohjoFalls_EventScript_GiovanniScene::
	return

TohjoFalls_EventScript_GiovanniSceneLeft::
	return

TohjoFalls_EventScript_GiovanniSceneRight::
	return

TohjoFalls_GiovanniRoom_EventScript_Radio::
	msgbox TohjoFalls_GiovanniRoom_Text_Radio, MSGBOX_NPC
	end


TohjoFalls_GiovanniRoom_Text_Radio:
	.string "...$"
