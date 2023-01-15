#include <iostream>
#include "Time.h"
using namespace std;

bool Time::isValid() {
	if (not ((h >= 0 && h <= 23) && (m >= 0 && m <= 59) && (s >= 0 && s <= 59))) {
		cout << "Time's properties are invalid!" << endl;
		return false;
	}
	return true;
}

void Time::setHour(int _h) {h = _h;}
void Time::setMin(int _m) {m = _m;}
void Time::setSec(int _s) {s = _s;}

void Time::set(int _h, int _m, int _s) {
	setHour(_h); setMin(_m); setSec(_s);
}

int Time::getHour() {return h;}
int Time::getSec() {return m;}
int Time::getMin() {return s;}

void Time::input() {
	do {
		cout << "Enter Hours: "; cin >> h;
		cout << "Enter Minutes: "; cin >> m;
		cout << "Enter Seconds: "; cin >> s;
	} while (not isValid());
}

void Time::display(bool type = false) { // False -> 24h || True -> AM/PM
	if (type)
		cout << (h>12? h-12: h) << ':' << m << ':' << s << (h>12? " PM": " AM");
	else
		cout << h << ':' << m << ':' << s;
	cout << endl;
}

void Time::normalize() {
	while (h>=24) h-=24;
	while (m>=60) m-=60;
	while (s>=60) s-=60;
}

void Time::pass(Time a) {
	cout << "Time after " << a.h << " hours, " << a.m << " minutes, " << a.s << " seconds will be:" << endl;
	h += a.h;
	m += a.m;
	s += a.s;
	normalize();
}