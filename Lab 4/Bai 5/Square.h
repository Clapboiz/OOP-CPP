#pragma once
#include "Rectangle.h"

class Square : public Rectangle
{
	float edge;

public:
	Square();
	Square(float edge);
	float Area();
	void setEdge(float edge);
	float getEdge();
	bool check();
};