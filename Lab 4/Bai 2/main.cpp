#include "CongDan.h"
#include "CaSi.h"
#include "CongNhan.h"
#include "HocSinh.h"
#include "NgheSi.h"
#include "SinhVien.h"
#include <iostream>

using namespace std;

int main()
{
	SinhVien* a = new SinhVien;
	a->NhapThongTin();
	a->XuatThongTin();
	delete a;
}