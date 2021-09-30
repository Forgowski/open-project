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

void Win::BeginOfFrame()
{
	IfEsc();
	W.clear(Color(100, 0, 0));
}

void Win::EndOfFrame()
{

	W.display();
}
void Win::AddRectangleShape()
{
	if (this->e.type == Event::MouseButtonReleased && this->e.mouseButton.button == Mouse::Left)
	{
		RectangleShape A;
		A.setFillColor(Color::Blue);
		A.setSize(Vector2f(20, 20));
		A.setPosition(Vector2f(Mouse::getPosition(this->W)));
		VR.push_back(A);
	}
	else if (this->e.type == Event::MouseButtonReleased && this->e.mouseButton.button == Mouse::Right)
	{
		VR.pop_back();
	}
}
