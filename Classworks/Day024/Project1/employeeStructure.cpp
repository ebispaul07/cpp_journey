#include<iostream>
#define depts 3
#define noEmp 2
using namespace std;

typedef struct Employee {
	int id;
	char name[20];

}EMP;



int main() {
	EMP** e = nullptr;
	//e = (EMP**)malloc(depts * sizeof(EMP*));
	e = new EMP * [depts];
	cout << "Address of e[" << e << "]=" << (unsigned long int)e << endl;

	for (int i = 0;i < depts;i++) {
		//e[i] = (EMP*)malloc(noEmp * sizeof(EMP));
		e[i] = new EMP[noEmp];
		cout << "Address of e[" << i << "]=" << (unsigned long int)e[i] << endl;
	}
	cout << endl;

	cout << "Enter Employee Details Dept-wise" << endl;

	for (int i = 0;i < depts;i++) {
		cout << "ENter the Employee details for" << (i + 1) << "Department" << endl;
		for (int j = 0;j < noEmp;j++) {
			cout << "ID: ";cin >> e[i][j].id;
			cout << "NAME: ";cin >> e[i][j].name;
		}
	}

	cout << "Employee Details Dept-wise " << endl;

	for (int i = 0;i < depts;i++) {
		cout << "ENter the Employee details for " << (i + 1) << " Department" << endl;
		for (int j = 0;j < noEmp;j++) {
			cout << "ID: "<< e[i][j].id;
			cout << "NAME: "<< e[i][j].name;
		}
	}

	
}


