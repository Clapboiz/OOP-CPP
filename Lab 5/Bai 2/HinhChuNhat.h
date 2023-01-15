#pragma once
#include "HinhBinhHanh.h"
class HinhChuNhat :
    public HinhBinhHanh
{
public:
    HinhChuNhat();
    virtual ~HinhChuNhat();
    bool KiemTra();
    void Nhap();
    void Xuat();
};
