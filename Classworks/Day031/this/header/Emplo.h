#pragma once
#include<iostream>
using namespace std;

class Employee {
private:
	int em_id;
	string em_name;
	string em_addr;
	int em_phon;

public:
	Employee() {
		em_id = 0;
		em_name = "";
		em_addr = "";
		em_phon = 0;
	}

	void setId(int);
	int getId();

	void setName(string);
	string getName();

	void setAddr(string);
	string getAddr();

	void setPhon(int);
	int getPhon();

};
