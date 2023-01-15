#include "CongDan.h"
#include <iostream>

using namespace std;
CongDan::CongDan()
{
	cout << "Khoi tao cong dan" << endl;
}
CongDan::~CongDan()
{
	cout << "Huy cong dan" << endl;
}
void CongDan::NhapThongTin()
{
	fflush(stdin);
	cout << "Nhap ho ten: ";
	cin.getline(this->HoTen, 30);
	cout << "Nhap ngay sinh: ";
	cin.getline(this->NgaySinh, 30);
	cout << "Nhap gioi tinh: ";
	cin.getline(this->GioiTinh, 10);
	cout << "Nhap dia chi thuong chu: ";
	cin.getline(this->DiaChiTT, 100);
	cout << "Nhap nguyen quan: ";
	cin.getline(this->NguyenQuan, 100);
	cout << "Nhap dan toc: ";
	cin.getline(this->DanToc, 100);
	cout << "Nhap ton giao: ";
	cin.getline(this->TonGiao, 100);
}
void CongDan::XuatThongTin()
{
	cout << this->HoTen << endl;
	cout << this->NgaySinh << endl;
	cout << this->GioiTinh << endl;
	cout << this->DiaChiTT << endl;
	cout << this->NguyenQuan << endl;
	cout << this->DanToc << endl;
	cout << this->TonGiao << endl;
}