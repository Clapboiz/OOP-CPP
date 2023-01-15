#pragma once
#include<iostream>
using namespace std;
class ToaDo
{
public:
	ToaDo();
	void Nhap();
	void Xuat();
	void TinhTien();
	float LayTung();
	float LayHoanh();
	void SuaTung(float y);
	void SuaHoanh(float x);

private:
	float Tung, Hoanh;
};