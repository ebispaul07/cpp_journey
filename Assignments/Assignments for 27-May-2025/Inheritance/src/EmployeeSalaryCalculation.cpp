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

class Techlead :public Developer, public Manager, public Employee {
protected:
	int totalCodingSalary;
	int totalSalary;
public:
	Techlead(int empId, string name, int codingHours, int teamSize): Developer(codingHours),Manager(teamSize), Employee(empId, name){
		this->totalCodingSalary = 0;
		this->totalSalary = 0;
	}

	void calculateSalary() {
		totalCodingSalary = codingHours * 500;
		totalSalary = totalCodingSalary + (teamSize * 5000);
	}

	void display() {
		cout << "Tech Lead Info:" << endl;
		cout << "EmpId: " << empId <<endl;
		cout << "Name: " << name << endl;
		cout << endl;
		cout << "Salary based on coding:" << totalCodingSalary<< endl;
		cout << "Salary based on coding + team: " << totalSalary << endl;
	}

};

/*EmpId: 501
Name: Rajesh
Coding Hours: 120
Team Size: 5
Expected Output:

Tech Lead Info:
EmpId: 501
Name: Rajesh

Salary based on coding: ₹60000
Salary based on coding + team: ₹85000
Assume ₹500/hour and ₹5000/team member*/



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