#include<iostream>
#include<math.h>
using namespace std;
class SoPhuc
{

public:
	void Nhap();
	void Xuat();
	SoPhuc Cong(SoPhuc);
	SoPhuc Tru(SoPhuc);
	SoPhuc Nhan(SoPhuc);
	SoPhuc Chia(SoPhuc);
	float DinhGiaTri();
private:
	float Thuc, Ao;
}; 