#include "CongNhan.h"
#include <iostream>

using namespace std;
CongNhan::CongNhan()
{
	cout << "Khoi tao CN" << endl;
}
CongNhan::~CongNhan()
{
	cout << "Huy CN" << endl;
}
void CongNhan::NhapThongTin()
{
	cout << "NHAP THONG TIN CONG NHAN" << endl;
	CongDan::NhapThongTin();
	cout << "Nhap cong ty: ";
	cin.getline(this->CongTy, 30);
	cout << "Nhap so san pham: ";
	cin >> this->SoSP;
	cout << "Nhap so ngay lam viec: ";
	cin >> this->SoNgayLam;
}
void CongNhan::XuatThongTin()
{
	cout << "XUAT THONG TIN CONG NHAN" << endl;
	CongDan::XuatThongTin();
	cout << this->CongTy << endl;
	cout << this->SoSP << endl;
	cout << this->SoNgayLam << endl;
}