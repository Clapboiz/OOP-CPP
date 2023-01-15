#pragma once
#include "nhanvien.h"
class sanxuat :
	virtual public nhanvien
{
private:
	long luongcoban, sosp;
public:
	sanxuat(void);
	~sanxuat(void);
	virtual void nhap();
	virtual void xuat();
	virtual long luong();
};
