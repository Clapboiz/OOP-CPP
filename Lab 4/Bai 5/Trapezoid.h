#pragma once
#include "Polygon.h"

class Trapezoid : public Polygon
{
	float hight;
	float longEdge;
	float shortEdge;

public:
	Trapezoid();
	Trapezoid(float hight, float longEdge, float shortEdge);

	float Area();
	bool check();

	void setHight(float hight);
	void setLongEdge(float longEdge);
	void setShortEdge(float shortEdge);

	float getHight();
	float getLongEdge();
	float getShortEdge();
};