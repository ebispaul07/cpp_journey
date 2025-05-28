#include<iostream>
#include<AcademicResult.h>
#include<Marks.h>
using namespace std;



void Marks::calculate() {

	total = mark1 + mark2 + mark3;

	average = total / 3;

}

void Marks::display() {
	cout << "Student Info" << endl;
	cout << "Roll No: " << rollno << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << endl;
	cout << "Final Result:" << endl;
	cout << "Total Marks: " << total << endl;
	cout << "Average Marks: " << average << endl;
}