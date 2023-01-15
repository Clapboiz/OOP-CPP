#include "SoPhuc.h"
#include <iostream>
using namespace std;

int main()
{
	SoPhuc a(1, 2), b(3, 4);
	cout << a / b;
	cout << (a <= b);
	return 0;
}