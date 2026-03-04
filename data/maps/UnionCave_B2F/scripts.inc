UnionCave_B2F_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

UnionCave_B2F_EventScript_CooltrainerNick::
	msgbox UnionCave_B2F_Text_CooltrainerNick, MSGBOX_NPC
	end

UnionCave_B2F_EventScript_CooltrainerfEmma::
	msgbox UnionCave_B2F_Text_CooltrainerfEmma, MSGBOX_NPC
	end

UnionCave_B2F_EventScript_CooltrainerfGwen::
	msgbox UnionCave_B2F_Text_CooltrainerfGwen, MSGBOX_NPC
	end

UnionCave_B2F_EventScript_Item_Ether::
	finditem ITEM_ETHER
	end

UnionCave_B2F_EventScript_Item_HyperPotion::
	finditem ITEM_HYPER_POTION
	end

UnionCave_B2F_EventScript_Item_MaxRevive::
	finditem ITEM_REVIVE
	end

UnionCave_B2F_EventScript_Lapras::
	lock
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
	msgbox UnionCave_B2F_Text_Lapras, MSGBOX_DEFAULT
	waitmoncry
	release
	end


UnionCave_B2F_Text_CooltrainerNick:
	.string "Keep pushing yourself!\nThat is the path to victory!$"

UnionCave_B2F_Text_CooltrainerfEmma:
	.string "Only the best TRAINERS\nmake it to the LEAGUE!$"

UnionCave_B2F_Text_CooltrainerfGwen:
	.string "Only the best TRAINERS\nmake it to the LEAGUE!$"

UnionCave_B2F_Text_Lapras:
	.string "LAPRAS sings a gentle melody.$"
