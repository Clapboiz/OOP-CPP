#pragma once
#include "CongDan.h"
class NgheSi : public CongDan
{
	char NgheDanh[100];
	char LinhVuc[100];
	int CatXe;

public:
	NgheSi();
	~NgheSi();
	void NhapThongTin();
	void XuatThongTin();
};