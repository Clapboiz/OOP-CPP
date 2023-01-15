#include "sanxuat.h"


sanxuat::sanxuat(void)
{
}


sanxuat::~sanxuat(void)
{
}
void sanxuat::nhap()
{
	nhanvien::nhap();
	cout << "luong co ban:"; cin >> luongcoban;
	cout << "so san pham:"; cin >> sosp;
}
void sanxuat::xuat()
{
	nhanvien::xuat();
	cout << "luong co ban:" << luongcoban << endl << "so san pham :" << sosp << endl;
}
long sanxuat::luong()
{
	return luongcoban + sosp * 5000;
}