#include<iostream>
using namespace std;

class Employee {
private:

	int eid;
	string ename;

public:
	void init(int id, string n) {
		eid = id;
		ename = n;
	}
	void printDetails() {
		cout << eid;
	}

};

int main() {

	Employee e1;

	e1.id = 93;
	e1.name = "Ebi";

	Employee* ptr = &e1;

	cout << e1.id << endl;
	cout << e1.name << endl;

	ptr->id = 7;
	cout << e1.id << endl;
}