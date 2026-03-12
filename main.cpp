#include <iostream>
#include<conio.h> // 키보드

using namespace std;

int main()
{
	int Temp = 0;

	int MapX = 10;
	int MapY = 10;

	int PlayerX = 1;
	int PlayerY = 1;

	int Wall[10][10] = {
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 2, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
	};

	for (;;)
	{
		for (int Y = 0; Y < MapY; Y++)
		{
			for (int X = 0; X < MapX; X++)
			{
				if (PlayerX == X && PlayerY == Y)
				{
					cout << "P";
				}

				else if (Wall[Y][X] == 1)
				{
					cout << "*";
				}

				else if (Wall[Y][X] == 0)
				{
					cout << " ";
				}
			}
			cout << endl;
		}

		Temp = _getch();

		if (Temp == 'w')
		{
			if (Wall[PlayerY-1][PlayerX] == 0)
			{
				PlayerY--;
			}
		}

		if (Temp == 's')
		{
			if (Wall[PlayerY+1][PlayerX] == 0)
			{
				PlayerY++;
			}
		}

		if (Temp == 'a')
		{
			if (Wall[PlayerY][PlayerX-1] == 0)
			{
				PlayerX--;
			}
		}

		if (Temp == 'd')
		{
			if (Wall[PlayerY][PlayerX+1] == 0)
			{
				PlayerX++;
			}
		}

		system("cls");
	}
	return 0;
}