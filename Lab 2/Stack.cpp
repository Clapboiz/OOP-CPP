#include "Stack.h"

bool Stack::isEmpty() {
	return (n < 0);
}

bool Stack::isFull() {
	return (n >= MAX);
}

bool Stack::push(int x) {
	if (isFull()) return false;
	array[++n] = x;
	return true;
}

bool Stack::pop(int &x) {
	if (isEmpty()) return false;
	x = array[n--];
	return true;
}
