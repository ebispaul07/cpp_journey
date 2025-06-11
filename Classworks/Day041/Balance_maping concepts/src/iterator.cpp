#include<iostream>
#include<vector>
using namespace std;

class Employee {
	int id;
	string name;
public:
	Employee(int id, string name) {
		this->id = id;
		this->name = name;
	}
	void setName(string name) {
		this->name = name;

	}
	void setId(int id) {
		this->id = id;
	}

	void disp() {
		cout << "ID: " << id << " " << "Name: " << endl;
	}
};

int main() {

	vector<int>v = { 1,2,3,4 };
	vector<int>::iterator it = v.begin();

	for (;it != v.end();it++) {
		cout << *it << endl;
	}
	cout << endl;

	vector<Employee>vEmp;
	vEmp.emplace_back(101, "abc");
	vEmp.emplace_back(102, "abc1");
	vEmp.emplace_back(103, "abc2");
	vEmp.emplace_back(104, "abc3");

	vector<Employee>::iterator itEmp;
	int i = 0;

	for (itEmp = vEmp.begin();itEmp != vEmp.end();i++, itEmp++) {
		cout << "Employee (" << (i + 1) << ") details are" << endl;
		(*itEmp).disp();
		if ((i + 1) == 2)
			(*itEmp).setName("xyz");
		cout << "==========================" << endl;
	}

	i = 0;

	for (itEmp = vEmp.begin();itEmp != vEmp.end();i++, itEmp++) {
		cout << "Employee (" << (i + 1) << ") details are" << endl;
		(*itEmp).disp();
		if ((i + 1) == 2)
			(*itEmp).setName("xyz");
		cout << "==========================" << endl;
	}

	

}