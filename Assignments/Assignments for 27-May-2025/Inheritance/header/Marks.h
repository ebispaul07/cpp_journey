#pragma once

#include<iostream>
#include<AcademicResult.h>
using namespace std;

class Marks :public Student {
protected:
	int mark1;
	int mark2;
	int mark3;
	int total;
	float average;
public:

	Marks(int rollno, string name, int age, int mark1, int mark2, int mark3) :Student(rollno, name, age) {
		this->mark1 = mark1;
		this->mark2 = mark2;
		this->mark3 = mark3;
		this->total = 0;
		this->average = 0;
	}


	void calculate();

	void display();

};