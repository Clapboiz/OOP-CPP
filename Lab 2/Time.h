class Time {
private:
	int h,m,s;
public:
	Time(int _h = 0, int _m = 0, int _s = 0) {h = _h; m = _m; s = _s;};
	~Time() {};
	bool isValid();
	void setHour(int);
	void setMin(int);
	void setSec(int);
	void set(int, int, int);
	int getHour();
	int getMin();
	int getSec();
	void input();
	void display(bool);
	void normalize();
	void pass(Time);
};