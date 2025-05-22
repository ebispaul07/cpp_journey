#include<iostream>
using namespace std;


typedef struct EMployee {
	int id;
	string name;
	float sal;

}EMP;

void printDetails(EMP);
bool getDetais(EMP&);

void printDetails(EMP e) {
	cout << "Employee Details" << endl;
	cout << e.id << endl;
	cout << e.name << endl;
	cout << e.sal << endl;
}


void getDetails(EMP &e) {
	cout << "Enter Details of Employee" << endl;
	cout << "ID: ";
	cin >> e.id;
	cout << "Name: ";
	cin >> e.name;

	if (vName (e.name == false))
		return false;

	cout << "Salary :";
	cin >> e.sal;

}

bool vName(string name) {

	for (int i = 0;i < name.length();i++) {
		if ((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z') || (name[i] == ' '))
			continue;
		else
			return false;
	}
	return true;
}

int main() {
	EMP e;

	if (getDetails(e) == true) {
		cout << "Update the Details" << endl;
	}
	else {
		cout << "Something Wrong"<<endl;
	}
	return 0;
}