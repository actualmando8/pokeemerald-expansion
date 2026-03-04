GoldenrodCity_TrainStation_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

GoldenrodCity_TrainStation_EventScript_Attendant::
	msgbox GoldenrodCity_TrainStation_Text_Attendant, MSGBOX_NPC
	end

GoldenrodCity_TrainStation_EventScript_Boy::
	msgbox GoldenrodCity_TrainStation_Text_Boy, MSGBOX_NPC
	end

GoldenrodCity_TrainStation_EventScript_Gent::
	msgbox GoldenrodCity_TrainStation_Text_Gent, MSGBOX_NPC
	end

GoldenrodCity_TrainStation_EventScript_Psychic::
	msgbox GoldenrodCity_TrainStation_Text_Psychic, MSGBOX_NPC
	end

GoldenrodCity_TrainStation_Text_Boy:
	.string "Did you know there are POKeMON\n"
	.string "you can only find at night?$"


GoldenrodCity_TrainStation_Text_Attendant:
	.string "Welcome! Please let me know\nif you need assistance.$"

GoldenrodCity_TrainStation_Text_Gent:
	.string "...$"

GoldenrodCity_TrainStation_Text_Psychic:
	.string "...$"
