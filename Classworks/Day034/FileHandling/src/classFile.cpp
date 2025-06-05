#include<iostream>
#include<fstream>
using namespace std;

class Student {
private:
	int id;
	string name;

public:
	Student(int id, string name) {
		this->id = id;
		this->name = name;
	}
	void dis() {
		cout << id<<"\t" << name;
	}

};

int main() {

	fstream fio;
	int id;string name;
	Student s(102, "Ebiiiii");

	fio.open("ebi.txt");

	if (!fio.is_open()) {
		cerr << "Error" << endl;
	}

	fio.write((char*)&s, sizeof(s));
	cout << fio.tellp() << endl;
	s.dis();
	fio.close();
}