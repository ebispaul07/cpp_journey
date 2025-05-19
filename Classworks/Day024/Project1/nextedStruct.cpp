#include<iostream>
using namespace std;

typedef struct Employee {

	int id;
	struct Address {
		int hno;
	}ADD;

}EMP;


int main() {
	EMP e;

	e.id = 29;
	e.ADD.hno = 22;

	cout << e.id<<endl;
	cout << e.ADD.hno;


}