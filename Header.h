#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include<SFML/Window.hpp>

using namespace std;
using namespace sf;

class Cube
{
public:
	int height;
	int width;
	int weight;

	Cube(int height,int width, int weight)
	{
		this->height = height;
		this->width = width;
		this->weight = weight;
		cout << "Hello im new cube"<<endl;
		cout << "My height: " << height << endl << "My width: " << width << endl << "My weight: " << weight << endl;
	}
};