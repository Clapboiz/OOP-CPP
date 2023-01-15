#include "Trapezoid.h"

Trapezoid::Trapezoid()
{
	this->hight = 0;
	this->longEdge = 0;
	this->shortEdge = 0;
}

Trapezoid::Trapezoid(float hight, float longEdge, float shortEdge)
{
	this->hight = hight;
	this->longEdge = longEdge;
	this->shortEdge = shortEdge;
}

float Trapezoid::Area()
{
	return (longEdge + shortEdge) * hight / 2;
}

void Trapezoid::setHight(float hight)
{
	this->hight = hight;
}

void Trapezoid::setLongEdge(float longEdge)
{
	this->longEdge = longEdge;
}

void Trapezoid::setShortEdge(float shortEdge)
{
	this->shortEdge = shortEdge;
}

float Trapezoid::getHight()
{
	return hight;
}

float Trapezoid::getLongEdge()
{
	return longEdge;
}

float Trapezoid::getShortEdge()
{
	return shortEdge;
}