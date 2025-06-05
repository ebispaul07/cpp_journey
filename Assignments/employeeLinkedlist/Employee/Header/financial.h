#pragma once
#ifndef __FINANCIAL__
#define __FINANCIAL__
#include<iostream>
using namespace std;

class Financial :public Employee{
protected:
	Employee* head;

public:
	

	Financial();

	void setHead(Employee* head);
	Employee* getHead();

	void addEmployee(int , string , string );


	void display();
	void menu();
};



#endif // !__FINANCIAL__
