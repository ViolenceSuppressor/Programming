#include "pch.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL,"russian");
	int hoursPlanned, minutesPlanned, 
		hoursCurrent, minutesCurrent;

	std::cin >> hoursPlanned;
	std::cin.ignore(1,':');
	std::cin >> minutesPlanned;
	std::cin >> hoursCurrent;
	std::cin.ignore(1,':');
	std::cin >> minutesCurrent;

	if (((hoursCurrent * 60) + minutesCurrent) - ((hoursPlanned * 60) + minutesPlanned) <= 15)
		std::cout << "Встреча состоится";
	else
		std::cout << "Встреча не состоится";

	system("pause");
}