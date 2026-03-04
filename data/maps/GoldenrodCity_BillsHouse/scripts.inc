GoldenrodCity_BillsHouse_MapScripts::
	.byte 0

@ Johto map scripts (imported from HnS, stubs)

GoldenrodCity_BillsHouse_EventScript_Bill::
	msgbox GoldenrodCity_BillsHouse_Text_Bill, MSGBOX_NPC
	end

GoldenrodCity_BillsHouse_EventScript_Mom::
	msgbox GoldenrodCity_BillsHouse_Text_Mom, MSGBOX_NPC
	end

GoldenrodCity_BillsHouse_EventScript_Sister::
	msgbox GoldenrodCity_BillsHouse_Text_Sister, MSGBOX_NPC
	end


GoldenrodCity_BillsHouse_Text_Bill:
	.string "I manage the PC Storage\nSystem. Need help?$"

GoldenrodCity_BillsHouse_Text_Mom:
	.string "...$"

GoldenrodCity_BillsHouse_Text_Sister:
	.string "...$"
