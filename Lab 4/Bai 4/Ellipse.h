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
};
class Eclipse
{
protected:
	Point center;
	float a;
	float b;

public:
	Eclipse();
	Eclipse(float x, float y, float a, float b);

	virtual void input();
	void setCenter(float x, float y);
	void setA(float a);
	void setB(float b);

	Point getCenter();
	float getA();
	float getB();

	virtual float Area();
	virtual float Perimeter();
};