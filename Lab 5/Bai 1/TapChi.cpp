#include "TapChi.h"

void TapChi::Nhap() {
	Sach::Nhap();
	cout << "Ngay xuat ban: ";
	cin >> NgayXuatBan;
}

void TapChi::Xuat() {
	cout << "\nTap chi: " << endl;
	Sach::Xuat();
	cout << "Ngay xuat ban: " << NgayXuatBan << endl;
}