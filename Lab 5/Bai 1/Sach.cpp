#include "Sach.h"

void Sach::Nhap() {
	cout << "Nhap ten: ";
	cin.ignore();
	getline(cin, Ten);
	cout << "Nhap so trang: ";
	cin >> SoTrang;
}

void Sach::Xuat() {
	cout << "Ten: " << Ten << endl;
	cout << "So trang: " << SoTrang << endl;
}