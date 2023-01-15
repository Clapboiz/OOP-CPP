#include "Eclipse.h"

Eclipse::Eclipse()
{
	center.x = 0;
	center.y = 0;
	a = 0;
	b = 0;
}

Eclipse::Eclipse(float x, float y, float a, float b)
{
	this->center = Point(x, y);
	this->a = a;
	this->b = b;
}

void Eclipse::input()
{
	cout << "Nhap x: ";
	cin >> center.x;
	cout << "Nhap y: ";
	cin >> center.y;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
}

void Eclipse::setCenter(float x, float y)
{
	this->center = Point(x, y);
}

void Eclipse::setA(float a)
{
	this->a = a;
}

void Eclipse::setB(float b)
{
	this->b = b;
}

Point Eclipse::getCenter()
{
	return center;
}

float Eclipse::getA()
{
	return a;
}

float Eclipse::getB()
{
	return b;
}

float Eclipse::Area()
{
	return 3.14 * a * b;
}

float Eclipse::Perimeter()
{
	return 3.14 * (3 * (a + b) - sqrt((3 * a + b) * (a + 3 * b)));
}