#include "PhanSo.h"

int main()
{
	PhanSo a(1, 2);
	PhanSo b(3, 4);
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a.value() << endl;
	cout << b.value() << endl;
	cout << "a == b : " << ((a == b) ? "YES" : "NO") << endl;
	cout << "a != b : " << ((a != b) ? "YES" : "NO") << endl;
	cout << "a >= b : " << ((a >= b) ? "YES" : "NO") << endl;
	cout << "a <= b : " << ((a <= b) ? "YES" : "NO") << endl;
	cout << "a > b : " << ((a > b) ? "YES" : "NO") << endl;
	cout << "a < b : " << ((a < b) ? "YES" : "NO") << endl;
}