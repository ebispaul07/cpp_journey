#include<iostream>
using namespace std;

struct Date {
	int day, month, year;
};
struct place {
	string plac;
};

typedef struct Employee {
	int id;
	string name;
	Date joiningDate;
	place myplce;
}EM;


int main() {

	EM e1;

	e1.id = 101;
	e1.name ="Ebi";
	e1.joiningDate.day = 10;
	e1.joiningDate.month =6;
	e1.joiningDate.year = 2025;
	e1.myplce.plac = "KK DIST";

	cout << e1.id << endl;
	cout << e1.name << endl;
	cout << e1.joiningDate.day << endl;
	cout << e1.joiningDate.month<< endl;
	cout << e1.joiningDate.year << endl;
	cout << e1.myplce.plac << endl;

}