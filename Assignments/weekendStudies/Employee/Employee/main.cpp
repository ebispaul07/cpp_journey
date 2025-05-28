#include<iostream>
#include<string>
#include "emplo.h"
#include "linkedlist.h"
using namespace std;


void menu() {
	
		cout << "1. Add Employee" << endl;
		cout << "2. Display All Employees" << endl;
		cout << "3. Delete Employee by ID" << endl;
		cout << "4. Search Employee by Name" << endl;
		cout << "5. Update Salary by ID" << endl;
		cout << "6. Count Employees" << endl;
		cout << "0. Exit" << endl;
		

		
	}


int main()
{
	int id=101;
	string name="John";
	float salary=50000;

	Employee e1;
	Linkedlist l1;
	menu();

	int ch = 1;

	int num;
	

	while (ch) {
		cin >> num;
		switch (num) {
		case 1:
			cout << "Adding Elmployee...." << endl;
			cin >> id >> name >> salary;
			l1.addEmployee(id, name, salary);
			cout << "Successfully Added" << endl;

			break;
		case 2:
			cout << "Displaying Employees...." << endl;
			l1.display();
			break;
		case 3:
			cout << "Deleting Employee....." << endl;
			l1.deleteEmployee(id);
			break;
		case 4:
			cout << "Searching Employee......" << endl;
			cin >> name;
			l1.searchEmployee(name);
			break;
		case 5:
			cout << "Updating salary......" << endl;
			break;
		case 6:
			cout << "Counting Employee......" << endl;
			
			l1.countEmployee();
			break;
		case 0:
			cout << "Exiting....." << endl;
			break;
		default:
			cout << "invalid Input...." << endl;
		}


	}
	
	
}
	


