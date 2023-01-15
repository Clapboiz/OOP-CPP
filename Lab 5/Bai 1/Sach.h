#pragma once
#include <iostream>
using namespace std;
#include <string>

class Sach
{
	protected:
		int SoTrang;
		string Ten;
	public:
		virtual void Nhap();
		virtual void Xuat();
};

