#include<iostream>
#include<fstream>
using namespace std;

struct Employee {
	int id;
	char name[20];
};

int  main() {
	fstream fio;

	struct Employee e = { 101,"Ebi" };

	fio.open("ebi.txt", ios::in | ios::out|ios::binary);

	if (!fio.is_open()) {
		cerr << "Error" << endl;
	}

	fio.write((char*)&e, sizeof(e));
	cout << e.id << "\t" << e.name << endl;
	fio.close();
}