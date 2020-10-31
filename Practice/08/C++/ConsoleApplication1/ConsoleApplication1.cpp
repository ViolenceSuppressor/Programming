#include "pch.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL,"russian");
	double a, b;
	char symbol;

	std::cin >> a;
	std::cin >> symbol;
	std::cin >> b;

	switch (symbol)
	{
	case '+':
		std::cout << a + b;
		break;
	case '-':
		std::cout << a - b;
		break;
	case '*':
		std::cout << a * b;
		break;
	case '/':
		if (b == 0)
			std::cout<<"Нельзя делить на ноль";
		else
			std::cout << a / b;
		break;
	default:
		std::cout << "Неверный ввод";
		break;
	}
	system("pause");
}
