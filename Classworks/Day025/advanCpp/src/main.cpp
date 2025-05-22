#include<iostream>
using namespace std;

typedef struct Employee {
	int id;
	char name[20];
	char address[20];
	int empSal;
}EMP;



void emp_details(EMP &e);
void emp_salary(EMP &e);
void display(EMP& e);
void close();
void menu(EMP &e);


void menu(EMP &e) {

	int num;
	cout << "press,"<<endl;
	cout << "1.Employee Details" << endl;
	cout << "2.Employee Salary Details" << endl;
	cout << "3.Exit" << endl;
	cin >> num;

	switch (num) {
	case 1:
		cout << "Employee details" << endl;
		for (int i = 0;i < 3;i++) {
			emp_details(e);
			display(e); 
		}
			
		
		break;
	case 2:
		cout << "Salary Details" << endl;
		emp_salary(e);
		break;
	case 3:
		cout << "Exit" << endl;
		close();
		break;
	default:
		cout << "Invalid Input!!!"<<endl;
		menu(e);
	}




}

void emp_details(EMP& e) {
	cout << "Enter your ID: ";
	cin >> e.id;
	cout << "Enter Your Name:";
	cin >> e.name;
	cout << "Enter Your Address:";
	cin >> e.address;
	
}

void display(EMP& e) {
	cout << "ID: " << e.id << endl;
	cout << "NAME: " << e.name << endl;
	cout << "Address: " << e.address << endl;
}

void emp_salary(EMP &e) {
	cout << "Enter Your Daily Salary: ";
	cin >> e.empSal;
	cout << "Monthly Salary: " << e.empSal * 30 << endl;
}



void close() {
	exit(0);
}

int main() {
	EMP e = {0};
	
	cout << "Employee Management" << endl;

	menu(e);


}