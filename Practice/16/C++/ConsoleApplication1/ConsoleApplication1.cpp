#include "pch.h"
#include <iostream>
#include <regex>

int main()
{
	std::regex pattern("a...55661");
	int number;
	bool hasMatch = false;
	std::cin >> number;
	for (int i = 0;i < number;i++)
	{
		char input[10];
		std::cin >> input;
		if (std::regex_match(input,pattern)) 
		{
			hasMatch = true;
			std::cout << input<<std::endl;
		}
	}
	if (!hasMatch)
		std::cout << -1;
	system("pause");
}
