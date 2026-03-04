GoldenrodCity_House1_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

GoldenrodCity_NameRatersHouse_EventScript_NameRater::
	msgbox GoldenrodCity_NameRatersHouse_Text_NameRater, MSGBOX_NPC
	end

GoldenrodCity_NameRatersHouse_EventScript_RenameRival::
	msgbox GoldenrodCity_NameRatersHouse_Text_RenameRival, MSGBOX_NPC
	end

GoldenrodCity_NameRatersHouse_EventScript_ToggleShinies::
	msgbox GoldenrodCity_NameRatersHouse_Text_ToggleShinies, MSGBOX_NPC
	end


GoldenrodCity_NameRatersHouse_Text_NameRater:
	.string "...$"

GoldenrodCity_NameRatersHouse_Text_RenameRival:
	.string "...$"

GoldenrodCity_NameRatersHouse_Text_ToggleShinies:
	.string "...$"
