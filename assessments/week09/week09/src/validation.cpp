#include<iostream>
#include"validation.h"
#include<map>
#include<fstream>
#include<string>
#include"customer.h"
#include<thread>
#include<chrono>
#include"cdr.h"


using namespace std;

map<string, string>m;




void Validation::setUname(string userName) {
	this->userName = userName;
}

string Validation::getUname() {
	return userName;
}

void Validation::setPassword(string password) {
	this->password = password;
}

string Validation::getPassword() {
	return password;
}

void Validation::signUp() {
	
	Validation v;

	string userName;
	cout << "\t\t\tEnter UserName: ";
	cin >> userName;
	v.setUname(userName);


	string password;
	cout << "\t\t\tEnter New Password: ";
	cin >> password;
	v.setPassword(password);

	ofstream wrfile("db.txt");

	if (wrfile.is_open()) {

		
		wrfile << userName << endl;
		wrfile << password << endl;
		wrfile.close();
	}
	else {
		cout << "\t\t\tFile Is Already Open!!!" << endl;
	}
	


	m.insert({ userName,password });

}




void Validation::applicationMenu() {
	Customer c;
	while (true) {
		int num;
		cout << "\t\t\tSelect," << endl;
		cout << "\t\t\t1.Process CDR file" << endl;
		cout << "\t\t\t2.Print/search For Billig Information" << endl;
		cout << "\t\t\t3.Logout" << endl;
		cout << "\t\t\t:";
		cin >> num;

		switch (num) {
		case 1:
			cout << "\t\t\tProcessing CDR";
			this_thread::sleep_for(chrono::seconds(1));
			cout << ".";
			this_thread::sleep_for(chrono::seconds(1));
			cout << ".";
			this_thread::sleep_for(chrono::seconds(1));
			cout << ".";
			this_thread::sleep_for(chrono::seconds(1));
			cout << ".";
			cout << endl;
			cout << endl;
			
			cout << "\t\t\tCDR Processed." << endl;
			cout << endl;
			break;
		case 2:
			cout << "\t\t\tPrinting Bill" ;
			this_thread::sleep_for(chrono::seconds(1));
			cout << ".";
			this_thread::sleep_for(chrono::seconds(1));
			cout << ".";
			this_thread::sleep_for(chrono::seconds(1));
			cout << ".";
			this_thread::sleep_for(chrono::seconds(1));
			cout << ".";
			cout << endl;
			cout << endl;
			
			cout << "\t\t\tBill Printed" << endl;
			cout << endl;
			c.processingCdr();
			//c.processPartener();
			
			break;
		case 3:
			cout << "\t\t\tLogging Out" ;
			this_thread::sleep_for(chrono::seconds(1));
			cout << ".";
			this_thread::sleep_for(chrono::seconds(1));
			cout << ".";
			this_thread::sleep_for(chrono::seconds(1));
			cout << ".";
			this_thread::sleep_for(chrono::seconds(1));
			cout << ".";
			cout << endl;
			cout << endl;
			cout << "\t\t\tLogged Out!!" << endl;
			cout << endl;
			CDR c;
			c.menu();

			break;
		}
	}
}



void Validation::logIn() {
	string userName;
	cout << "\t\t\tEnter UserName: ";
	cin >> userName;


	string password;
	cout << "\t\t\tEnter Your Password: ";
	cin >> password;

	ifstream opfile("db.txt");
	string line;

	if (opfile.is_open()) {
		while (getline(opfile, line)) {
			string nam = line.substr(0, sizeof(userName));
			string pass = line.substr(0, sizeof(password));
		

			if (nam==userName||pass == password) {
				cout << "\t\t\tWelcome To Cdr!!!!" << endl;

				applicationMenu();
				break;
			}
			else {
				cout << "\t\t\tIncorrect Username/Password!!!!" << endl;
				break;
			}
		}
	}

	
}