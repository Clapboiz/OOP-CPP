#include "quanlynhanvien.h"
#include"vanphong.h"
#include"sanxuat.h"

quanlynhanvien::quanlynhanvien(void)
{
	n = 0;
	x = new nhanvien * [1000];
}


quanlynhanvien::~quanlynhanvien(void)
{
	delete[]x;
}
void quanlynhanvien::nhap()
{
	int k;
	for (int i = 0;; i++)
	{
		do {
			cout << "\nloai nhan vien: \n1-van phong\n2-san xuat\n0-ket thuc\n";
			cin >> k;
			if (k != 1 && k != 2 && k != 0) cout << "\nkhong hop le!\n";
		} while (k != 1 && k != 2 && k != 0);
		if (k == 0) return;
		else if (k == 1)
		{
			n++;
			x[i] = new vanphong;
		}
		else
		{
			n++;
			x[i] = new sanxuat;
		}
		x[i]->nhap();
	}
}
void quanlynhanvien::xuat()
{
	cout << "so nhan vien = " << n << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		x[i]->xuat();
		cout << "luong = " << x[i]->luong();
		cout << endl;
	}
}