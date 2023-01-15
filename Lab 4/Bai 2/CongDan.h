#pragma once
class CongDan
{
protected:
	char HoTen[30];
	char NgaySinh[30];
	char GioiTinh[10];
	char DiaChiTT[100];
	char NguyenQuan[100];
	char DanToc[10];
	char TonGiao[10];

public:
	CongDan();
	~CongDan();
	void NhapThongTin();
	void XuatThongTin();
};