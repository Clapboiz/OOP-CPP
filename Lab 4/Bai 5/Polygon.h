#pragma once
#include <bits/stdc++.h>
using namespace std;
struct Point
{
	float x;
	float y;
	Point(int x = 0, int y = 0)
	{
		this->x = x;
		this->y = y;
	}
	static float distance(Point a, Point b)
	{
		return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
	}
};
class Polygon
{
	vector<Point> p;

public:
	Polygon();
	Polygon(vector<Point> p);

	float Perimeter();
	float Area();

	void input();
	void display();

	void setPoint(vector<Point> p);
	vector<Point> getPoint();
};