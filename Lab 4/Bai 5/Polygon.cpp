#include "Polygon.h"
Polygon::Polygon() {}
Polygon::Polygon(vector<Point> p)
{
	this->p = p;
}

float Polygon::Perimeter()
{
	float per = 0;
	for (int i = 0; i < p.size() - 1; i++)
		per += Point::distance(p[i], p[i + 1]);
	per += Point::distance(p[0], p[p.size() - 1]);
	return per;
}

void Polygon::input()
{
	for (int i = 0; i < p.size(); i++)
	{
		cout << "Enter " << (i + 1) << "th point (x y): ";
		cin >> p[i].x >> p[i].y;
	}
}
void Polygon::display()
{
	for (int i = 0; i < p.size(); i++)
	{
		cout << (i + 1) << "th point: ";
		cout << "(" << p[i].x << "," << p[i].y << ")" << endl;
	}
}
void Polygon::setPoint(vector<Point> p)
{
	this->p = p;
}

vector<Point> Polygon::getPoint()
{
	return p;
}