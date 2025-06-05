#include<iostream>
using namespace std;

class myArray {
	int* data;
	int size;
public:
	myArray(int val) {
		data = new int(val);
		size = val;
	}
	myArray(const myArray& fobj) {
		cout << "Copy constructor got called" << endl;
		data = new int(*fobj.data);
	}

	void setVal(int val) {
		*data = val;
	}

	int getVal() {
		return *data;
	}

	void display() {
		cout << "Address of data: " << data << endl;
		cout << "\t" << *data << endl;

	}
	myArray operator+(const myArray& fobj) {
		return myArray(*data + *fobj.data+100);
	}

	/*myArray operator+ (const myArray& fobj) {
		return( *fobj.data+1);
	}*/


	~myArray() {
		delete data;
	}

};

int main() {

	myArray m1(10);
	m1.display();
	myArray m2 = m1;
	m2.display();

	m2.setVal(20);
	m1.display();
	m2.display();

	
	myArray m3 = m1 + m2;
	m3.display();

	myArray m4=m3+1;
	
	m4.display();
	

	

}






