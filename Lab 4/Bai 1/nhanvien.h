#pragma once
#include<iostream>
using namespace std;
class nhanvien
{
protected:
	char hoten[100];
	int ngay, thang, nam;
public:
	nhanvien(void);
	~nhanvien(void);
	virtual void nhap();
	virtual void xuat();
	virtual long luong();
};