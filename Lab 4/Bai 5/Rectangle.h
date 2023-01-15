#pragma once
#include "Polygon.h"
class Rectangle : public Polygon
{
	float height;
	float width;

public:
	Rectangle();
	Rectangle(vector<Point> p, float height, float width);
	float Area();
	void setHeight(int height);
	void setWidth(int width);
	float getHeight();
	float getWidth();
};