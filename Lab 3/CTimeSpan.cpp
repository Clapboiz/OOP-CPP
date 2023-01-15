#include "CTimeSpan.h"

CTimeSpan::CTimeSpan(int day, int hour, int minute, int second)
{
	this->day = day;
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}
CTimeSpan::~CTimeSpan() {}
int CTimeSpan::totalSecond()
{
	return day * 86400 + hour * 3600 + minute * 60 + second;
}
void CTimeSpan::setDay(int day)
{
	this->day = day;
}
void CTimeSpan::setHour(int hour)
{
	this->hour = hour;
}
void CTimeSpan::setMinute(int minute)
{
	this->minute = minute;
}
void CTimeSpan::setSecond(int second)
{
	this->second = second;
}
int CTimeSpan::getDay()
{
	return day;
}
int CTimeSpan::getHour()
{
	return hour;
}
int CTimeSpan::getMinute()
{
	return minute;
}
int CTimeSpan::getSecond()
{
	return second;
}
istream& operator>>(istream& in, CTimeSpan& c)
{
	in >> c.day >> c.hour >> c.minute >> c.second;
	return in;
}
ostream& operator<<(ostream& out, CTimeSpan c)
{
	out << c.day << " day, " << c.hour << " hour, " << c.minute << " minute, " << c.second << " second";
	return out;
}
CTimeSpan CTimeSpan::operator+(CTimeSpan& c)
{
	CTimeSpan res(day + c.day, hour + c.hour, minute + c.minute, second + c.second);
	return res;
}
CTimeSpan CTimeSpan::operator-(CTimeSpan& c)
{
	CTimeSpan res(day - c.day, hour - c.hour, minute - c.minute, second - c.second);
	return res;
}

// toan tu
bool CTimeSpan::operator==(CTimeSpan& c)
{
	return this->totalSecond() == c.totalSecond();
}
bool CTimeSpan::operator!=(CTimeSpan& c)
{
	return this->totalSecond() != c.totalSecond();
}
bool CTimeSpan::operator>=(CTimeSpan& c)
{
	return this->totalSecond() >= c.totalSecond();
}
bool CTimeSpan::operator<=(CTimeSpan& c)
{
	return this->totalSecond() <= c.totalSecond();
}
bool CTimeSpan::operator>(CTimeSpan& c)
{
	return this->totalSecond() > c.totalSecond();
}
bool CTimeSpan::operator<(CTimeSpan& c)
{
	return this->totalSecond() < c.totalSecond();
}