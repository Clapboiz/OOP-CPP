#pragma once
#include"CongDan.h"
class SinhVien : public CongDan
{
	int MSSV;
	char Lop[100];
	char Khoa[100];
	float GPA;

public:
	SinhVien();
	~SinhVien();
	void NhapThongTin();
	void XuatThongTin();
};