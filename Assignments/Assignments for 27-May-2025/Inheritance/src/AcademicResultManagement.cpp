#include<iostream>
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

	void setDetails(int rollno, string name, int age) {
		this->rollno = rollno;
		this->name = name;
		this->age = age;

	}

};

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


	void calculate() {

		total = mark1 + mark2 + mark3;

		average = total / 3;

	}

	void display() {
		cout << "Student Info" << endl;
		cout << "Roll No: " << rollno << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << endl;
		cout << "Final Result:" << endl;
		cout << "Total Marks: " << total << endl;
		cout << "Average Marks: " << average << endl;
	}

};



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