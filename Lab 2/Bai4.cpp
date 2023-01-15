#include <iostream>
#include "Stack.h"
using namespace std;

void BaseConvert(int a, int base) { // base la co so (2 -> Bin; 8 -> Oct; 16 -> Hex)
	Stack s;
	while (a > 0) {
		s.push(a % base);
		a /= base;
	}
	while (not s.isEmpty()) {
		int x;
		s.pop(x);
		switch (x) {
			case 10:
				cout << 'A';
				break;
			case 11:
				cout << 'B';
				break;
			case 12:
				cout << 'C';
				break;
			case 13:
				cout << 'D';
				break;
			case 14:
				cout << 'E';
				break;
			case 15:
				cout << 'F';
				break;
			default:
				cout << x;
		}
	}
	cout << endl;
}

int main() {
	int a = 6283;
	BaseConvert(a, 2);
	BaseConvert(a, 8);
	BaseConvert(a, 16);
}