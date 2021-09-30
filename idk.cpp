#include "Header.h"
int main()
{
	Win game;
	while (game.W.isOpen())
	{
		game.BeginOfFrame();
		game.EndOfFrame();
	}
}