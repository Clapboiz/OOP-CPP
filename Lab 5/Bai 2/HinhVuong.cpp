#include "HinhVuong.h"

HinhVuong::HinhVuong() : HinhChuNhat()
{
}

HinhVuong::~HinhVuong()
{
	delete thaotac;
}

bool HinhVuong::KiemTra()
{
	if (!(HinhChuNhat::KiemTra())) return false;
	if (thaotac[0].distance(thaotac[3]) == thaotac[0].distance(thaotac[1])) return true;
	return false;
}

void HinhVuong::Nhap()
{
	cout << "Hinh vuong\n";
	for (int i = 0; i < 4; i++) {
		thaotac[i].Nhap();
	}
	if (!KiemTra()) Nhap();
}

void HinhVuong::Xuat()
{
	cout << "Hinh vuong: ";
	for (int i = 0; i < 4; i++) {
		thaotac[i].Xuat();
		cout << ' ';
	}
}