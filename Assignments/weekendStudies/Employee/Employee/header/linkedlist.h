#pragma once
//#define __LINKEDLIST__
#include<iostream>
#include"emplo.h"
using namespace std;

class Linkedlist
{
private:
	Employee* head;
public:

	Linkedlist() {
		head = NULL;
	}

	void setHead(Employee*h) {
		head = h;
	}
	Employee* getHead() {
		return head;
	}
	int count = 0;

    void addEmployee(int,string,float);
	void display();
	void deleteEmployee(int);
	void searchEmployee(string);
	void updateSalary();
	void countEmployee();
};

