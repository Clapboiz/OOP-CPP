#include "Sgk.h"

void Sgk::Nhap() {
	Sach::Nhap();
	cout << "Nhap nha xuat ban: ";
	cin.ignore();
	getline(cin, NhaXuatBan);
}

void Sgk::Xuat() {
	cout << "\nSach giao khoa: " << endl;
	Sach::Xuat();
	cout << "Nha xuat ban: " << NhaXuatBan << endl;
}