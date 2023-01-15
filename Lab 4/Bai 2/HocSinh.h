#pragma once
#include "CongDan.h"
class HocSinh : public CongDan
{
	char Lop[30];
	float DTB;

public:
	HocSinh();
	~HocSinh();
	void NhapThongTin();
	void XuatThongTin();
};