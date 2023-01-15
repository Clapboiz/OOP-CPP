#include <iostream>
#include "String.h"
using namespace std;

String::String(char _a[]) {
	*length = -1;
	while (*(_a + ++*length))
	{
		*(a + *length) = *(_a + *length);
	}
}

void String::overwrite(char _a[]) {
	*length = -1;
	while (*(_a + ++*length))
	{
		*(a + *length) = *(_a + *length);
	}
}

int String::getLength() {
	return *length;
}

void String::concat(String S) {
	for (int i=0; i<S.getLength(); ++i) {
		*(a + (*length + i)) = *(S.a + i);
	}
	*length += S.getLength();
}

void String::reverse() {
	for (int i=0; i<getLength()/2; ++i) {
		swap(*(a + i), *(a + (getLength() - i-1)));
	}
}

void String::input() {
	char t[MAX_LENGTH];
	cin.clear();
	cout << "Enter your string: ";
 	cin.getline(t, MAX_LENGTH);
	overwrite(t);
}

void String::display(bool endline = false) {
	for (int i=0; i<getLength(); ++i) cout << *(a + i);
	if (endline) cout << endl;
}