#include<iostream>
#include<list>
#include<algorithm>

using namespace std;



class Employee {
public:
	int id;
	string name;
public:
	Employee(){}

	Employee(int id,string name) {
		this->id = id;
		this->name = name;
	}

	bool operator<(const Employee& other) const {
		return name < other.name;
	}
	
};




int main() {
	

	Employee e(5, "Ebi");
	Employee e1(4, "Aei");
	Employee e2(2, "e");
	list<Employee>li;

	li.push_front(e);
	li.push_back(e1);
	li.insert(li.begin(), e2);
	
	for (const auto& emp : li) {
		cout << "ID: " << emp.id << ", Name: " << emp.name << endl;
	}
	cout << endl;

	li.reverse();
	for (const auto & emp : li) {
		cout << "ID: " << emp.id << ", Name: " << emp.name << endl;
	}

	
	
	cout << endl;
	li.sort();
	for (const auto& emp : li) {
		cout << "ID: " << emp.id << ", Name: " << emp.name << endl;
	}
}