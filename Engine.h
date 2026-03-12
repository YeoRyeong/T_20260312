#pragma once

#ifndef __ENGINE_H__
#define __ENGINE_H__  

extern int Map[10][10];

extern int PlayerX;
extern int PlayerY;

struct Position // 새로운 자료형 -> custom data type
{
	int X;
	int Y;

}; // C++

extern Position PlayerPosition; // 다른 곳에서 부를 것이라는 것을 선언해줌.

int Input();

void Tick(int KeyCode);

void Render();

void Gotoxy(int x, int y);

void Clear();

void AddPlayerOffset(int DeltaX, int DeltaY);

#endif //__ENGINE_H__