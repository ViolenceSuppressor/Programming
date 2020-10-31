#include "pch.h"
#include <iostream>

int main()
{
	int a = 0;
	int b = 0;
	double c = 0;
	double d = 0;

	std::cin >> a;
	std::cin >> b;
	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a / b << std::endl;

	std::cin >> c;
	std::cin >> d;
	std::cout << c + d << std::endl;
	std::cout << c - d << std::endl;
	std::cout << c * d << std::endl;
	std::cout << c / d << std::endl;

	std::cin >> a;
	std::cin >> c;
	std::cout << a + c << std::endl;
	std::cout << a - c << std::endl;
	std::cout << a * c << std::endl;
	std::cout << a / c << std::endl;

	std::cin >> c;
	std::cin >> a;
	std::cout << c + a << std::endl;
	std::cout << c - a << std::endl;
	std::cout << c * a << std::endl;
	std::cout << c / a << std::endl;

	system("pause");
	//Внимание обратил.
}
