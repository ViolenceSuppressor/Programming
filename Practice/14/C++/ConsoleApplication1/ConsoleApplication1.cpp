#include "pch.h"
#include <iostream>

int main()
{
	int number,result = 0;
	std::cin >> number;

	for (int i = 1;i<=number;i*=2) 
	{
		result++;
	}
	std::cout << result;

	system("pause");
}
