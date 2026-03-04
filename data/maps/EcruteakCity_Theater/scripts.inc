EcruteakCity_Theater_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

EcruteakCity_Theater_EventScript_Boy::
	msgbox EcruteakCity_Theater_Text_Boy, MSGBOX_NPC
	end

EcruteakCity_Theater_EventScript_FancyPanel::
	msgbox EcruteakCity_Theater_Text_Panel, MSGBOX_SIGN
	end

EcruteakCity_Theater_EventScript_Girl::
	msgbox EcruteakCity_Theater_Text_Girl, MSGBOX_NPC
	end

EcruteakCity_Theater_EventScript_Gramps::
	msgbox EcruteakCity_Theater_Text_Gramps, MSGBOX_NPC
	end

EcruteakCity_Theater_EventScript_Granny::
	msgbox EcruteakCity_Theater_Text_Granny, MSGBOX_NPC
	end

EcruteakCity_Theater_EventScript_Naoko::
	msgbox EcruteakCity_Theater_Text_Naoko, MSGBOX_NPC
	end

EcruteakCity_Theater_EventScript_Miki::
	msgbox EcruteakCity_Theater_Text_Miki, MSGBOX_NPC
	end

EcruteakCity_Theater_EventScript_Sayo::
	msgbox EcruteakCity_Theater_Text_Sayo, MSGBOX_NPC
	end

EcruteakCity_Theater_EventScript_Kuni::
	msgbox EcruteakCity_Theater_Text_Kuni, MSGBOX_NPC
	end

EcruteakCity_Theater_EventScript_Koume::
	msgbox EcruteakCity_Theater_Text_Koume, MSGBOX_NPC
	end

EcruteakCity_Theater_EventScript_Satsuki::
	msgbox EcruteakCity_Theater_Text_Satsuki, MSGBOX_NPC
	end

EcruteakCity_Theater_EventScript_Sakura::
	msgbox EcruteakCity_Theater_Text_Sakura, MSGBOX_NPC
	end

EcruteakCity_Theater_EventScript_Psyduck::
	lock
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
	msgbox EcruteakCity_Theater_Text_Psyduck, MSGBOX_DEFAULT
	waitmoncry
	release
	end

EcruteakCity_Theater_EventScript_Rocket::
	msgbox EcruteakCity_Theater_Text_Rocket, MSGBOX_NPC
	end

EcruteakCity_Theater_EventScript_RocketEventTrigger::
	return

EcruteakCity_Theater_EventScript_SurfGuy::
	msgbox EcruteakCity_Theater_Text_SurfGuy, MSGBOX_NPC
	end

EcruteakCity_Theater_EventScript_TriggerSurfGuy::
	return

EcruteakCity_Theater_EventScript_Zuki::
	msgbox EcruteakCity_Theater_Text_Zuki, MSGBOX_NPC
	end

EcruteakCity_Theater_Trigger_PreBattleCutsceneLeft::
	return

EcruteakCity_Theater_Trigger_PreBattleCutsceneRight::
	return

EcruteakCity_Theater_Trigger_PreBattleCutsceneTop::
	return

EcruteakCity_Theater_Text_Boy:
	.string "Did you know there are POKeMON\n"
	.string "you can only find at night?$"

EcruteakCity_Theater_Text_Girl:
	.string "I heard some POKeMON only evolve\n"
	.string "when they really trust you!$"

EcruteakCity_Theater_Text_Gramps:
	.string "I've watched the KIMONO GIRLS\n"
	.string "dance for decades.\p"
	.string "Their grace honors the\n"
	.string "legendary POKeMON.$"

EcruteakCity_Theater_Text_Panel:
	.string "ECRUTEAK DANCE THEATER\n"
	.string "Traditional Dances of JOHTO\p"
	.string "The KIMONO GIRLS perform\n"
	.string "nightly.$"

EcruteakCity_Theater_Text_Granny:
	.string "The KIMONO GIRLS each train\n"
	.string "a different evolution of\l"
	.string "EEVEE.\p"
	.string "They're as elegant as their\n"
	.string "POKeMON!$"

EcruteakCity_Theater_Text_Naoko:
	.string "NAOKO: My ESPEON senses the\n"
	.string "emotions of the audience.\p"
	.string "When they feel joy, ESPEON's\n"
	.string "gem glows a brilliant violet.$"

EcruteakCity_Theater_Text_Miki:
	.string "MIKI: My FLAREON's passion\n"
	.string "fuels my dance.\p"
	.string "Its flames burn as brightly\n"
	.string "as our devotion to tradition.$"

EcruteakCity_Theater_Text_Sayo:
	.string "SAYO: JOLTEON and I are as\n"
	.string "quick as lightning on stage!\p"
	.string "Our dance represents the\n"
	.string "storm that RAIKOU commands.$"

EcruteakCity_Theater_Text_Kuni:
	.string "KUNI: VAPOREON flows like\n"
	.string "water through my dance.\p"
	.string "We honor the tides that\n"
	.string "LUGIA stirs from the deep.$"

EcruteakCity_Theater_Text_Koume:
	.string "KOUME: I'm one of the new\n"
	.string "KIMONO GIRLS.\p"
	.string "My LEAFEON and I dance to\n"
	.string "honor the forests of JOHTO.\p"
	.string "The rustle of leaves is our\n"
	.string "music... ILEX FOREST sings\l"
	.string "to us when we perform.$"

EcruteakCity_Theater_Text_Satsuki:
	.string "SATSUKI: My GLACEON commands\n"
	.string "the beauty of winter.\p"
	.string "When I dance, frost crystals\n"
	.string "form in the air around us.\p"
	.string "ICE PATH inspired our newest\n"
	.string "choreography.$"

EcruteakCity_Theater_Text_Sakura:
	.string "SAKURA: I'm the youngest of\n"
	.string "the KIMONO GIRLS.\p"
	.string "My SYLVEON's ribbons weave\n"
	.string "through the air as I dance.\p"
	.string "They say SYLVEON's power\n"
	.string "comes from bonds of love...\l"
	.string "Just like our bond with\l"
	.string "ECRUTEAK's legends.$"

EcruteakCity_Theater_Text_Psyduck:
	.string "PSYDUCK is watching the\n"
	.string "dance with a blank stare.$"

EcruteakCity_Theater_Text_SurfGuy:
	.string "The KIMONO GIRLS are amazing!\n"
	.string "I come to every show!\p"
	.string "You should see them battle\n"
	.string "too -- they're fierce!$"

EcruteakCity_Theater_Text_Zuki:
	.string "ZUKI: I'm the eldest KIMONO\n"
	.string "GIRL.\p"
	.string "Our dances tell the stories\n"
	.string "of ECRUTEAK's legends.\p"
	.string "HO-OH and LUGIA... the three\n"
	.string "beasts... all are honored\l"
	.string "in our performances.$"


EcruteakCity_Theater_Text_Rocket:
	.string "...$"
