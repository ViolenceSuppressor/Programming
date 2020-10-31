#include "pch.h"
#include <iostream>

int main()
{
	int index;
	double base;
	std::cin >> base;
	std::cin >> index;
	double result = 1;

	if (index > 0)
	{
		for (int i = 0; i < index; i++)
		{
			result *= base;
		}
	}
	else
	{
		for (int i = 0;i > index ;i--)
		{
			result /= base;
		}
	}
	std::cout << result;

	system("pause");
}