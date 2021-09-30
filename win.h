#pragma once
#include "includs.h"

class Win
{
public:
	RenderWindow W;
	Event e;
	Win();
	vector <RectangleShape> VR;
	void IfEsc();
	void BeginOfFrame();
	void EndOfFrame();
	void AddRectangleShape();
};

