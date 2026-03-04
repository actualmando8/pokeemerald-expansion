RuinsOfAlph_B1F_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

RuinsOfAlph_B1F_EventScript_Gramps::
	msgbox RuinsOfAlph_B1F_Text_Gramps, MSGBOX_NPC
	end

RuinsOfAlph_B1F_EventScript_Hiker::
	msgbox RuinsOfAlph_B1F_Text_Hiker, MSGBOX_NPC
	end

RuinsOfAlph_B1F_EventScript_Teacher::
	msgbox RuinsOfAlph_B1F_Text_Teacher, MSGBOX_NPC
	end

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_DomeFossil::
	msgbox RuinsOfAlph_B1F_Text_DomeFossil, MSGBOX_SIGN
	end

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_GSBALL::
	msgbox RuinsOfAlph_B1F_Text_GSBALL, MSGBOX_SIGN
	end

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_HelixFossil::
	msgbox RuinsOfAlph_B1F_Text_HelixFossil, MSGBOX_SIGN
	end

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_OldAmber::
	msgbox RuinsOfAlph_B1F_Text_OldAmber, MSGBOX_SIGN
	end

RuinsOfAlph_PuzzleAndRewardChambers_MapScript_UnownText::
	return

RuinsOfAlph_B1F_Text_Gramps:
	.string "These underground passages\n"
	.string "are filled with UNOWN.\p"
	.string "They seem to communicate\n"
	.string "through psychic power.$"

RuinsOfAlph_B1F_Text_Hiker:
	.string "Watch your step down here.\n"
	.string "The floor is uneven.\p"
	.string "UNOWN float everywhere!$"

RuinsOfAlph_B1F_Text_Teacher:
	.string "The UNOWN are fascinating!\n"
	.string "Each shape is unique.\p"
	.string "I wonder what messages they\n"
	.string "are trying to convey...$"

RuinsOfAlph_B1F_Text_DomeFossil:
	.string "A DOME FOSSIL is embedded\n"
	.string "in the wall.\p"
	.string "It belonged to an ancient\n"
	.string "POKeMON called KABUTO.$"

RuinsOfAlph_B1F_Text_GSBALL:
	.string "A strange golden ball sits\n"
	.string "on a pedestal.\p"
	.string "It glows with a mysterious\n"
	.string "energy...$"

RuinsOfAlph_B1F_Text_HelixFossil:
	.string "A HELIX FOSSIL is embedded\n"
	.string "in the wall.\p"
	.string "It belonged to an ancient\n"
	.string "POKeMON called OMANYTE.$"

RuinsOfAlph_B1F_Text_OldAmber:
	.string "A piece of OLD AMBER is\n"
	.string "embedded in the wall.\p"
	.string "It contains the DNA of an\n"
	.string "ancient flying POKeMON.$"

