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

	void display() {
		cout << "Address of data: " << data << endl;
		cout << "\t" << *data << endl;
		
		}
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


}






