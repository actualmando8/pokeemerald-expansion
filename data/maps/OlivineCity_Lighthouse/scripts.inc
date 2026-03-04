OlivineCity_Lighthouse_MapScripts::
	.byte 0

OlivineLighthouse_EventScript_1FPokefanF::
	msgbox OlivineLighthouse_Text_PokefanF, MSGBOX_NPC
	end

OlivineLighthouse_EventScript_1FSailor::
	msgbox OlivineLighthouse_Text_Sailor1F, MSGBOX_NPC
	end

OlivineLighthouse_EventScript_Ampharos::
	lock
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
	msgbox OlivineLighthouse_Text_Ampharos, MSGBOX_DEFAULT
	waitmoncry
	release
	end

OlivineLighthouse_EventScript_BirdKeeperDenis::
	msgbox OlivineLighthouse_Text_Denis, MSGBOX_NPC
	end

OlivineLighthouse_EventScript_BirdKeeperTheo::
	msgbox OlivineLighthouse_Text_Theo, MSGBOX_NPC
	end

OlivineLighthouse_EventScript_GentlemanAlfred::
	msgbox OlivineLighthouse_Text_Alfred, MSGBOX_NPC
	end

OlivineLighthouse_EventScript_GentlemanPreston::
	msgbox OlivineLighthouse_Text_Preston, MSGBOX_NPC
	end

OlivineLighthouse_EventScript_Huey::
	msgbox OlivineLighthouse_Text_Huey, MSGBOX_NPC
	end

OlivineLighthouse_EventScript_Item_Ether::
	finditem ITEM_ETHER
	end

OlivineLighthouse_EventScript_Item_HyperPotion::
	finditem ITEM_HYPER_POTION
	end

OlivineLighthouse_EventScript_Item_Protein::
	finditem ITEM_PROTEIN
	end

OlivineLighthouse_EventScript_Item_RareCandy::
	finditem ITEM_RARE_CANDY
	end

OlivineLighthouse_EventScript_Jasmine::
	msgbox OlivineLighthouse_Text_Jasmine, MSGBOX_NPC
	end

OlivineLighthouse_EventScript_LassConnie::
	msgbox OlivineLighthouse_Text_Connie, MSGBOX_NPC
	end

OlivineLighthouse_EventScript_SailorErnest::
	msgbox OlivineLighthouse_Text_Ernest, MSGBOX_NPC
	end

OlivineLighthouse_EventScript_SailorKent::
	msgbox OlivineLighthouse_Text_Kent, MSGBOX_NPC
	end

OlivineLighthouse_EventScript_SailorTerrell::
	msgbox OlivineLighthouse_Text_Terrell, MSGBOX_NPC
	end

OlivineLighthouse_Text_Jasmine:
	.string "JASMINE: AMPHY is doing well\n"
	.string "now. Its light shines bright\l"
	.string "again.\p"
	.string "Thank you for bringing the\n"
	.string "medicine from CIANWOOD.$"

OlivineLighthouse_Text_PokefanF:
	.string "This lighthouse has been here\n"
	.string "for ages. AMPHY lights the\l"
	.string "way for ships at night.$"

OlivineLighthouse_Text_Sailor1F:
	.string "Without the lighthouse, ships\n"
	.string "can't navigate safely to\l"
	.string "OLIVINE PORT.$"

OlivineLighthouse_Text_Ampharos:
	.string "AMPHY is shining brightly!\n"
	.string "Its tail glows with a warm\l"
	.string "light.$"

OlivineLighthouse_Text_Denis:
	.string "My bird POKeMON love flying\n"
	.string "around the lighthouse.\p"
	.string "The view from up here is\n"
	.string "spectacular!$"

OlivineLighthouse_Text_Theo:
	.string "PIDGEOT can see ships from\n"
	.string "miles away!\p"
	.string "I help spot incoming vessels.$"

OlivineLighthouse_Text_Alfred:
	.string "AMPHY the AMPHAROS has lit\n"
	.string "this lighthouse for years.\p"
	.string "It's a beloved POKeMON in\n"
	.string "OLIVINE.$"

OlivineLighthouse_Text_Preston:
	.string "The lighthouse keeper before\n"
	.string "JASMINE was her grandfather.\p"
	.string "It runs in the family!$"

OlivineLighthouse_Text_Huey:
	.string "I help maintain the lighthouse\n"
	.string "machinery.\p"
	.string "Without AMPHY's light, the\n"
	.string "ships would be lost!$"

OlivineLighthouse_Text_Connie:
	.string "I come here to watch the\n"
	.string "ships come and go.\p"
	.string "It's so romantic!$"

OlivineLighthouse_Text_Ernest:
	.string "This lighthouse has guided\n"
	.string "sailors for generations.\p"
	.string "AMPHY's light is the\n"
	.string "brightest beacon around.$"

OlivineLighthouse_Text_Kent:
	.string "I owe my life to this\n"
	.string "lighthouse. It saved my\l"
	.string "ship during a storm once.$"

OlivineLighthouse_Text_Terrell:
	.string "The stairs in this lighthouse\n"
	.string "are murder on the legs!\p"
	.string "But the view from the top\n"
	.string "makes it worth it!$"

