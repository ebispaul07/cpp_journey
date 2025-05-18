#include<iostream>
using namespace std;


typedef struct Employee {
	int empID;
	
	string empName;
	
}EMP;

typedef struct period {
	int emp_id;
	int days;
}PERID;

typedef struct salary {
	int salary;
	
}SAL;


void display(EMP,PERID,);
int getEmpDetails(EMP*);


int main() {

	EMP e[3];
	PERID p1;
	SAL s1[3];


	for (int i = 0;i < 3;i++) {

		getEmpDetails(&e[i]);
		
	}

	for (int i = 0;i < 3;i++) {
		display(e[i]);
		
		
	}
	

	
}

void display(EMP e1,PERID p1,SAL s1) {
	cout << "NAme:";
	cin >> e1.empName;
	
	cout << "ID:";
	cin >> e1.empID;
	
	cout << "Days:";
	cin >> p1.days;
	
	cout << "Enter Your Salary:";
	s1.salary;
}



int getEmpDetails(EMP* e) {

	cout << "Enter Id: ";
	cin >> e->empID;

	cout << "Enter Name: ";
	cin >> e->empName;

	

	cout << endl;

	return 0;


}