#include<iostream>
using namespace std;




class A {
	int a;
public:
	A(int x) :a(x) {
		cout << "Construc A called" << endl;
	}
	~A() {
		cout << "Destructors A called" << endl;
	}
		void disp() {
			cout << "a=" << a << endl;
		}
	
};

class B {
	int b;
public:
	B(int y) :b(y) {
		cout << "Construc B called" << endl;
	}
	~B(){
		cout << "Destructors B called" << endl;
	}
	void disp() {
		cout << "b=" << b << endl;
	}

};

class C:public A,public B{
	int c;
public:
	C(int x,int y,int z) :A(x),B(y),c(z) {
		cout << "Construc C called" << endl;
	}
	~C() {
		cout << "Destructors C called" << endl;
	}
	void disp() {
		cout << "c=" << c << endl;
	}

};


int main() {
	C c1(10, 20, 30);


}
