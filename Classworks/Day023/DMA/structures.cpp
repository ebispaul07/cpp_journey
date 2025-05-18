#include<iostream>
using namespace std;




typedef struct Employee {
	int empID;
	int empPhno;
	string empName;
	string empAdress;
	char empGender;
}EMP;

void display(EMP);

int getEmpDetails(EMP*);

int main() {

	EMP e1;
	/*e1.empID = 101;
	e1.empName = "Ebi";
	e1.empAdress = "Kollemcode";
	e1.empGender = 'M';
	e1.empPhno = 7598;*/
	//cout << "Size:"<<sizeof(EMP)<<"\t size="<<sizeof(e1)<<endl;

	


	EMP e[3];
	for (int i = 0;i < 3;i++) {

		cout << endl;
		getEmpDetails(&e[i]);
		cout << endl;
		cout << endl;
	}

	for (int i = 0;i < 3;i++) {
		display(e[i]);
	}
	
}

void display(EMP e1) {
	cout << "NAme:" << e1.empName << endl;
	cout << "phone:" << e1.empPhno << endl;
	cout << "Address:" << e1.empAdress << endl;
	cout << "ID:" << e1.empID << endl;
	cout << "Gender :" << e1.empGender << endl;
}

int getEmpDetails(EMP *e) {

	cout << "Enter Id: ";
	cin >> e->empID;

	cout << "Enter Name: ";
	cin >> e->empName;

	cout << "Enter Gender: ";
	cin >> e->empGender;

	cout << "Enter Phone: ";
	cin >> e->empPhno;

	cout << "Enter Address: ";
	cin >> e->empAdress;

	cout << endl;
	
	return 0;


}