#include "vanphong.h"


vanphong::vanphong(void)
{
}


vanphong::~vanphong(void)
{
}
void vanphong::nhap()
{
	nhanvien::nhap();
	cout << "so ngay lam viec: "; cin >> songay;
}
void vanphong::xuat()
{
	nhanvien::xuat();
	cout << "so ngay lam viec:" << songay << endl;
}
long vanphong::luong()
{
	return songay * 100000;
}