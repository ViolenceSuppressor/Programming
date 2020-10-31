#include "pch.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL,"russian");
	int number;
	std::cin >> number;

	for (int i = 2;i<number;i++) 
	{
		if (number%i == 0)
		{
			std::cout << "Сложное";
			system("pause");
			return 0;
		}
	}
	std::cout << "Простое";
	system("pause");
}
