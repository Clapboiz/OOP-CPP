#pragma once
#include "TuGiac.h"
class HinhBinhHanh :
    public TuGiac
{
public:
    HinhBinhHanh();
    virtual ~HinhBinhHanh();
    bool KiemTra();
    void Nhap();
    void Xuat();
};
