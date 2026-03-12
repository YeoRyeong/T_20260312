#include <iostream>

using namespace std;

int Pocket(int* Index, int* Boll)
{
	for (int i = 0; i < 45; i++)
	{
		Index[i] = i + 1;
		*Boll = i + 1;
		cout << Index[i] << " ";
	}
	cout << endl;
	return *Boll;
}


int main()
{
	// 주머니에 45개의 공이 있습니다.
	// 그 중에 6개를 뽑는 프로그램을 만들어보세요.

	// Initialize -> 초기화

	int Index[45] = { 0, };
	int Check[6] = { 0, };
	int Boll;
	int Count = 6;
	int s;

	srand((unsigned)time(nullptr));

	Pocket(Index, &Boll);

	for (int i = 0; i < Boll; i++)
	{
		if (i < 6)
		{
			cin >> s;
		}

		if (i < 6)
		{
			if (s == *(Index + s - 1))
			{
				cout << *(Index + s - 1) << " ";
			}

			else
			{
				cout << "값이 없습니다." << " ";
			}
		}

		if (i == 6)
		{
			break;
		}
	}

	// 주머니에 45개 중 -> 6개 뽑기

	return 0;
}