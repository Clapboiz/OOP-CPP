#include "ThaoTac.h"

ThaoTac::ThaoTac(float _x, float _y)
{
	x = _x;
	y = _y;
}

ThaoTac::~ThaoTac()
{

}

void ThaoTac::Nhap()
{
	cout << "(x, y) = ";
	cin >> x >> y;
}

void ThaoTac::Xuat()
{
	cout << "(" << x << ", " << y << ")" << " ";
}

float ThaoTac::distance(ThaoTac other)
{
	return sqrt((other.x - x) * (other.x - x) + (other.y - y) * (other.y - y));
}

void ThaoTac::TinhTien(ThaoTac other)
{
	x += other.x;
	y += other.y;
}

bool ThaoTac::operator==(ThaoTac other)
{
	return (x == other.x && y == other.y);
}

ThaoTac ThaoTac::operator-()
{
	return ThaoTac(-x, -y);
}

ThaoTac ThaoTac::operator-(ThaoTac other)
{
	return this->operator+(-other);
}

ThaoTac ThaoTac::operator+(ThaoTac other)
{
	return (x + other.x, y + other.y);
}