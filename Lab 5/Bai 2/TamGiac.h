#pragma once
#include "DaGiac.h"
class TamGiac :
    public DaGiac
{
public:
    TamGiac(int n = 3);
    ~TamGiac();
    void Nhap();
    void Xuat();
    void TinhTien(ThaoTac other);
    void TinhTien(float x, float y);
};