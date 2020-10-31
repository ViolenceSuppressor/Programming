#include "pch.h"
#include <iostream>

/*
Суть алгоритма:
 Лабиринт можно представить в виде дерева, в котором конечными элементами являются тупик или финиш.
 Между ними и началом пути находятся развилки.Таким образом, выход можно найти пробежавшись по всем веткам этого дерева.
*/

std::string maze[25] = {
	"####B######################",
	"# #       #   #      #    #",
	"# # # ###### #### ####### #",
	"# # # #       #   #       #",
	"#   # # ######### # ##### #",
	"# # # #   #       #     # #",
	"### ### ### ############# #",
	"# #   #     # #           #",
	"# # #   ####### ###########",
	"# # # #       # #         C",
	"# # ##### ### # # ####### #",
	"# # #     ### # #       # #",
	"#   ##### ### # ######### #",
	"######### ### #           #",
	"# ####### ### #############",
	"A           #   ###   #   #",
	"# ############# ### # # # #",
	"# ###       # # ### # # # #",
	"# ######### # # ### # # # F",
	"#       ### # #     # # # #",
	"# ######### # ##### # # # #",
	"# #######   #       #   # #",
	"# ####### ######### #######",
	"#         #########       #",
	"#######E############D######"
};

bool checkNear(short direction,short x, short y);

void checkFinish(short x, short y);

void findPath(short direction, short x, short y);

void checkPath(short direction, short x, short y);

void findPath(short direction, short x, short y);

bool finish = false;
int main()
{
	setlocale(LC_ALL,"russian");
	short x, y = 0;
	std::cin >> x >> y;
	if ((x < 0 || x >= 27 || y < 0 || y >= 25) || maze[y].at(x) == '#')
		std::cout << "Не верные координаты";
	else
	{
		checkPath(0,x,y);
		if (!finish)
			std::cout << "Выхода нет";
	}
}
/*Справка по направлениям:

	1
	|
4<-- -->2
	|
	3
*/

//Проверка на тунель(есть только одна свободная точка по направлению)
bool checkNear(short direction,short x, short y)
{
	if (direction == 1 && maze[y - 1].at(x) == ' ' && maze[y].at(x + 1) == '#' && maze[y].at(x - 1) == '#')
		return true;
	else if (direction == 2 && maze[y].at(x + 1) == ' ' && maze[y - 1].at(x) == '#' && maze[y + 1].at(x) == '#')
		return true;
	else if (direction == 3 && maze[y + 1].at(x) == ' ' && maze[y].at(x + 1) == '#' && maze[y].at(x - 1) == '#')
		return true;
	else if (direction == 4 && maze[y].at(x - 1) == ' ' && maze[y - 1].at(x) == '#' && maze[y + 1].at(x) == '#')
		return true;
	else return false;
}

void checkFinish(short x, short y)
{
	for (char i = 'A';i <= 'F';i++)
	{
		if (maze[y - 1].at(x) == i)
		{
			std::cout << i << " ";
			finish = true;
		}
		if (maze[y].at(x + 1) == i)
		{
			std::cout << i << " ";
			finish = true;
		}
		if (maze[y + 1].at(x) == i)
		{
			std::cout << i << " ";
			finish = true;
		}
		if (maze[y].at(x - 1) == i)
		{
			std::cout << i << " ";
			finish = true;
		}
	}
}
//Делаем как Ник
void checkPath(short direction, short x, short y)
{
	if (direction != 3 && maze[y - 1].at(x) == ' ')
		findPath(1, x, y - 1);
	if (direction != 4 && maze[y].at(x + 1) == ' ')
		findPath(2, x + 1, y);
	if (direction != 1 && maze[y + 1].at(x) == ' ')
		findPath(3, x, y + 1);
	if (direction != 2 && maze[y].at(x - 1) == ' ')
		findPath(4, x - 1, y);
}

void findPath(short direction, short x, short y)
{
	while (checkNear(direction,x, y))//пропускаем все точки пока не дойдем до развилки, финиша или тупика
	{
		switch (direction)
		{
		case 1:
			y -= 1;
			break;
		case 2:
			x += 1;
			break;
		case 3:
			y += 1;
			break;
		case 4:
			x -= 1;
			break;
		}
	}
	checkFinish(x, y);
	checkPath(direction, x, y);
}
