#include<iostream>
using namespace std;

class Student {
public:
	int rollno;
	string name;
	string dept;
};




int main() {

	Student s1;
	cout << sizeof(s1) << endl;
	s1.rollno = 07;
	s1.name = "EBI";
	s1.dept = "CSE";

	cout << s1.rollno << s1.name << s1.dept;

}
