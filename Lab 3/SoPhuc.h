#pragma once
#include <iostream>
using namespace std;
class SoPhuc
{
	float thuc;
	float ao;

public:
	SoPhuc(float thuc = 0, float ao = 0);
	~SoPhuc();
	float Modulo();
	friend ostream& operator<<(ostream& out, SoPhuc c);
	friend istream& operator>>(istream& out, SoPhuc& c);
	SoPhuc& operator+(SoPhuc& c);
	SoPhuc& operator-(SoPhuc& c);
	SoPhuc& operator*(SoPhuc& c);
	SoPhuc& operator/(SoPhuc& c);
	/*
	a b c; a + b + c
	*/
	bool operator==(SoPhuc& c);
	bool operator>=(SoPhuc& c);
	bool operator<=(SoPhuc& c);
	bool operator>(SoPhuc& c);
	bool operator<(SoPhuc& c);
	bool operator!=(SoPhuc& c);

	void setThuc(float thuc);
	void setAo(float ao);
	float getThuc();
	float getAo();
};