#include "SoPhuc.h"
void SoPhuc::Nhap()
{
	cout << "Nhap phan thuc: ";
	cin >> this->Thuc;
	cout << "Nhap phan ao: ";
	cin >> this->Ao;
}
void SoPhuc::Xuat()
{
	if (this->Ao == 0)
	{
		cout << this->Thuc << endl;
	}
	else if (this->Ao < 0)
	{
		if (this->Thuc == 0)
		{
			cout << this->Ao << endl;
		}
		else
		{
			cout << this->Thuc << this->Ao << "i" << endl;
		}
	}
	else
	{
		if (this->Thuc == 0)
		{
			cout << this->Ao << endl;
		}
		else
		{
			cout << this->Thuc << "+" << this->Ao << "i" << endl;
		}
	}
}
SoPhuc SoPhuc::Cong(SoPhuc a)
{
	SoPhuc kq;
	kq.Thuc = this->Thuc + a.Thuc;
	kq.Ao = this->Ao + a.Ao;
	return kq;
}
SoPhuc SoPhuc::Tru(SoPhuc a)
{
	SoPhuc kq;
	kq.Thuc = this->Thuc - a.Thuc;
	kq.Ao = this->Ao - a.Ao;
	return kq;
}
SoPhuc SoPhuc::Nhan(SoPhuc a)
{
	SoPhuc kq;
	kq.Thuc = this->Thuc * a.Thuc - this->Ao * a.Ao;
	kq.Ao = this->Thuc * a.Ao + this->Ao * a.Thuc;
	return kq;
}
SoPhuc SoPhuc::Chia(SoPhuc a)
{
	SoPhuc kq;
	kq.Thuc = ((this->Thuc * a.Thuc) + (this->Ao * a.Ao)) / (pow(a.Thuc, 2) + pow(a.Ao, 2));
	kq.Ao = ((a.Thuc * this->Ao - this->Thuc * a.Ao)) / (pow(a.Thuc, 2) + pow(a.Ao, 2));
	return kq;
}
float SoPhuc::DinhGiaTri()
{
	return sqrt(pow(this->Thuc, 2) + pow(this->Ao, 2));
}