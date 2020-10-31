#include "pch.h"
#include <iostream>

int main()
{
	int a = 0;
	int b = 0;
	int t = 0;

	setlocale(LC_ALL,"russian");
    std::cout << "Введите значения переменных.\n";
	std::cin >> a;
	std::cin >> b;

	t = a;
	a = b;
	b = t;

	std::cout << "a = "<<a<<std::endl;
	std::cout << "b = "<<b<<std::endl;

	a = a + b;
	b = a - b;
	a = a - b;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	system("pause");
}