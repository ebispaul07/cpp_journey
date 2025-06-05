#include<iostream>
#include "employee.h"
#include"financial.h"
#include<fstream>
#include<string>
using namespace std;

int main() {

	Financial f;

	int num;
	cout << "Select," << endl;
	cout << "1.Add " << endl;
	cout << "2.Display" << endl;
	cout << "3.Update Name:" << endl;
	cin >> num;
	
	switch (num) {
	case 1:

		int id;
		cout << "Enter your ID: ";
		cin >> id;

		string name;
		cout << "Enter Your Name: ";
		cin >> name;

		string dept;
		cout << "Enter Your Department: ";
		cin >> dept;

		fstream fio;

		f.addEmployee(id, name, dept);


		ofstream fout("ebi.txt");
		if (!fout.is_open()) {
			cerr << "Error: Could not open file for writing!" << endl;
			return 1;
		}

		Employee* temp = f.getHead();
		while (temp != nullptr) {
			fout << temp->getId() << " "
				<< temp->getName() << " "
				<< temp->getDept() << endl;
			temp = temp->getNext();
		}

	

		string line;
		ifstream fin("ebi.txt");
		if (!fin.is_open()) {
			cerr << "Error: opening the file" << endl;
			return 1;
		}

		while (getline(fin, line)) {
			cout << line << endl;
		}

		fin.close();
		break;
	}

}