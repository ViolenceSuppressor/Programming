#include "pch.h"
#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL,"russian");
	double a, b, c;
	int inputType;

	std::cin >> inputType;
	if (inputType==1)
	{
		std::cin >> a;
		std::cin >> b;
		std::cin >> c;
		double p = (a + b + c) / 2;
		if (a >= b + c or b >= a + c or c >= a + b)
			printf("Такого треугольника не существует");
		else
		std::cout << "S = "<<sqrt(p * ((p - a) * (p - b) * (p - c)));
	}
	else if(inputType == 2)
	{
		double aX, aY, bX ,bY, cX, cY;
		std::cin >> aX;
		std::cin >> aY;
		std::cin >> bX;
		std::cin >> bY;
		std::cin >> cX;
		std::cin >> cY;
		
		a = sqrt(pow(bX - aX, 2) + pow(bY - aY,2));
		b = sqrt(pow(cX - bX, 2) + pow(cY - bY, 2));
		c = sqrt(pow(aX - cX, 2) + pow(aY - cY, 2));

		double p = (a + b + c) / 2;
		if (a >= b + c or b >= a + c or c >= a + b)
			printf("Такого треугольника не существует");
		else
		std::cout << "S = " << sqrt(p * ((p - a) * (p - b) * (p - c)));
	}
	else
	{
		std::cout << "Неверный ввод";
	}

	system("pause");
}
