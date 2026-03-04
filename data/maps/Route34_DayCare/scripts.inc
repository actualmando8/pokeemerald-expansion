Route34_DayCare_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

Route34_DayCare_Bookshelf1::
	msgbox Route34_DayCare_Bookshelf1, MSGBOX_SIGN
	end

Route34_DayCare_Bookshelf2::
	msgbox Route34_DayCare_Bookshelf2, MSGBOX_SIGN
	end

Route34_DayCare_Bookshelf3::
	msgbox Route34_DayCare_Bookshelf3, MSGBOX_SIGN
	end

Route34_DayCare_Bookshelf4::
	msgbox Route34_DayCare_Bookshelf4, MSGBOX_SIGN
	end

Route34_DayCare_EventScript_Clerk::
	msgbox Route34_DayCare_Text_Clerk, MSGBOX_NPC
	end

Route34_DayCare_EventScript_DaycareWoman::
	msgbox Route34_DayCare_Text_DaycareWoman, MSGBOX_NPC
	end

Route34_DayCare_EventScript_Ditto::
	msgbox Route34_DayCare_Text_Ditto, MSGBOX_NPC
	end

Route34_DayCare_Text_Clerk:
	.string "Welcome! Let me know if you\n"
	.string "need anything.$"


Route34_DayCare_Text_DaycareWoman:
	.string "Be careful out there! Wild\nPOKeMON can be dangerous!$"

Route34_DayCare_Text_Ditto:
	.string "...$"
