#include "pch.h"
#include <iostream>

int main()
{
	int argument,result = 1;
	std::cin >> argument;

	while(argument > 1) 
	{
		result *= argument;
		argument--;
	}
	std::cout << result;

	system("pause");
}

