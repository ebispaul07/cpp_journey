#include<iostream>
using namespace std;

class Employee {
protected:
	int empId;
	string name;
public:
	
	Employee(int empId,string name) {
		this->empId = empId;
		this->name = name;
	}

	void setDetail(int empId,string name) {
		this->empId = empId;
		this->name=name;
	}

	
};

class Developer :public Employee {
protected:
	int codingHours;
public:
	Developer(int codingHour):Employee(empId,name) {
		this->codingHours = codingHour;
	}


};

class Manager :public Employee {
protected:
	int teamSize;
public:
	Manager(int teamSize) :Employee(empId, name) {
		this->teamSize = teamSize;
	}

};

class Techlead :public Employee,  public Developer, public Manager {
protected:
	int totalCodingSalary;
	int totalSalary;
public:
	Techlead(int empId, string name, int codingHours, int teamSize): Employee(empId, name),Developer(codingHours),Manager(teamSize){
		totalCodingSalary = 0;
	     totalSalary = 0;
	}

	void calculateSalary() {
		totalCodingSalary = codingHours * 500;
		totalSalary = totalCodingSalary + (teamSize * 5000);
	}

	void display() {
		cout << "Tech Lead Info:" << endl;
		cout << "EmpId: " << Employee::empId <<endl;
		cout << "Name: " << Employee::name << endl;
		cout << endl;
		cout << "Salary based on coding:" << totalCodingSalary<< endl;
		cout << "Salary based on coding + team: " << totalSalary << endl;
	}

};




int main() {

	int empId;
	cout << "EmpId: ";
	cin >> empId;

	string name;
	cout << "Name: ";
	cin >> name;

	int codingHours;
	cout << "coding Hours: ";
	cin >> codingHours;

	int teamSize;
	cout << "Team Size: ";
	cin >> teamSize;

	Techlead t1(empId, name, codingHours, teamSize);
	t1.calculateSalary();
	t1.display();


}