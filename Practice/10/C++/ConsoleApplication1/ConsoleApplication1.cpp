#include "pch.h"
#include <iostream>

int main()
{
	int s, l1, r1, l2, r2;
	std::cin >> s;
	std::cin >> l1;
	std::cin >> r1;
	std::cin >> l2;
	std::cin >> r2;

	if (s >= (l1 + l2) && s <= (r1 + r2))
	{
		std::cout<<l1<<" "<<s - l1;
	}
	else
	{
		std::cout << -1;
	}

	system("pause");
}

