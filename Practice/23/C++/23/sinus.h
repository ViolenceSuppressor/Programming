#ifndef SINUS_H
#define SINUS_H

#include "factorial.h"

double sinus(double x, int k)
{
	double result = x;
	double temp = x;
	for (int n = 1;n<=k;n++) 
	{
		temp *= -1 * x * x;
		result += (temp / factorial(2 * n + 1));
	}
	return result;
}

#endif

