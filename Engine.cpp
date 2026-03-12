#include "Engine.h"
#include "conio.h"
#include <iostream>
#include <Windows.h>

struct Position // 새로운 자료형 -> custom data type
{
	int X;
	int Y;

};

Position PlayerPosition;

int PlayerX = 1;
int PlayerY = 1;
int PlayerHP = 100;
int PlayerItem[10];
int PlayerGold = 100;


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
		AddPlayerOffset(0, -1);
	}
	if (KeyCode == 's')
	{
		AddPlayerOffset(0, 1);
	}
	if (KeyCode == 'a')
	{
		AddPlayerOffset(-1, 0);
	}
	if (KeyCode == 'd')
	{
		AddPlayerOffset(1, 0);
	}
}

void Gotoxy(int x, int y)
{
	COORD Pos = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void Clear()
{
	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			Gotoxy(X, Y);
			std::cout << " ";
		}
	}

}

void AddPlayerOffset(int DeltaX, int DeltaY)
{
	PlayerX += DeltaX;
	PlayerY += DeltaY;
}

void Render()
{
	Clear();

	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			Gotoxy(X, Y);
			std::cout << Map[Y][X];

			if (PlayerX == X && PlayerY == Y)
			{
				std::cout << "P";
			}

			else if (Map[Y][X] == 1)
			{
				std::cout << "#";
			}

			else if (Map[Y][X] == 0)
			{
				std::cout << " ";
			}
		}
	}

}


