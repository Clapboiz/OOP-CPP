#include "TamGiac.h"

TamGiac::TamGiac(int n)
{
	thaotac = new ThaoTac();
}

TamGiac::~TamGiac()
{
	delete thaotac;
}

void TamGiac::Nhap()
{
	cout << "Tam giac\n";
	for (int i = 0; i < 3; i++) {
		thaotac[i].Nhap();
	}
}

void TamGiac::Xuat()
{
	cout << "Tam giac: ";
	for (int i = 0; i < 3; i++) {
		thaotac[i].Xuat();
		cout << ' ';
	}
}

void TamGiac::TinhTien(ThaoTac other)
{
	for (int i = 0; i < 3; i++) {
		thaotac[i].TinhTien(other);
	}
}

void TamGiac::TinhTien(float x, float y)
{
	TinhTien(ThaoTac(x, y));
}