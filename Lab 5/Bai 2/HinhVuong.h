#pragma once
#include "HinhChuNhat.h"
class HinhVuong :
    public HinhChuNhat
{
public:
    HinhVuong();
    ~HinhVuong();
    bool KiemTra();
    void Nhap();
    void Xuat();
};
