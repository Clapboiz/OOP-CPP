#pragma once
#include "CongDan.h"
class CaSi : public CongDan
{
	int SoBaiHat;
	int CatXe;
	char NgheDanh[100];

public:
	CaSi();
	~CaSi();
	void NhapThongTin();
	void XuatThongTin();
};