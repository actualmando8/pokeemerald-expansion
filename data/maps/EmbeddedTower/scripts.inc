EmbeddedTower_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

EmbeddedTower_EventScript_Rayquaza::
	lockall
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
	msgbox EmbeddedTower_Text_Rayquaza, MSGBOX_DEFAULT
	waitmoncry
	releaseall
	end

EmbeddedTower_Text_Rayquaza:
	.string "The tower shakes violently!\p"
	.string "A deafening roar echoes from\n"
	.string "the heavens above!\p"
	.string "RAYQUAZA descends from the\n"
	.string "sky in a blaze of light!$"

