#include<iostream>
#include"emplo.h"
#include "linkedlist.h"
#include<string>
using namespace std;


void Linkedlist::addEmployee(int a, string b, float c) {
	Employee* nn = new Employee();


	nn->setId(a);
	nn->setName(b);
	nn->setSalary(c);
	nn->setNext(head);
	head = nn;
	count++;
}

void Linkedlist::display() {
	cout << "\tList is " << endl;
	cout << "\t";
	Employee* temp = head;
	while (temp != NULL)
	{
		cout << temp->getId() << " -> " << temp->getName() << "->" << temp->getSalary() << endl;;

		temp = temp->getNext();


	}
	cout << "NULL" << endl;

}

void Linkedlist::deleteEmployee(int id) {
	Employee* ptr2 = head;
	Employee* ptr1 = nullptr;

	while (ptr2 != nullptr) {
		if (ptr1->getId() == id) {
			ptr2->getNext(ptr1->getNext());
			delete ptr1;
			break;
		}
		ptr2 = ptr1;
		ptr1 = ptr1->getNext();
	}
}

void Linkedlist::countEmployee() {
	cout << count;
}

void Linkedlist::searchEmployee(string name) {
	Employee* temp = head;

	
		while (temp != nullptr)
		{
			cout << "Searched Elements :" << endl;
			if (head->getName() == name) {
			 cout<<temp->getName();
			 temp = temp->getNext();
			 break;
			 }
			cout << "the serched Element is not available!!" << endl;
		}
		
	
}
void updateSalary();
