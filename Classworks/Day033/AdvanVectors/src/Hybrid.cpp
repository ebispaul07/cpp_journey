#include<iostream>
#include<Windows.h>
using namespace std;

class A {
public:
	void dispA() {
		cout << "A";
	}
};

class B:virtual public A {
public:
	void dispB() {
		cout << "B";
	}
};

class C:virtual public A {
public:
	void dispC() {
		cout << "C";
	}
};

class D : public B,  public C {
public:
	void dispD() {
		cout << "D";
	}
};

int main() {
	
	D d;
	d.dispA();
	d.dispB();
	
	d.dispC();

	d.dispD();

	 

	cout << endl;

	//system("cls");//clear screen
	//system("pause");//it print enter any key to continue	
	//Sleep(20000);
	//ceil(x);upperValue
	//floor(x);
	//rand();
	//srand(time(0));//seed ranom with system time

}