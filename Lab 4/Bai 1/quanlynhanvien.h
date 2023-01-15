#pragma once
#include"nhanvien.h"
#include<vector>
using namespace std;
class quanlynhanvien
{
private:
	nhanvien** x;
	int n;
public:
	quanlynhanvien(void);
	~quanlynhanvien(void);
	void nhap();
	void xuat();
};
