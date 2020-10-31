#include "pch.h"
#include <cmath>
#include <iostream>

int main()
{
	double x_zero = 0;
	double v_zero = 0;
	double t = 0;
	const double g = 9.8;
	double s = 0;

	std::cin >> x_zero;
	std::cin >> v_zero;
	std::cin >> t;
	
	s = v_zero * abs(v_zero) / (2 * g) + g * ((t - v_zero / g) * abs(t - v_zero / g)) / 2;

	std::cout << s << std::endl;

	system("pause");
}
