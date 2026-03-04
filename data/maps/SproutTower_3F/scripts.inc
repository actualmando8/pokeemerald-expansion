SproutTower_3F_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

SproutTower_3F_EventScript_EscapeRope::
	msgbox SproutTower_3F_Text_EscapeRope, MSGBOX_NPC
	end

SproutTower_3F_EventScript_Painting::
	msgbox SproutTower_3F_Text_Painting, MSGBOX_NPC
	end

SproutTower_3F_EventScript_Potion::
	msgbox SproutTower_3F_Text_Potion, MSGBOX_NPC
	end

SproutTower_3F_EventScript_SageJin::
	trainerbattle_single TRAINER_JOHTO_SAGE_JIN, SproutTower_3F_Text_SageJinIntro, SproutTower_3F_Text_SageJinDefeat
	msgbox SproutTower_3F_Text_SageJinPost, MSGBOX_AUTOCLOSE
	end

SproutTower_3F_EventScript_SageLi::
	trainerbattle_single TRAINER_JOHTO_SAGE_LI, SproutTower_3F_Text_SageLiIntro, SproutTower_3F_Text_SageLiDefeat
	msgbox SproutTower_3F_Text_SageLiPost, MSGBOX_AUTOCLOSE
	end

SproutTower_3F_EventScript_SageNeal::
	trainerbattle_single TRAINER_JOHTO_SAGE_NEAL, SproutTower_3F_Text_SageNealIntro, SproutTower_3F_Text_SageNealDefeat
	msgbox SproutTower_3F_Text_SageNealPost, MSGBOX_AUTOCLOSE
	end

SproutTower_3F_EventScript_SageTroy::
	trainerbattle_single TRAINER_JOHTO_SAGE_TROY, SproutTower_3F_Text_SageTroyIntro, SproutTower_3F_Text_SageTroyDefeat
	msgbox SproutTower_3F_Text_SageTroyPost, MSGBOX_AUTOCLOSE
	end

SproutTower_3F_EventScript_TriggerSceneLeft::
	lockall
	msgbox SproutTower_3F_Text_TriggerScene, MSGBOX_DEFAULT
	releaseall
	end

SproutTower_3F_EventScript_TriggerSceneRight::
	lockall
	msgbox SproutTower_3F_Text_TriggerScene, MSGBOX_DEFAULT
	releaseall
	end


SproutTower_3F_Text_EscapeRope:
	.string "...$"

SproutTower_3F_Text_Painting:
	.string "...$"

SproutTower_3F_Text_Potion:
	.string "...$"

SproutTower_3F_Text_SageJinIntro:
	.string "SAGE JIN: The swaying pillar\n"
	.string "teaches us balance.\p"
	.string "Let me test yours!$"

SproutTower_3F_Text_SageJinDefeat:
	.string "Your balance is true...$"

SproutTower_3F_Text_SageJinPost:
	.string "SAGE JIN: BELLSPROUT sways\n"
	.string "but never falls. Remember\l"
	.string "that lesson well.$"

SproutTower_3F_Text_SageLiIntro:
	.string "ELDER LI: So, you've bested\n"
	.string "my students.\p"
	.string "Now face the master of\n"
	.string "SPROUT TOWER!$"

SproutTower_3F_Text_SageLiDefeat:
	.string "Magnificent! You have\n"
	.string "earned my respect.$"

SproutTower_3F_Text_SageLiPost:
	.string "ELDER LI: Your bond with\n"
	.string "your POKeMON is strong.\p"
	.string "Take on FALKNER at the\n"
	.string "VIOLET GYM with confidence!$"

SproutTower_3F_Text_SageNealIntro:
	.string "SAGE NEAL: We train here\n"
	.string "to learn compassion.\p"
	.string "Show me your spirit!$"

SproutTower_3F_Text_SageNealDefeat:
	.string "Your spirit burns bright...$"

SproutTower_3F_Text_SageNealPost:
	.string "SAGE NEAL: The path of a\n"
	.string "TRAINER is one of endless\l"
	.string "growth.$"

SproutTower_3F_Text_SageTroyIntro:
	.string "SAGE TROY: A TRAINER must\n"
	.string "have patience and resolve.\p"
	.string "Let us battle!$"

SproutTower_3F_Text_SageTroyDefeat:
	.string "Your resolve is admirable...$"

SproutTower_3F_Text_SageTroyPost:
	.string "SAGE TROY: WEEPINBELL's tears\n"
	.string "nourish the earth. Even in\l"
	.string "defeat, there is wisdom.$"

SproutTower_3F_Text_TriggerScene:
	.string "A red-haired TRAINER stands\n"
	.string "before the ELDER.\p"
	.string "SILVER: Hmph. The strong\n"
	.string "survive, the weak perish.\p"
	.string "He brushes past you on\n"
	.string "his way out...$"

