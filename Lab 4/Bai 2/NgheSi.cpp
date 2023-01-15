#include "CongNhan.h"
#include "NgheSi.h"
#include <iostream>

using namespace std;
NgheSi::NgheSi()
{
	cout << "Khoi tao NS" << endl;
}
NgheSi::~NgheSi()
{
	cout << "Huy NS" << endl;
}
void NgheSi::NhapThongTin()
{
	cout << "NHAP THONG TIN NGHE SI" << endl;
	CongDan::NhapThongTin();
	fflush(stdin);
	cout << "Nhap nghe danh: ";
	cin.getline(this->NgheDanh, 100);
	cout << "Nhap linh vuc hoat dong: ";
	cin.getline(this->LinhVuc, 100);
	cout << "Nhap cat xe: ";
	cin >> this->CatXe;
}
void NgheSi::XuatThongTin()
{
	cout << "XUAT THONG TIN NGHE SI" << endl;
	CongDan::XuatThongTin();
	cout << this->NgheDanh << endl;
	cout << this->LinhVuc << endl;
	cout << this->CatXe << endl;
}