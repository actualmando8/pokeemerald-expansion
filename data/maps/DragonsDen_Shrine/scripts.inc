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
	return

DragonsDen_Shrine_Trigger_ElderQuizRight::
	return

DragonsDen_Shrine_Trigger_ElderQuizTop::
	return

DragonsDen_Shrine_Text_Elder:
	.string "The legends say that a great\n"
	.string "bird once roosted atop\lTIN TOWER.\pThose who prove their worth\n"
	.string "may yet see it again.$"


DragonsDen_Shrine_Text_Elder2:
	.string "...$"

DragonsDen_Shrine_Text_Elder3:
	.string "...$"
