#include "pch.h"
#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL,"russian");
	double a,b,c;
	
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	if (a == 0 && b == 0 && c == 0)
	{
		std::cout << "x - любое число";
	}
	else if (a == 0 && b == 0)
	{
		std::cout << "корней нет";
	}
	else if (b == 0)
	{
		if ((-c / a) >= 0)
			std::cout << "x = " << sqrt(-c / a);
		else
			std::cout << "корней нет";
	}
	else if (a == 0)
	{
		std::cout << "x = "<< -c/b;
	}
	else
	{
		double D = b * b - 4 * a * c;
		if (D < 0) 
		{
			std::cout << "корней нет";
		}
		else if(D == 0)
		{
			std::cout << "x = "<<-b/(2*a);
		}
		else
		{
			std::cout << "x1 = "<< (-b + sqrt(D)) / (2 * a) <<std::endl<<"x2 = "<< (-b - sqrt(D)) / (2 * a);
		}
	}

	system("pause");
}
