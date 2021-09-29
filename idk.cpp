#include "Header.h"
int main()
{
	Win game;
	while (game.W.isOpen())
	{
		game.EveryFrame();
	}
}