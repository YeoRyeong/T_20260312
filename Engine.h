#pragma once

#ifndef __ENGINE_H__
#define __ENGINE_H__  

extern int Map[10][10];

extern int PlayerX;
extern int PlayerY;

/// <summary>
/// public class
/// </summary>
/// 언리얼 구조에서 F가 들어감. // i가 있기 때문에
struct FVector2i 
{
	int X;
	int Y;
};

extern FVector2i PlayerPosition;

int Input();

void Tick(int KeyCode);

void Render();

void Gotoxy(int x, int y);

void Clear();

void AddPlayerOffset(int DeltaX, int DeltaY);


#endif //__ENGINE_H__