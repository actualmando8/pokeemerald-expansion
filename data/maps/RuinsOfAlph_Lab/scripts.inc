RuinsOfAlph_Lab_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

RuinsOfAlph_Lab_EventScript_FossilScientist::
	msgbox RuinsOfAlph_Lab_Text_FossilScientist, MSGBOX_NPC
	end

RuinsOfAlph_Lab_EventScript_Fossils::
	msgbox RuinsOfAlph_Lab_Text_Fossils, MSGBOX_SIGN
	end

RuinsOfAlph_Lab_EventScript_Scientist1::
	msgbox RuinsOfAlph_Lab_Text_Scientist1, MSGBOX_NPC
	end

RuinsOfAlph_Lab_EventScript_Scientist2::
	msgbox RuinsOfAlph_Lab_Text_Scientist2, MSGBOX_NPC
	end

RuinsOfAlph_Lab_Text_FossilScientist:
	.string "We've found fossils deep in\n"
	.string "the ruins!\p"
	.string "They suggest POKeMON lived\n"
	.string "here thousands of years ago.$"

RuinsOfAlph_Lab_Text_Fossils:
	.string "Various fossils are displayed\n"
	.string "in glass cases.\p"
	.string "Ancient POKeMON bones and\n"
	.string "stone tablets line the wall.$"

RuinsOfAlph_Lab_Text_Scientist1:
	.string "The UNOWN seem to react to\n"
	.string "the puzzle chambers.\p"
	.string "Solving a puzzle opens a\n"
	.string "new passage below.$"

RuinsOfAlph_Lab_Text_Scientist2:
	.string "We've catalogued 26 different\n"
	.string "shapes of UNOWN so far.\p"
	.string "Each one resembles a letter\n"
	.string "of the alphabet!$"

