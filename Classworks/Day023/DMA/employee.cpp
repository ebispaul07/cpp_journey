#include<iostream>
using namespace std;




typedef struct Employee {
	int empID;
	string empName;
	
}EMP;


typedef struct period {
	int days;
	string periods;

}PRID;




void display(EMP e1) {

	cout << "ID:";
	cin >> e1.empID; 
	cout << "NAme:";
	cin>>e1.empName;


}

int getEmpDetails(EMP* e) {

	cout << "Enter Name: ";
	cin >> e->empName;

	cout << "Enter id:";
	cin >> e->empName;
	
	return 0;

}


int main() {

	EMP e1[3];
	for (int i = 0;i < 3;i++) {
		display(e1[i]);
	}

	EMP e;
	for (int i = 0;i < 3;i++) {

		getEmpDetails(&e1[i]);
	}


}