#include "HocSinh.h"
#include <iostream>

using namespace std;
HocSinh::HocSinh()
{
	cout << "Khoi tao HS" << endl;
}
HocSinh::~HocSinh()
{
	cout << "Huy HS" << endl;
}
void HocSinh::NhapThongTin()
{
	cout << "NHAP THONG TIN	HOC SINH" << endl;
	CongDan::NhapThongTin();
	fflush(stdin);
	cout << "Nhap lop: ";
	cin.getline(this->Lop, 30);
	cout << "Nhap diem trung binh: ";
	cin >> this->DTB;
}
void HocSinh::XuatThongTin()
{
	cout << "XUAT THONG TIN HOC SINH" << endl;
	CongDan::XuatThongTin();
	cout << this->Lop << endl;
	cout << this->DTB << endl;
}