#include<iostream>
#include<AcademicResult.h>
#include<Marks.h>
using namespace std;



int main() {

	int rollno;
	cout << "Enter Roll No: ";
	cin >> rollno;

	string name;
	cout << "Enter Name:";
	cin >> name;

	int age;
	cout << "Enter Age:";
	cin >> age;

	int mark1, mark2, mark3;
	cout << "Enter Marks: ";
	cin >> mark1 >> mark2 >> mark3;

	Marks m1(rollno, name, age, mark1, mark2, mark3);


	m1.calculate();
	m1.display();

}