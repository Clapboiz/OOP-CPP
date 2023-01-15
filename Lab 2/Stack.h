#define MAX 100

class Stack {
private:
	int array[100];
	int n = -1;
public:
	Stack() {};
	~Stack() {};
	bool isEmpty();
	bool isFull();
	bool push(int);
	bool pop(int&);
};