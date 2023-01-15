#pragma once
#include"CongDan.h"
class CongNhan : public CongDan
{
	char CongTy[100];
	int SoSP;
	int SoNgayLam;
public:
	CongNhan();
	~CongNhan();
	void NhapThongTin();
	void XuatThongTin();
};