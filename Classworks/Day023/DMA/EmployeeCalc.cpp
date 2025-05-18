#include<iostream>
using namespace std;



typedef struct employee {
	int empId;
	string empName;
}EMP;

typedef struct pay {
	int salary;
	int allowance;
}SAL;

int getemp(EMP*,SAL* s);
void display(EMP,SAL);

int main() {

	cout << "\t\t\tEmployee Salary Calculator" << endl;
	cout << endl;

	EMP e[3];
	SAL s[3];
	
	for (int i = 0;i < 3;i++) {
		getemp(&e[i], &s[i]);
		cout << endl;
	}
	cout << "\t\t\tDisplayed " << endl;
	cout << "\t\t\t===================================" << endl;
	cout << endl;
	for (int i = 0;i < 3;i++) {
		display(e[i], s[i]);
	}
	cout << endl;
}



int getemp(EMP* e,SAL* s) {
	
	cout << "\t\t\tEnter your ID:";
	cin >> e->empId;
	cout << "\t\t\tEnter Your Name:";
	cin >> e->empName;
	cout << "\t\t\tEnter Your Salary:";
	cin >> s->salary;
	cout << "\t\t\tEnter Your Allowance:";
	cin >> s->allowance;
	return 0;
}


void display(EMP e,SAL s) {
	
	cout << "\t\t\tEMPLOYEE ID: " << e.empId << endl;
	cout << "\t\t\tNAME: " << e.empName<<endl;
	cout << "\t\t\tBasic Salary perMonth: " << s.salary*30 << endl;
	cout << "\t\t\tMonthly Alowance: " << s.allowance * 30 << endl;
	cout << "\t\t\tSalaryPerMonthwithAllowance: " << (s.salary*30)+s.allowance*30 << endl;
	cout << "\t\t\tYearly Salary: " << (s.salary * 365) << endl;
	
	
	cout << endl;
}