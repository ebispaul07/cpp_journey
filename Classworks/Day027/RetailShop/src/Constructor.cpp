#include<iostream>
using namespace std;


class Employee {
private:
	int eid;
	string ename;
public:


	Employee() {
		cout << "Constructor got Called" << endl;
		eid = 0;
		ename = "eee";
	}

	//parametric function....
	Employee(int id,string name) {
		cout << "Parametrized constructor" << endl;
		eid = id;
		ename = name;
	}


	void display() {
		cout << "display..."<<endl;
		cout << eid <<  endl;
		cout << ename << endl;
	}

	//used to clean up memory
	void destruct();
	~Employee() {
		cout << "Destructor is called" << endl;
	}
};

int main() {

	//Default constructor is invoked
	Employee e;
	e.display();

	//parametrized constructor is getting called
	Employee e1(1,"Ebi");
	e1.display();

	
	//default copy Constructor is getting called
	Employee e2(e1);
	e2.display();


	//default copy constructor is getting called
	Employee e3 = e1;
	e3.display();


	return 0;   
}