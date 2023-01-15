#pragma once
#include <bits/stdc++.h>
using namespace std;

class PhanSo
{
	int tu;
	int mau;

public:
	PhanSo(int tu = 1, int mau = 1);
	~PhanSo();

	float value();
	PhanSo lamtron();
	void setTu(int tu);
	void setMau(int mau);
	int getTu();
	int getMau();

	friend istream& operator>>(istream& in, PhanSo& c);
	friend ostream& operator<<(ostream& out, PhanSo c);

	PhanSo& operator+(PhanSo& c);
	PhanSo& operator-(PhanSo& c);
	PhanSo& operator*(PhanSo& c);
	PhanSo& operator/(PhanSo& c);

	bool operator==(PhanSo& c);
	bool operator!=(PhanSo& c);
	bool operator>=(PhanSo& c);
	bool operator<=(PhanSo& c);
	bool operator>(PhanSo& c);
	bool operator<(PhanSo& c);
};