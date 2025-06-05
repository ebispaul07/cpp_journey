#include<iostream>
using namespace std;

class Employee {
protected:
	int id;
	Employee* next;
public:
	Employee() {
		id = 0;
		next = nullptr;
	}

	void setId(int id){
		this->id = id;
	}
	int getId() {
		return id;
	}

	void setNext(Employee*nn) {
		this->next = nn;
	}
	Employee* getNext() {
		return next;
	}

};

class Details {
protected:
	Employee* head;
public:
	Details() {
		head = nullptr;
	}
	Employee* createNode(int a) {
		Employee* nn = new Employee();

		nn->setId(a);
		nn->setNext(head);
		head = nn;
		return nn;
	}

	void insertEnd(int v) {
		Employee* nn = new Employee();
		nn->setId(v);
		nn->setNext(nullptr);
		if (head==nullptr) {
			head = nn;
		}
		Employee* ptr = head;

		while (ptr->getNext() != nullptr) {
			ptr = ptr->getNext();
		}
		ptr->setNext(nn);
	}

	void display() {
		cout << "List is:" << endl;
		Employee* temp = head;
		while (temp != nullptr) {
			cout << temp->getId()<<"->";
			temp = temp->getNext();
		}
		cout << "NULL";
	}

};



int main() {
	Employee e1;
	Details d1;

	d1.createNode(10);
	d1.createNode(20);
	d1.createNode(30);
	d1.display();
	d1.insertEnd(40);
	d1.display();

}