#include<iostream>
#include<list>
using namespace std;

class Emp {
public:
	int id;
	string name;
public:
	Emp(int id, string name) {
		this->id = id;
		this->name=name;
	}
};


class Employee {
private:
	
	list<Emp>empl;
public:

	

	void addEmployee(const int& id,const string& name) {
		empl.push_back(Emp(id,name));
	}

	void printE() {
		for (const auto& emp : empl) {
			cout << "ID: " << emp.id<<" " << emp.name << endl;
		}
	}
};

int main() {
	Employee e1;

	cout << "Enter Details if finish Press 0";

	while (true) {
		
		int id;
		cout << "Enter id:";
		cin >> id;
		if (id== 0) {
			break;
		}

		string name;
		cout << "Enter name:";
		cin >> name;

		e1.addEmployee(id, name);

		
	}


	
	e1.printE();

}