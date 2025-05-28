#include<iostream>
#include"emplo.h"
#include "linkedlist.h"
#include"linkedlist.h"
#include<string>
using namespace std;



void Employee::setId(int i) {
	id = i;
}
int Employee::getId() {
	return id;
}
void Employee::setName(string n) {
	name = n;
}
string Employee::getName() {
	return name;
}
void Employee::setSalary(float s) {
	salary = s;
}
float Employee::getSalary() {
	return salary;
}

void Employee::setNext(Employee* nn) {
	next = nn;
}
Employee* Employee::getNext() {
	return next;
}
