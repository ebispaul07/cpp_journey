#include<iostream>
#include"employee.h"
#include"financial.h"

using namespace std;
	
	Financial::Financial () {
		
		head = nullptr;
	}

	
	
	void Financial::setHead(Employee*head) {
		this->head = head;
	}
	Employee* Financial::getHead() {
		return head;
	}

	void Financial::addEmployee(int id, string name, string dept) {
		Employee* nn = new Employee();
		nn->setId(id);
		nn->setName(name);
		nn->setDept(dept);

		nn->setNext(nullptr);

		if (head == nullptr) {
			head = nn;
		}
		else {
			Employee* temp = head;
			while (temp->getNext() != nullptr) {
				temp = temp->getNext();
			}
			temp->setNext(nn);
		}
		cout << "Employee Added!!!" << endl;
	}


	void Financial::display() {
		cout << "Employee Details..." << endl;
		Employee* temp = head;
		if (head == nullptr) {
			cout << "No Employee not Found";
			return;
		}
		while (temp != nullptr) {
			cout << "ID: " << temp->getId()
				<< ", Name: " << temp->getName()
				<< ", Department: " << temp->getDept() << endl;
			temp = temp->getNext();
		}

	}


	




