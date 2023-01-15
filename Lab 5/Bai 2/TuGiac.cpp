#include "TuGiac.h"

TuGiac::TuGiac(int n)
{
	thaotac = new ThaoTac();
}

TuGiac::~TuGiac()
{
	delete thaotac;
}

void TuGiac::Nhap()
{
	cout << "Tu giac\n";
	for (int i = 0; i < 4; i++) {
		thaotac[i].Nhap();
	}
}

void TuGiac::Xuat()
{
	cout << "Tu giac: ";
	for (int i = 0; i < 4; i++) {
		thaotac[i].Xuat();
		cout << ' ';
	}
}

void TuGiac::TinhTien(ThaoTac other)
{
	for (int i = 0; i < 4; i++) {
		thaotac[i].TinhTien(other);
	}
}

void TuGiac::TinhTien(float x, float y)
{
	TinhTien(ThaoTac(x, y));
}