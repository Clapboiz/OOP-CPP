#include "SoPhuc.h"
SoPhuc::SoPhuc(float thuc, float ao)
{
    this->thuc = thuc;
    this->ao = ao;
}
SoPhuc::~SoPhuc() {}
void SoPhuc::setThuc(float thuc)
{
    this->thuc = thuc;
}
float SoPhuc::Modulo()
{
    return sqrt(thuc * thuc + ao * ao);
}
void SoPhuc::setAo(float ao)
{
    this->ao = ao;
}
float SoPhuc::getThuc()
{
    return this->thuc;
}
float SoPhuc::getAo()
{
    return this->ao;
}
ostream& operator<<(ostream& out, SoPhuc c)
{
    if (c.ao == 0)
    {
        out << c.thuc;
    }
    else if (c.thuc == 0)
    {
        out << c.ao << 'i';
    }
    else
    {
        if (c.ao > 0)
        {
            out << c.thuc << "+" << c.ao << "i";
        }
        else
        {
            out << c.thuc << c.ao << "i";
        }
    }
    return out;
}
istream& operator>>(istream& in, SoPhuc& c)
{
    in >> c.thuc >> c.ao;
    return in;
}
SoPhuc& SoPhuc::operator+(SoPhuc& c)
{
    SoPhuc res = SoPhuc(this->thuc + c.thuc, this->ao + c.ao);
    return res;
}
SoPhuc& SoPhuc::operator-(SoPhuc& c)
{
    SoPhuc res = SoPhuc(this->thuc - c.thuc, this->ao - c.ao);
    return res;
}
SoPhuc& SoPhuc::operator*(SoPhuc& c)
{
    SoPhuc res = SoPhuc(thuc * c.thuc - ao * c.ao, thuc * c.ao + ao * c.thuc);
    return res;
}
SoPhuc& SoPhuc::operator/(SoPhuc& b)
{
    SoPhuc res = SoPhuc((this->thuc * b.thuc + this->ao * b.ao) / (b.thuc * b.thuc + b.ao * b.ao), (this->ao * b.thuc - this->thuc * b.ao) / (b.thuc * b.thuc + b.ao * b.ao));
    return res;
}
bool SoPhuc::operator==(SoPhuc& c)
{
    return (thuc == c.thuc && ao == c.ao);
}
bool SoPhuc::operator!=(SoPhuc& c)
{
    return (thuc != c.thuc || ao != c.ao);
}
bool SoPhuc::operator>=(SoPhuc& c)
{
    return this->Modulo() >= c.Modulo();
}
bool SoPhuc::operator>(SoPhuc& c)
{
    return this->Modulo() > c.Modulo();
}
bool SoPhuc::operator<(SoPhuc& c)
{
    return this->Modulo() < c.Modulo();
}
bool SoPhuc::operator<=(SoPhuc& c)
{
    return this->Modulo() <= c.Modulo();
}