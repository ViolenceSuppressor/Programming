#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	std::string words[]{"hallo", "klempner", "das", "ist", "fantastisch", "fluggegecheimen"};
	int length = 0;
	double probability(1);
	for (const std::string &word : words)
	{
		length += word.size();
	}
	while(true) 
	{
		char input = std::cin.get();
		if (input == '\n')
			break;
		int variants(0);
		for (const std::string &word : words)
		{
			for (const char &letter : word) 
			{
				if (input == letter)
					variants++;
			}
		}
	probability = (probability * variants) / length;
	}
	printf("%g",probability);
}
