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
	trainerbattle_single TRAINER_JOHTO_KIMONO_NAOKO, EcruteakCity_Theater_Text_NaokoIntro, EcruteakCity_Theater_Text_NaokoDefeat
	msgbox EcruteakCity_Theater_Text_Naoko, MSGBOX_AUTOCLOSE
	end

EcruteakCity_Theater_EventScript_Miki::
	trainerbattle_single TRAINER_JOHTO_KIMONO_MIKI, EcruteakCity_Theater_Text_MikiIntro, EcruteakCity_Theater_Text_MikiDefeat
	msgbox EcruteakCity_Theater_Text_Miki, MSGBOX_AUTOCLOSE
	end

EcruteakCity_Theater_EventScript_Sayo::
	trainerbattle_single TRAINER_JOHTO_KIMONO_SAYO, EcruteakCity_Theater_Text_SayoIntro, EcruteakCity_Theater_Text_SayoDefeat
	msgbox EcruteakCity_Theater_Text_Sayo, MSGBOX_AUTOCLOSE
	end

EcruteakCity_Theater_EventScript_Kuni::
	trainerbattle_single TRAINER_JOHTO_KIMONO_KUNI, EcruteakCity_Theater_Text_KuniIntro, EcruteakCity_Theater_Text_KuniDefeat
	msgbox EcruteakCity_Theater_Text_Kuni, MSGBOX_AUTOCLOSE
	end

EcruteakCity_Theater_EventScript_Koume::
	trainerbattle_single TRAINER_JOHTO_KIMONO_KOUME, EcruteakCity_Theater_Text_KoumeIntro, EcruteakCity_Theater_Text_KoumeDefeat
	msgbox EcruteakCity_Theater_Text_Koume, MSGBOX_AUTOCLOSE
	end

EcruteakCity_Theater_EventScript_Satsuki::
	trainerbattle_single TRAINER_JOHTO_KIMONO_SATSUKI, EcruteakCity_Theater_Text_SatsukiIntro, EcruteakCity_Theater_Text_SatsukiDefeat
	msgbox EcruteakCity_Theater_Text_Satsuki, MSGBOX_AUTOCLOSE
	end

EcruteakCity_Theater_EventScript_Sakura::
	trainerbattle_single TRAINER_JOHTO_KIMONO_SAKURA, EcruteakCity_Theater_Text_SakuraIntro, EcruteakCity_Theater_Text_SakuraDefeat
	msgbox EcruteakCity_Theater_Text_Sakura, MSGBOX_AUTOCLOSE
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
	lockall
	msgbox EcruteakCity_Theater_Text_RocketEvent, MSGBOX_DEFAULT
	releaseall
	end

EcruteakCity_Theater_EventScript_SurfGuy::
	msgbox EcruteakCity_Theater_Text_SurfGuy, MSGBOX_NPC
	end

EcruteakCity_Theater_EventScript_TriggerSurfGuy::
	lockall
	msgbox EcruteakCity_Theater_Text_SurfGuyTrigger, MSGBOX_DEFAULT
	releaseall
	end

EcruteakCity_Theater_EventScript_Zuki::
	trainerbattle_single TRAINER_JOHTO_KIMONO_ZUKI, EcruteakCity_Theater_Text_ZukiIntro, EcruteakCity_Theater_Text_ZukiDefeat
	msgbox EcruteakCity_Theater_Text_Zuki, MSGBOX_AUTOCLOSE
	end

EcruteakCity_Theater_Trigger_PreBattleCutsceneLeft::
	lockall
	msgbox EcruteakCity_Theater_Text_PreBattle, MSGBOX_DEFAULT
	releaseall
	end

EcruteakCity_Theater_Trigger_PreBattleCutsceneRight::
	lockall
	msgbox EcruteakCity_Theater_Text_PreBattle, MSGBOX_DEFAULT
	releaseall
	end

