#include "pch.h"
#include <iostream>
#include "factorial.h"
#include "sinus.h"
#include "combinator.h"
#include <iomanip>
#define PI 3.14159265359

int main()
{
	std::cout << "n\tn!\n";
	for (int i = 1;i <= 10;i++)
	{
		std::cout << i << "\t" << factorial(i) << "\n";
	}
	std::cout <<"\n\n";

	std::cout << "x\tsin(x)\n";

	double angle = 0.0;
	while(angle < PI / 4.0)
	{
		std::cout << angle << "\t" <<std::setprecision(4)<< sinus(angle,5) << "\n";
		angle += PI / 180.0;
	}
	std::cout << "\n\n";

	std::cout << "k\tC(k ,10)\n";

	for (int i = 1;i <= 10;i++)
	{
		std::cout << i << "\t" <<combine(i,10) << "\n";
	}
}

