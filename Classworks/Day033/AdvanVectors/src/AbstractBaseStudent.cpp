#include<iostream>
using namespace std;

class Student {
protected:
	int rollno;
	string name;
public:
	Student() {

	}
	Student(int rollno,string name) {
		this->rollno = rollno;
		this->name = name;
	}

	 virtual void show() = 0;
	 virtual void calculate() = 0;
};

class Marks :public Student {
protected:
	int mark1;
	int mark2;
	int mark3;
public:
	
	Marks() {

	}

	Marks(int mark1,int mark2,int mark3, int rollno, string name):Student(rollno,name) {
		this->mark1 = mark1;
		this->mark2 = mark2;
		this->mark3 = mark3;
	}

	void show()override{
		cout << "Mark" << endl;
		cout << "Rollno: " << rollno << endl;
		cout << "Name: " << name << endl;
		cout << "Mark1: " << mark1 << endl;
		cout << "Mark2: " << mark2 << endl;
		cout << "Mark3: " << mark3 << endl;
		
	}


};

class Admin :public Student,public Marks {
protected:
	int total;
	float average;
public:
	Admin(int total,float Average, int rollno, string name, int mark1, int mark2, int mark3):Student(rollno,name),Marks( mark1,  mark2, mark3) {
		this->total = total;
		this->average = average;
	}

	void calculate()override {
		total = mark1 + mark2 + mark3;
		cout << "Total: " << total << endl;
		average = total / 3;
		cout << "Average: " << average << endl;
	}
};


int main() {
	int mark1, mark2, mark3, rollno,total,average; string name;
	Marks m(88,77,66,07,"EBI");
	Student* ptr = &m;
	ptr->show();

	Admin a();
	Student* ptr1 = &a;
	ptr1->calculate();
}