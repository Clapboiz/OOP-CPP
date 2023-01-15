#include "CongNhan.h"
#include "CaSi.h"
#include <iostream>

using namespace std;
CaSi::CaSi()
{
	cout << "Khoi tao CS" << endl;
}
CaSi::~CaSi()
{
	cout << "Huy CS" << endl;
}
void CaSi::NhapThongTin()
{
	cout << "NHAP THONG TIN CA SI" << endl;
	CongDan::NhapThongTin();
	fflush(stdin);
	cout << "Nhap nghe danh: ";
	cin.getline(this->NgheDanh, 100);
	cout << "Nhap so bai hat: ";
	cin >> this->SoBaiHat;
	cout << "Nhap cat xe: ";
	cin >> this->CatXe;
}
void CaSi::XuatThongTin()
{
	cout << "XUAT THONG TIN CA SI" << endl;
	CongDan::XuatThongTin();
	cout << this->NgheDanh << endl;
	cout << this->SoBaiHat << endl;
	cout << this->CatXe << endl;
}
