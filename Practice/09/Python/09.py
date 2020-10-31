hoursPlanned, minutesPlanned = map(int,input().split(":"))
hoursCurrent, minutesCurrent = map(int,input().split(":"))

if ((hoursCurrent * 60) + minutesCurrent) - ((hoursPlanned * 60) + minutesPlanned) <= 15:
	print("Встреча состоится")
else:
	print("Встреча не состоится")