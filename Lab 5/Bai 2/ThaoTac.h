#pragma once
#include <math.h>
#include <iostream>
using namespace std;

class ThaoTac
{
public:
	float x, y;
	// constructor
	ThaoTac(float x = 0, float y = 0);
	~ThaoTac();
	void Nhap();
	void Xuat();
	float distance(ThaoTac other);
	void TinhTien(ThaoTac other);
	bool operator ==(ThaoTac other);
	ThaoTac operator-();
	ThaoTac operator-(ThaoTac other);
	ThaoTac operator+(ThaoTac other);
};