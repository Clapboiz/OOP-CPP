#include "Rectangle.h"

Rectangle::Rectangle()
{
	height = 0;
	width = 0;
}

Rectangle::Rectangle(vector<Point> p, float height, float width) : Polygon(p)
{
	this->height = height;
	this->width = width;
}

float Rectangle::Area()
{
	return width * height;
}

void Rectangle::setHeight(int height)
{
	this->height = height;
}

void Rectangle::setWidth(int width)
{
	this->width = width;
}

float Rectangle::getHeight()
{
	return height;
}

float Rectangle::getWidth()
{
	return width;
}