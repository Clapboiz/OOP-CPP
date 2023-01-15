#include "TieuThuyet.h"

void TieuThuyet::Nhap() {
	Sach::Nhap();
	cout << "Nhap ten tac gia: ";
	cin.ignore();
	getline(cin, TacGia);
}

void TieuThuyet::Xuat() {
	cout << "\nTieu thuyet: " << endl;
	Sach::Xuat();
	cout << "Ten tac gia: " << TacGia << endl;
}