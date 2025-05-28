#include<iostream>
#include "Emplo.h"
using namespace std;


void Employee::setId(int em_id) {
	this->em_id = em_id;
}
int Employee::getId() {
	return this->em_id;
}

void Employee::setName(string em_name) {
	this->em_name = em_name;
}
string Employee::getName() {
	return this->em_name;
}

void Employee::setAddr(string em_addr) {
	this->em_addr = em_addr;
}

string Employee::getAddr() {
	return this->em_addr;
}

void Employee::setPhon(int) {
	this->em_phon = em_phon;
}
int Employee::getPhon(){
	return this->em_phon;
	
	}




