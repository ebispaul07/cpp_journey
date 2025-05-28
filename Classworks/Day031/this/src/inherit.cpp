#include<iostream>
using namespace std;

class A {
private:
	int x;
protected:
	int y;

	void proMethod() {
		cout << "A protected Method Called" << endl;
	}

public:
	A() {
		x = 10;
		y = 20;
		cout << "A constructor Got Called" << endl;
	}

	void displayA() {
		cout << "hello from A" << endl;
		cout << "X =" << x << "\tY= " << y << endl;
	}
};

class B :public A {
private:
	int a;
protected:
	int b;
public:
	B() {
		a = 11;
		b = 22;
		cout << "B Contructor Got Called" << endl;
	}
	void displayB() {
		cout << "hello from B" << endl;
		cout << "a =" << a << "\tb= " << b << endl;
	}

	void protectB() {
		proMethod();
		y = 203;
		cout << y;
	}
};


int main() {


	A a1;
	B b1;

	//a1.displayA();
	b1.displayA();
	b1.displayB();

	b1.protectB();
	
	

}