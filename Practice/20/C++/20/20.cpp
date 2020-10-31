#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	int cash(0);
	int number(0);

	std::cin >> cash;
	std::cin >> number;

	std::string* drink = new std::string[number];
	int* price = new int[number];
	double* volume = new double[number];
	int sumVolume(0);

	int bestChoice(0);

	for (int i = 0;i<number;i++) 
	{
		std::cin >> drink[i] >> price[i] >> volume[i];
	}

	while (true)
	{
		bool canBuy(0);
		for (int i = 0;i < number;i++)
		{
			if (cash >= price[i])
			{
				canBuy = true;
				if (volume[bestChoice] / price[bestChoice] < volume[i] / price[i])
				{
					bestChoice = i;
				}
			}
		}
		if (canBuy == false)
			break;
		std::cout << drink[bestChoice]<<" "<<cash / price[bestChoice]<<" ";
		sumVolume += (cash / price[bestChoice]) * volume[bestChoice];
		cash %= price[bestChoice];
		volume[bestChoice] = 0;
	}
	if (sumVolume == 0)
		std::cout << -1;
	else
	printf("\n%d\n%d",sumVolume,cash);
	
	delete[] drink;
	delete[] price;
	delete[] volume;

}