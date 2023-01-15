#include "CTimeSpan.h"
using namespace std;
int main()
{
	CTimeSpan a(1, 2, 3, 4);
	CTimeSpan b(5, 6, 7, 8);

	cout << a << endl;
	cout << b << endl;

	cout << "a + b =" << (a + b) << endl;
	cout << "b - a =" << (b - a) << endl;

	cout << "a == b: " << ((a == b) ? "YES" : "NO") << endl;
	cout << "a != b: " << ((a != b) ? "YES" : "NO") << endl;
	cout << "a >= b: " << ((a >= b) ? "YES" : "NO") << endl;
	cout << "a <= b: " << ((a <= b) ? "YES" : "NO") << endl;
	cout << "a > b: " << ((a > b) ? "YES" : "NO") << endl;
	cout << "a < b: " << ((a < b) ? "YES" : "NO") << endl;

	return 0;
}