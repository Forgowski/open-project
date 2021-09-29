#include "win.h"



Win::Win()
{
	W.create(VideoMode(1920, 1080, 32), "window");
	W.setFramerateLimit(60);
	W.setActive();
}

void Win::IfEsc()
{
	if (e.type == Event::Closed || (Keyboard::isKeyPressed(Keyboard::Escape))) W.close();
}

void Win::EveryFrame()
{
	IfEsc();
	W.clear(Color(100,0,0));
	W.display();
}