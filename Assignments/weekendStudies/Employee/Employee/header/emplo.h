//#pragma once

//#ifndef __EMPLOYEE__
#pragma once
//#define __EMPLOYEE__
#include<iostream>
#include<string>
using namespace std;

class Employee {
private:
	int id;
	string name;
	float salary;
	Employee* next;
public:

	Employee() {
		id = 0;
		name = "";
		salary = 0;
		next = nullptr;
	}

	void setId(int);
	int getId();
	void setName(string);
	string getName();
	void setSalary(float);
	float getSalary();
	void setNext(Employee*);
	Employee* getNext();

};



//#endif // !__EMPLOYEE__

