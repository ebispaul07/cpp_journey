#pragma once
#include<iostream>
#include<string>
using namespace std;

class Student {
protected:
	int rollno;
	string name;
	int age;

public:
	Student(int rollno, string name, int age) {
		this->rollno = rollno;
		this->name = name;
		this->age = age;
	}

	

	void setDetails(int , string , int );

};