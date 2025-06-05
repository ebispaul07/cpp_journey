#include<iostream>
#include<vector>

using namespace std;

template<typename T>

class Employee {
protected:
	int id;
	string name;
	string adr;
public:
	Employee() {};
	Employee(int id,string name,string adr) {
		this->id = id;
		this->name = name;
		this->adr = adr;
	}
	vector<Employee>val;

	void add(int id,string name,string adr) {
		val.push_back(Employee(id, name,adr));
	}

	void display() {
		for (int i = 0;i < val.size();i++) {
			cout << val[i].id << endl;
			cout << val[i].name << endl;
			cout << val[i].adr << endl;

		}
	}

};



int main() {

	

	Employee e;
	e.add(7, "Ebi","Kollemcode");
	e.display();


}