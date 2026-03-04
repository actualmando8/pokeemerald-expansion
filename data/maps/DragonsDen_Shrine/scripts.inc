DragonsDen_Shrine_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

DragonsDen_Shrine_EventScript_Elder::
	msgbox DragonsDen_Shrine_Text_Elder, MSGBOX_NPC
	end

DragonsDen_Shrine_EventScript_Elder2::
	msgbox DragonsDen_Shrine_Text_Elder2, MSGBOX_NPC
	end

DragonsDen_Shrine_EventScript_Elder3::
	msgbox DragonsDen_Shrine_Text_Elder3, MSGBOX_NPC
	end

DragonsDen_Shrine_Trigger_ElderQuizLeft::
	lockall
	msgbox DragonsDen_Shrine_Text_ElderQuiz, MSGBOX_DEFAULT
	releaseall
	end

DragonsDen_Shrine_Trigger_ElderQuizRight::
	lockall
	msgbox DragonsDen_Shrine_Text_ElderQuiz, MSGBOX_DEFAULT
	releaseall
	end

DragonsDen_Shrine_Trigger_ElderQuizTop::
	lockall
	msgbox DragonsDen_Shrine_Text_ElderQuiz, MSGBOX_DEFAULT
	releaseall
	end

DragonsDen_Shrine_Text_Elder:
	.string "The legends say that a great\n"
	.string "bird once roosted atop\lTIN TOWER.\pThose who prove their worth\n"
	.string "may yet see it again.$"


DragonsDen_Shrine_Text_Elder2:
	.string "...$"

DragonsDen_Shrine_Text_Elder3:
	.string "...$"

DragonsDen_Shrine_Text_ElderQuiz:
	.string "ELDER: Welcome, young one.\n"
	.string "I will test your heart.\p"
	.string "Tell me... What are POKeMON\n"
	.string "to you?\p"
	.string "...\p"
	.string "I see. Your answer reveals\n"
	.string "a pure heart. You truly care\l"
	.string "for your POKeMON.\p"
	.string "CLAIR! Give this TRAINER\n"
	.string "the RISING BADGE at once!$"

