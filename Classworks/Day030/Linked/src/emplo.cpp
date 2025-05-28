#include<iostream>

using namespace std;


class Employee {
private:
	int id;
	string name;
	float salary;
	Employee* next;
public:
	/*
	Employee(int i, string n, float s)
	{
		id = i;
		name = n;
		salary = s;
		next = nullptr;
	}*/
	Employee() {
		id = 0;
		name = "";
		salary = 0;
		next = nullptr;
	}

	void setId(int i) {
		id = i;
	}
	int getId() {
		return id;
	}
	void setName(string n) {
		name = n;
	}
	string getName() {
		return name;
	}
	void setSalary(float s) {
		salary = s;
	}
	float getSalary() {
		return salary;
	}

	void setNext(Employee* nn) {
		next = nn;
	}
	Employee* getNext() {
		return next;
	}

	

	

	/*
	void menu() {
		int ch = 1;
		while (ch) {
			int num;
			cout << "1. Add Employee" << endl;
			cout << "2. Display All Employees" << endl;
			cout << "3. Delete Employee by ID" << endl;
			cout << "4. Search Employee by Name" << endl;
			cout << "5. Update Salary by ID" << endl;
			cout << "6. Count Employees" << endl;
			cout << "0. Exit" << endl;
			cin >> num;

			switch (num) {
			case 1:
				cout << "Adding Element...." << endl;
				addEmployee();
				cout << "Successfully Added" << endl;
				break;
			case 2:
				cout << "Displaying Employees...." << endl;
				display();
				break;
			case 3:
				cout << "Deleting Employee....." << endl;
				break;
			case 4:
				cout << "Searching Employee......" << endl;
				break;
			case 5:
				cout << "Updating salary......" << endl;
				break;
			case 6:
				cout << "Counting Employee......" << endl;
				break;
			case 0:
				cout << "Exiting....." << endl;
				break;
			default:
				cout << "invalid Input...." << endl;
			}
		}
	}
	*/

};

class Details {
private:
	Employee* head;
public:
	Details() {
		head = NULL;
	}

	Employee* createNode(int a, string b, float c) {
		Employee* nn = new Employee();


		nn->setId(a);
		nn->setName(b);
		nn->setSalary(c);
		nn->setNext(head);
		head = nn;
		return nn;
	}

	void display() {
		cout << "\tList is " << endl;
		cout << "\t";
		Employee* temp = head;
		while (temp != NULL)
		{
			cout << temp->getId() << " -> " << temp->getName() << "->" << temp->getSalary() << endl;;

			temp = temp->getNext();


		}
		cout << "NULL" << endl;

	}
};





int main()
{
	Employee e1;
	Details dl;
	dl.createNode(0, "hre", 0);
	dl.display();
}

