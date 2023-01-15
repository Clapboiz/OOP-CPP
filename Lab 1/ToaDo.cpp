#include "ToaDo.h"
ToaDo::ToaDo()
{
	Tung = Hoanh = 0;
}
void ToaDo::Nhap()
{
	cout << "Nhap hoanh do : ";
	cin >> this->Hoanh;
	cout << "Nhap tung do : ";
	cin >> this->Tung;
}
void ToaDo::Xuat()
{
	cout << "(" << this->Hoanh << ", " << this->Tung << ")" << endl;
}
float ToaDo::LayTung()
{
	return this->Tung;
}
float ToaDo::LayHoanh()
{
	return this->Hoanh;
}
void ToaDo::SuaTung(float y)
{
	Tung = y;
}
void ToaDo::SuaHoanh(float x)
{
	Hoanh = x;
}