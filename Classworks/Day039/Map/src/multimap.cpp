#include<iostream>
#include<map>
#include<vector>

using namespace std;

class Employee {
private:
	int eid;
	string name;
	string dept;

public:
	Employee(int eid,string name,string dept) {
		this->eid = eid;
		this->name = name;
		this->dept = dept;
	}
	
	void display() {
		cout << "Id: " << eid << endl;
		cout << "Name: " << name << endl;
		cout << "DepartMent: " << dept << endl;
	}

};

int main() {

	multimap<int, vector<Employee>>m;

	int id;
	string name;
	string dept;
	

	while (true) {
		cout << "Enter your ID: ";
		cin >> id;
		
		cout << "Enter your Name: ";
		cin >> name;
		cout << "Enter Your Department: ";
		cin >> dept;

		Employee e(id, name, dept);

		m.


		vector<Employee>v;
		v.push_back(e);

	}


			for (auto x : m) {
				for(auto d:x.second)
				d.display();
			}
		
		
	

}