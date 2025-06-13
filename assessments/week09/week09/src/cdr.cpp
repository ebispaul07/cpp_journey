#include<iostream>
#include"cdr.h"
#include<string>

using namespace std;


void CDR::displayWelcome() {
	cout << "\t\t *********Welcome To CDR*********" << endl;
}


void CDR::menu() {
	cout << endl;
	cout << endl;
	cout << "\t\t\tselect," << endl;
	cout << "\t\t\t1.Sign up" << endl;
	cout << "\t\t\t2.Login" << endl;
	cout << "\t\t\t3.exit" << endl;
}
