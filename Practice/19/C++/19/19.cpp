#include "pch.h"
#include <iostream>
#include <string>

void combine(std::string letters, std::string left, short repeats);

short length(0);
std::string input;
int main()
{
	std::cin >> length;
	std::cin >> input;

	combine("",input,length - input.length());
}

void combine(std::string letters, std::string left, short repeats)
{
	if (letters.length() != length)
	{
		if (repeats > 0)
		{
			left = input;
		}
		for (char word : left)
		{
			combine(letters + word, std::string(left).erase(left.find(word), 1),(letters.find(word)!=std::string::npos)?repeats - 1:repeats);
		}
	}
	else
	{
		std::cout << letters << " ";
	}
}


/*
1      a	        b			
      / \          / \
2    a   b        a   b
	/	/ \      / \   \
3  b   a   b    a   b   a
*/

/*
1      a	  b	     c	
	  / \    / \    / \
2    b   c  a   c  a   b
	 |	 |  |   |  |   |
3    c   b  c   a  b   a
*/