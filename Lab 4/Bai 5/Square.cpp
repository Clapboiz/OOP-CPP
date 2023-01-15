#include "Square.h"

Square::Square()
{
	edge = 0;
}

Square::Square(float edge)
{
	this->edge = edge;
}

float Square::Area()
{
	return edge * edge;
}

void Square::setEdge(float edge)
{
	this->edge = edge;
}

float Square::getEdge()
{
	return edge;
}

bool Square::check()
{
	return getWidth() == getHeight();
}