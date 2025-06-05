#include<iostream>
#include<fstream>
using namespace std;

int  main() {
	fstream fio;
	fio.open("emp.txt.txt", ios::in| ios::out);

	if (!fio.is_open()) {
		cerr << "Error" << endl;
	}

	fio << "Hello Wooorld" << endl;

}