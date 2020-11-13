#pragma once

int factorial(int number) 
{
	int result = 1;
	while (number > 1)
	{
		result *= number;
		number--;
	}
	return result;
}