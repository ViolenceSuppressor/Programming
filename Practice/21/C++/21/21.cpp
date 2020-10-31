#include "pch.h"
#include <iostream>

// Принимает вес в килограммах и рост в метрах. Возвращает индекс массы тела. 
double BMI(double weight, double height);
// Принимает численное значение ИМТ и печатает на экран соответствующую категорию
void printBMI(double BMI);

int main()
{
	double weigt, height = 0;
	std::cin >> weigt >> height;
	printBMI(BMI(weigt,height / 100));
}

double BMI(double weight, double height) 
{
	return weight / (height * height);
}

void printBMI(double BMI) 
{
	if (BMI < 18.5) 
		std::cout << "Underweight";
	else if (BMI >= 18.5 && BMI < 25.0)
		std::cout << "Normal";	
	else if (BMI >=25.0 && BMI < 30.0)
		std::cout << "Overweight";
	else
		std::cout << "Obesity";
}
