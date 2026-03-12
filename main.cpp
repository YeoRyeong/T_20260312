#include "Engine.h"


using namespace std;

struct Color
{
	int R;
	int G;
	int B;
	int A;
};

int main()
{
	Color PlayerColor;

	bool bIsRunning = true;

	//Gameloop
	while (bIsRunning) //frame
	{
		int KeyCode = Input();
		Tick(KeyCode);
		Render();
	}

	return 0;
}