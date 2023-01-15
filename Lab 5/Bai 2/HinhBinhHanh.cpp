#include "HinhBinhHanh.h"

HinhBinhHanh::HinhBinhHanh() : TuGiac()
{
}

HinhBinhHanh::~HinhBinhHanh()
{
	delete thaotac;
}

bool HinhBinhHanh::KiemTra()
{
	if (!(thaotac[2] - thaotac[3] == thaotac[1] - thaotac[0])) {
		return false;
	}
	if (!(thaotac[3] - thaotac[0] == thaotac[2] - thaotac[1])) {
		return false;
	}
	return true;
}

void HinhBinhHanh::Nhap()
{
	cout << "Hinh binh hanh\n";
	for (int i = 0; i < 4; i++) {
		thaotac[i].Nhap();
	}
	if (!KiemTra()) Nhap();
}

void HinhBinhHanh::Xuat()
{
	cout << "Hinh binh hanh: ";
	for (int i = 0; i < 4; i++) {
		thaotac[i].Xuat();
		cout << ' ';
	}
}