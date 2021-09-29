#pragma once
#include "includs.h"

class Win
{
public:
	RenderWindow W;
	Event e;
	Win();
	void IfEsc();
	void EveryFrame();
};

