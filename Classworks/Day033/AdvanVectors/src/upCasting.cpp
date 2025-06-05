#include<iostream>
using namespace std;

class Base {
public:

	virtual void disp() {///virtual is created
		cout << "Base" << endl;
	}
};

class Derived :public Base {
public:
	void disp() override {//override for check any typo mistakes &&& for Error checking
		cout << "Derived" << endl;//&&it check compile time
	}
};

int main() {
	Derived d;
	Base* ptr = &d;

	ptr->disp();

	/*Base* b = new Derived();
	b->disp();*/

	

}