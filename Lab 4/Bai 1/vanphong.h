#pragma once
#include "nhanvien.h"
class vanphong :
	virtual public nhanvien
{
private:
	int songay;
public:
	vanphong(void);
	~vanphong(void);
	virtual void nhap();
	virtual void xuat();
	virtual long luong();
};
