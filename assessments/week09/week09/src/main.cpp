#include<iostream>
#include "cdr.h"
#include"validation.h"
#include<map>
#include"customer.h"
#include<thread>

using namespace std;


int main() {
	CDR c;
	Validation v;
	
	

	c.displayWelcome();

	int num;

	while (true) {
		c.menu();
		cout << "\t\t\t: ";
		cin >> num;

		switch (num) {
		case 1:
			cout << "\t\t\tWelcome To CDR sign Up...." <<endl;
			cout << endl;
			cout << endl;
			v.signUp();
			break;

		case 2:
			cout << "\t\t\tWelcome To CDR Login Page...."<<endl;
			cout << endl;

			v.logIn();
			break;

		case 3:
			cout << "\t\t\tExiting";
			this_thread::sleep_for(chrono::seconds(1));
			cout << ".";
			this_thread::sleep_for(chrono::seconds(1));
			cout << ".";
			this_thread::sleep_for(chrono::seconds(1));
			cout << ".";
			this_thread::sleep_for(chrono::seconds(1));
			cout << ".";

			
			return 0;
		}

	}
	

}