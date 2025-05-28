#include<iostream>
using namespace std;

class Person {
private:
	string ssn;
protected:
	string name;
	char gender;
	int age;
public:
	Person(string s, string n, char g, int a) :ssn(s), name(n), gender(g), age(a) {
		cout << "Person constructor got Called" << endl;

	}

	//const is the version 2

	void dispPerson() const {
		cout << "Personal details are:" << endl;
		cout << "Name: " << name << endl;
		cout << "ssn: " << ssn << endl;
		cout << "gender: " << gender << endl;
		cout << "Age: " << age << endl;
	}
	~Person() {
		cout << "person destr got called" << endl;
	}
protected:
	void setSSN(string s) {
		ssn = s;
	}
public:
	void setPerson(string s, string n, char g, int a) {
		this->ssn = s; this->name = n; this->gender = g; this->age = a;
	}


};

class Employee :public Person {
private:
	int e_id;
	float e_sal;
	string desig;

public:
	Employee(string ssn, string n, char g, int age, int id, float sal, string desg) :Person(ssn, n, g, age), e_id(id), e_sal(sal), desig(desg) {

		cout << "Employee constructor got Called!!" << endl;
	}

	~Employee() {
		cout << "Employee Destr got called" << endl;
	}
	//const is version 2
	void dispEmp() const {
		dispPerson();
		cout << endl;
		cout << "Employee Details are" << endl;
		cout << "Id: " << e_id << endl;
		cout << "salary: " << e_sal << endl;
		cout << "Designation: " << desig << endl;
	}

	void updateName(string n) {
		name = n;
	}
	void updateSSN(string s) {
		setSSN(s);
	}

	void updateSalary(float sal) {
		e_sal = sal;
	}

};

int main() {
	Employee e1("ADHAR", "Ebi", 'M', 45, 101, 1000, "SSE");
	e1.dispPerson();
	e1.dispEmp();
	e1.updateName("Paul");
	e1.dispPerson();
	e1.dispEmp();

	e1.updateSSN("Ad");
	e1.dispPerson();
	e1.dispEmp();

	e1.updateSalary(70);
	e1.dispPerson();
	e1.dispEmp();


}