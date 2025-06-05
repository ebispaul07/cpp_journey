#include<iostream>
using namespace std;

class Person {
protected:
	string name;
	char gend;
	int age;
	int phon;
public:
	Person(string name, char gend, int age, int phon) {
		this->name = name;
		this->gend = gend;
		this->age = age;
		this->phon = phon;
	}

	void displayPer() {
		cout << "Name: " << name << endl;
		cout << "Gender: " << gend << endl;
		cout << "Age: " << age << endl;
		cout << "Phone: " << phon << endl;
	}

};

class Employee {
protected:
	int id;
	int sal;
	string dept;
public:
	Employee(int id, int sal, string dept) {
		this->id = id;
		this->sal = sal;
		this->dept = dept;
	}

	void dispEmp() {
		cout << "Id: " << id << endl;
		cout << "Salary: " << sal << endl;
		cout << "Department: " << dept << endl;
	}
};

class empFin :private Employee, public Person {
private:
	int pt;
	int pf;
	int vp;
	int days;
public:
	empFin(string name, char gend, int age, int phon, int id, int sal, string dept, int pt, int pf, int vp, int days) :
		Employee(id, sal, dept), Person(name, gend, age, phon)
	{

		this->name = name;
		this->gend = gend;
		this->age = age;
		this->phon = phon;
		this->id = id;
		this->sal = sal;
		this->dept = dept;
		this->pt = pt;
		this->pf = pf;
		this->vp = vp;
		this->days = days;
	}

	void disFin() {
		displayPer();
		dispEmp();
		cout << "P Tax: " << pt << endl;
		cout << "P f: " << pf << endl;
		cout << "V P: " << vp << endl;
		cout << "Days: " << days << endl;
		int gs = (sal - pt - pf) / 30;
		gs = gs * days;
		cout << "Gross Salary: " << gs << endl;
	}
	//friend void setDaysEmployee(empFin&, LMS&);
};

class LMS :public Employee {
private:
	int hours;
	int day;
public:
	LMS( string name, char gend, int age, int phon, int id, int sal, string dept, int hours, int day):Employee(  id,  sal,  dept) {
		this->hours = hours;
		this->day = day;
	}

	void dispLMS() {
		cout << "Hours: " << hours<<endl;
		cout <<  "Days: " << day << endl;
	}
	//friend void setDaysEmployee(empFin&, LMS&);
};


//void setDaysEmployee(empFin& e, LMS& l) {
//	for (int i = 0;i < noEmpCount;i++) {
//		if (e[i].id == l.id) {
//			e.[i].days = l.getDays();
//		}
//	}
//}




int main() {
	empFin e("Ebi", 'M', 22, 777, 293959, 260000, "Am", 200, 2600, 10000, 240);
	e.disFin();

	LMS l("Ebi", 'M', 22, 777, 293959, 260000, "Am", 8, 22);
	l.dispLMS();
}

