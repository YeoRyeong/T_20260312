#pragma once

#ifndef __ENGINE_H__
#define __ENGINE_H__  

extern int Map[10][10];

//template class
//template function
template<typename T>
T Add(T A, T B)
{
	return A + B;
}

int Input();

void Tick(int KeyCode);

void Render();

#endif //__ENGINE_H__