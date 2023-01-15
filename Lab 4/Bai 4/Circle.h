#include "Eclipse.h"

class Circle : public Eclipse
{
	float r;

public:
	Circle();
	Circle(float x, float y, float r);

	virtual void input();

	void setR(float r);
	float getR();

	float Area();
	float Perimeter();
};