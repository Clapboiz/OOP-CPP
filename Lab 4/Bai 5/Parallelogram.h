#pragma once
#include "Polygon.h"

class Parallelogram : public Polygon
{
	float hight;
	float longEdge;
	float shortEdge;

public:
	Parallelogram();
	Parallelogram(float hight, float longEdge, float shortEdge);

	float Area();
	bool check();

	void setHight(float higt);
	void setLongEdge(float longEdge);
	void setShortEdge(float shortEdge);

	float getHight();
	float getLongEdge();
	float getShortEdge();
};