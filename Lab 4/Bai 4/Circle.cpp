#include "Circle.h"

Circle::Circle()
{
	r = 0;
}

Circle::Circle(float x, float y, float r)
{
	this->center = Point(x, y);
	this->r = r;
}

void Circle::input()
{
	cout << "Nhap x, y: ";
	cin >> center.x >> center.y;
	cout << "Nhap r: ";
	cin >> r;
}

void Circle::setR(float r)
{
	this->r = r;
}

float Circle::getR()
{
	return r;
}

float Circle::Area()
{
	return r * r * 3.14;
}

float Circle::Perimeter()
{
	return 2 * r * 3.14;
}