#pragma once
#include "DaGiac.h"
#include "TamGiac.h"
#include "TuGiac.h"
#include "HinhBinhHanh.h"
#include "HinhChuNhat.h"
#include "HinhVuong.h"

int main() {
	ThaoTac x(1, 1);
	TuGiac* c = new HinhBinhHanh();
	c->Nhap();
	cout << c->KiemTra() << endl;
	c->TinhTien(x);
	c->Xuat();
	cout << endl;
	TuGiac* d = new HinhChuNhat();
	d->Nhap();
	cout << d->KiemTra() << endl;
	d->TinhTien(x);
	d->Xuat();
	cout << endl;
	TuGiac* e = new HinhVuong();
	e->Nhap();
	cout << e->KiemTra() << endl;
	e->TinhTien(x);
	e->Xuat();
	cout << endl;
	return 0;
}