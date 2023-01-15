#include "SinhVien.h"
#include <iostream>

using namespace std;
SinhVien::SinhVien()
{
	cout << "Khoi tao SV" << endl;
}
SinhVien::~SinhVien()
{
	cout << "Huy SV" << endl;
}
void SinhVien::NhapThongTin()
{
	cout << "NHAP THONG TIN SINH VIEN" << endl;
	CongDan::NhapThongTin();
	cout << "Nhap MSSV: ";
	cin >> this->MSSV;
	cout << "Nhap khoa: ";
	cin >> this->Khoa;
	cout << "Nhap lop: ";
	cin >> this->Lop;
	cout << "Nhap GPA: ";
	cin >> this->GPA;
}
void SinhVien::XuatThongTin()
{
	cout << "XUAT THONG TIN SINH VIEN" << endl;
	CongDan::XuatThongTin();
	cout << this->MSSV << endl;
	cout << this->Khoa << endl;
	cout << this->Lop << endl;
	cout << this->GPA << endl;
}