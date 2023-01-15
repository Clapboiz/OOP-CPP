#pragma once
#include "ThaoTac.h"

class DaGiac
{
protected:
	ThaoTac* thaotac;
	int n;
public:
	DaGiac();
	virtual ~DaGiac();
	virtual void Nhap() = 0;
	virtual void Xuat() = 0;
	virtual void TinhTien(ThaoTac other) = 0;
	virtual void TinhTien(float x, float y) = 0;
	virtual bool KiemTra();
};