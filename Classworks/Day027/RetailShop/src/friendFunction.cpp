#include<iostream>
using namespace std;

class M;//forward declaration or empty class...

class T {
private:
	int val;

public:
	T(int v) {
		val = v;
	}
	void disp() {
		cout << val << endl;
	}

	friend void func1(T&);
};

class M {
private:
	int j;
public:
	M(int v) {
		j = v;
	}

	void func1(T& t, M& m) {
		t.disp();
		m.disp();
		t.val = 1001;
		m.j = 2002;

	}
};




void func1( T& t) {
	t.disp();
	t.val = 100;
}


int main() {

	/*static int* a = new int(10);
	delete a;
	*a = 101;*/


	T t1(10);
	func1(t1);

	t1.disp();

	return 0;
}