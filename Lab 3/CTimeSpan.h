#pragma once
#include <iostream>
using namespace std;

class CTimeSpan
{
	int day;
	int hour;
	int minute;
	int second;

public:
	CTimeSpan(int day = 0, int hour = 0, int minute = 0, int second = 0);
	~CTimeSpan();

	// method
	int totalSecond();

	// get set
	void setDay(int day);
	void setHour(int hour);
	void setMinute(int minute);
	void setSecond(int second);
	int getDay();
	int getHour();
	int getMinute();
	int getSecond();

	// nhap xuat
	friend istream& operator>>(istream& in, CTimeSpan& c);
	friend ostream& operator<<(ostream& out, CTimeSpan c);

	// + -
	CTimeSpan operator+(CTimeSpan& c);
	CTimeSpan operator-(CTimeSpan& c);

	// toan tu
	bool operator==(CTimeSpan& c);
	bool operator!=(CTimeSpan& c);
	bool operator>=(CTimeSpan& c);
	bool operator<=(CTimeSpan& c);
	bool operator>(CTimeSpan& c);
	bool operator<(CTimeSpan& c);
};