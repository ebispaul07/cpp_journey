#include<iostream>
#include"employee.h"

using namespace std;

Employee::Employee() {
	id = 0;
	name = "";
	dept = "";
	next = nullptr;
}


	void Employee::setId(int id) {
		this->id = id;
	}
	int Employee::getId() {
		return id;
	}
	void Employee::setName(string name) {
		this->name = name;
	}
	string Employee::getName() {
		return name;
	}
	void Employee::setDept(string dept) {
		this->dept = dept;
	}
	string Employee::getDept() {
		return dept;
	}
	void Employee::setNext(Employee* next) {
		this->next = next;
	}
	Employee* Employee::getNext() {
		return next;
	}




