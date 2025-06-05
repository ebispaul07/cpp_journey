#pragma once
#ifndef __EMPLOYEE__
#define __EMPLOYEE__
#include<iostream>
using namespace std;

class Employee {
private:
	int id;
	string name;
	string dept;
	Employee* next;

public:
	Employee();

	void setId(int);
	int getId();
	void setName(string );
	string getName();
	void setDept(string );
	string getDept();
	void setNext(Employee* );
	Employee* getNext();

};




#endif // !__EMPLOYEE__
