#pragma once
#include "PhanSo.h"

PhanSo::PhanSo(int tu, int mau)
{
    this->tu = tu;
    this->mau = mau;
}
PhanSo::~PhanSo() {}

float PhanSo::value()
{
    return float(tu) / mau;
}
int gcd(int a, int b) { return (b == 0) ? a : gcd(b, a % b); }
PhanSo PhanSo::lamtron()
{
    if (tu == 0 || mau == 1)
    {
        PhanSo res(tu, mau);
        return res;
    }
    int k = gcd(abs(tu), abs(mau));
    tu /= k;
    mau /= k;
    if (mau < 0)
    {
        tu *= -1;
        mau *= -1;
    }
    PhanSo res(tu, mau);
    return res;
}
void PhanSo::setTu(int tu)
{
    this->tu = tu;
}
void PhanSo::setMau(int mau)
{
    this->mau = mau;
}
int PhanSo::getTu()
{
    return tu;
}
int PhanSo::getMau()
{
    return mau;
}
istream& operator>>(istream& in, PhanSo& c)
{
    in >> c.tu >> c.mau;
    return in;
}
ostream& operator<<(ostream& out, PhanSo c)
{
    c = c.lamtron();
    if (c.mau == 1 || c.tu == 0)
    {
        out << c.tu;
    }
    else
    {
        out << c.tu << "/" << c.mau;
    }
    return out;
}
PhanSo& PhanSo::operator+(PhanSo& c)
{
    PhanSo res(tu * c.mau + c.tu * mau, mau * c.mau);
    res.lamtron();
    return res;
}
PhanSo& PhanSo::operator-(PhanSo& c)
{
    PhanSo res(tu * c.mau - c.tu * mau, mau * c.mau);
    res.lamtron();
    return res;
}
PhanSo& PhanSo::operator*(PhanSo& c)
{
    PhanSo res(tu * c.tu, mau * c.mau);
    res.lamtron();
    return res;
}
PhanSo& PhanSo::operator/(PhanSo& c)
{
    PhanSo res(tu * c.mau, mau * c.tu);
    res.lamtron();
    return res;
}
bool PhanSo::operator==(PhanSo& c)
{
    return this->value() == c.value();
}
bool PhanSo::operator!=(PhanSo& c)
{
    return this->value() != c.value();
}
bool PhanSo::operator>=(PhanSo& c)
{
    return this->value() >= c.value();
}
bool PhanSo::operator<=(PhanSo& c)
{
    return this->value() <= c.value();
}
bool PhanSo::operator>(PhanSo& c)
{
    return this->value() > c.value();
}
bool PhanSo::operator<(PhanSo& c)
{
    return this->value() < c.value();
}