#include<iostream>
using namespace std;


class A {
protected:
	int a;
	void disPrtA() {
		cout << "A:Method of protected" << endl;
	}
public:
	A() {
		a = 10;
	}
	void dispA() {
		cout << "A:a=" << a << endl;
	}
};

class B : public A {
public:
	void dispB() {
		a = 20;
		disPrtA();
		dispA();
	}
};

int main() {
	B b;
	b.dispB();
	
}