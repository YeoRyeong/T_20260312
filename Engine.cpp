#include "Engine.h"
#include "conio.h"
#include <iostream>

int Map[10][10] =
{
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
};

int Input()
{
	return _getch();
}

void Tick(int KeyCode)
{
	if (KeyCode == 'w')
	{

	}
	if (KeyCode == 's')
	{

	}
	if (KeyCode == 'a')
	{

	}
	if (KeyCode == 'd')
	{

	}
}

void Render()
{
	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			std::cout << Map[Y][X];
		}

		std::cout << std::endl;
	}
}