EcruteakCity_Theater_Trigger_PreBattleCutsceneTop::
	lockall
	msgbox EcruteakCity_Theater_Text_PreBattle, MSGBOX_DEFAULT
	releaseall
	end

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

EcruteakCity_Theater_Text_RocketEvent:
	.string "ROCKET GRUNT: Heh heh...\n"
	.string "We're commandeering this\l"
	.string "theater for TEAM ROCKET!\p"
	.string "The KIMONO GIRLS' POKeMON\n"
	.string "will fetch a good price...$"

EcruteakCity_Theater_Text_SurfGuyTrigger:
	.string "GENTLEMAN: Oh! You helped save\n"
	.string "the KIMONO GIRLS!\p"
	.string "As thanks, take this -- it's\n"
	.string "HM03 SURF! Teach it to your\l"
	.string "POKeMON and you can travel\l"
	.string "across water!$"

EcruteakCity_Theater_Text_PreBattle:
	.string "The KIMONO GIRLS stand ready\n"
	.string "on the stage.\p"
	.string "Their POKeMON are poised\n"
	.string "for battle...\p"
	.string "Prove your worth as a\n"
	.string "TRAINER!$"

EcruteakCity_Theater_Text_ZukiIntro:
	.string "ZUKI: As the eldest, I shall\n"
	.string "test you first.\p"
	.string "My UMBREON and I dance in\n"
	.string "the moonlight. En garde!$"

EcruteakCity_Theater_Text_ZukiDefeat:
	.string "The moon sets... You are\n"
	.string "truly gifted.$"

EcruteakCity_Theater_Text_NaokoIntro:
	.string "NAOKO: My ESPEON has already\n"
	.string "sensed your strength.\p"
	.string "But can you prove it?$"

EcruteakCity_Theater_Text_NaokoDefeat:
	.string "ESPEON's gem dims...\n"
	.string "You have won.$"

EcruteakCity_Theater_Text_MikiIntro:
	.string "MIKI: The flames of tradition\n"
	.string "burn within FLAREON!\p"
	.string "Can you withstand our fire?$"

EcruteakCity_Theater_Text_MikiDefeat:
	.string "The flames flicker out...\n"
	.string "You are the victor.$"

EcruteakCity_Theater_Text_SayoIntro:
	.string "SAYO: JOLTEON and I strike\n"
	.string "like lightning!\p"
	.string "Try to keep up!$"

EcruteakCity_Theater_Text_SayoDefeat:
	.string "The storm passes...\n"
	.string "Your speed surpasses ours.$"

EcruteakCity_Theater_Text_KuniIntro:
	.string "KUNI: VAPOREON and I flow\n"
	.string "like the tides.\p"
	.string "Can you swim against\n"
	.string "the current?$"

EcruteakCity_Theater_Text_KuniDefeat:
	.string "The tide recedes...\n"
	.string "Your strength runs deep.$"

EcruteakCity_Theater_Text_KoumeIntro:
	.string "KOUME: LEAFEON and I honor\n"
	.string "the forests of JOHTO.\p"
	.string "Nature's power is not to\n"
	.string "be underestimated!$"

EcruteakCity_Theater_Text_KoumeDefeat:
	.string "The leaves fall gently...\n"
	.string "You have bested nature.$"

EcruteakCity_Theater_Text_SatsukiIntro:
	.string "SATSUKI: GLACEON's beauty is\n"
	.string "matched only by its power.\p"
	.string "Prepare for a blizzard!$"

EcruteakCity_Theater_Text_SatsukiDefeat:
	.string "The ice melts...\n"
	.string "Your warmth is undeniable.$"

EcruteakCity_Theater_Text_SakuraIntro:
	.string "SAKURA: I may be the youngest,\n"
	.string "but don't underestimate me!\p"
	.string "SYLVEON's ribbons will bind\n"
	.string "your fate!$"

EcruteakCity_Theater_Text_SakuraDefeat:
	.string "The ribbons unravel...\n"
	.string "You've proven your heart.$"

