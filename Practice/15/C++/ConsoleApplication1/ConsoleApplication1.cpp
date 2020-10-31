#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	setlocale(LC_ALL, "russian");
	srand(static_cast<unsigned int>(time(0)));
	rand();
	int input = 1;

	do {
		int n = rand() % 101;
		for (int i = 0;i < 6;i++)
		{
			if (i == 5)
			{
				std::cout << "Вы проиграли.Было загадано : "<<n<<"\n";
				break;
			}
			std::cin >> input;
			if (n < input)
				std::cout<<"Загаданное число меньше.\n";
			else if (n > input)
				std::cout << "Загаданное число больше.\n";
			else
			{
				std::cout << "Поздравляю!Вы угадали.\n";
				break;
			}

		}
		std::cout << "Хотите начать сначала? (1 - ДА )";
		std::cin >> input;
	} while (input == 1);


	system("pause");
}
