#define MAX_LENGTH 255

class String {
private:
	char *a = new char[MAX_LENGTH];
	int *length = new int;
public:
	String(char*);
	~String() {
		delete[] a;
		delete length;
	};
	int getLength();
	void concat(String);
	void reverse();
	void overwrite(char*);
	void input();
	void display(bool);
};