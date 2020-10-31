#include "pch.h"
#include <iostream>

int main()
{
	short input = 0;
	short numbers[37]{0};
	short red[]{1,3,5,7,9,12,14,16,18,19,21,23,25,27,30,32,34,36};
	while (true)
	{
		std::cin >> input;
		if (input < 0)
			break;
		numbers[input]++;
		//Первая строка
		short max = 0;
		for (int i = 0;i < 37;i++)
		{
			if (max < numbers[i])
				max = numbers[i];
		}
		for (int i = 0;i < 37;i++)
		{
			if (max == numbers[i])
				std::cout<<i<<" ";
		}
		std::cout << std::endl;
		//Вторая строка
		for (int i = 0;i < 37;i++)
		{
			if (numbers[i] == 0)
				std::cout << i << " ";
		}
		std::cout << std::endl;
		//Третья строка
		short redSum = 0;
		short blackSum = 0;
		for (int i = 1;i<37;i++) 
		{
			if (numbers[i] != 0 && i != 0)
			{
				bool match = false;
				for (short number : red)
				{
					if (i == number)
					{
						match = true;
						redSum += numbers[i];
					}
				}
				if (!match)
				{
					blackSum += numbers[i];
				}
			}
		}
		printf("%d %d\n\n",redSum,blackSum);
	}
}
