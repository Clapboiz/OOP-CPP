#include "HinhChuNhat.h"

HinhChuNhat::HinhChuNhat() : HinhBinhHanh()
{
}

HinhChuNhat::~HinhChuNhat()
{
	delete thaotac;
}

bool HinhChuNhat::KiemTra()
{
	if (!HinhBinhHanh::KiemTra()) return false;
	ThaoTac a = thaotac[3] - thaotac[0];
	ThaoTac b = thaotac[1] - thaotac[0];
	if (a.x * b.x + a.y * b.y == 0)  return true;
	return false;
}

void HinhChuNhat::Nhap()
{
	cout << "Hinh chu nhat\n";
	for (int i = 0; i < 4; i++) {
		thaotac[i].Nhap();
	}
	if (!KiemTra()) Nhap();
}

void HinhChuNhat::Xuat()
{
	cout << "Hinh chu nhat: ";
	for (int i = 0; i < 4; i++) {
		thaotac[i].Xuat();
		cout << ' ';

	}
}