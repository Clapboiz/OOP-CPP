#include "nhanvien.h"
nhanvien::nhanvien(void)
{
}
nhanvien::~nhanvien(void)
{
}
void nhanvien::nhap()
{
	cout << "ho ten:"; fflush(stdin); gets(hoten);
	cout << "ngay sinh d/m/y :";
	cin >> ngay; cin.ignore(); cin >> thang; cin.ignore(); cin >> nam;
}
void nhanvien::xuat()
{
	cout << hoten << endl << "ngay sinh: " << ngay << "/" << thang << "/" << nam << endl;
}
long nhanvien::luong()
{
	return 0;
}