#include<iostream>
#include<vector>
#include<array>
using namespace std;

class Student {
protected:
	int id;
	string name;
public:
	Student(int id,string name) {
		this->id = id;
		this->name = name;
	}
	void display() {
		cout << "ID: " << id << endl;
		cout << "NAME: " << name << endl;
	}
};

int main() {

	Student s[3] = { {2,"Ebi"},{7,"Emoi"},{4,"gg"} };

	for (auto e : s) {
		e.display();
	}

	Student s1 = { 1,"EBBBIIIII" };

	vector<Student>emp;

	emp.push_back(s1);

	for (auto e: emp) {
		e.display();
	}

	cout << emp.capacity() << endl;
	cout << emp.size() << endl;


}