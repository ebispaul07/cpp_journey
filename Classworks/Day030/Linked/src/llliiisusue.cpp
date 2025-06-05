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
	void setId(int id) {
		this->id = id;
	}
	int getId() {
		return id;
	}

	void setNext(Employee* nn) {
		next = nn;
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
	//create Node
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

		if (head == nullptr) {
			head = nn;
		}

		Employee *ptr = head;

		while (ptr->getNext() != nullptr) {
			ptr = ptr->getNext();
		}
		ptr->setNext(nn);
	}

	void display() {
		cout << "List is: " << endl;
		Employee* temp = head;

		while (temp != nullptr) {
			cout << temp->getId() << "->";
			temp = temp->getNext();
		}
		cout << "NULL";
	}

};

int main() {
	Details d1;
	d1.createNode(10);
	d1.createNode(20);
	d1.createNode(30);
	d1.createNode(40);
	d1.display();
	d1.insertEnd(90);
	d1.display();

}

/*
//delete
void deleteNode(int id) {
	if (head == nullptr) {
		cout << "List is empty. Nothing to delete." << endl;
		return;
	}

	Employee* temp = head;
	Employee* prev = nullptr;

	// If head needs to be deleted
	if (temp->getId() == id) {
		head = head->getNext();
		delete temp;
		cout << "Node with ID " << id << " deleted (from head)." << endl;
		return;
	}

	// Traverse the list to find the node
	while (temp != nullptr && temp->getId() != id) {
		prev = temp;
		temp = temp->getNext();
	}

	// If not found
	if (temp == nullptr) {
		cout << "Node with ID " << id << " not found." << endl;
		return;
	}

	// Bypass and delete
	prev->setNext(temp->getNext());
	delete temp;
	cout << "Node with ID " << id << " deleted." << endl;
}


*/

/*
//update
void updateNode(int oldId, int newId) {
	if (head == nullptr) {
		cout << "List is empty. Cannot update." << endl;
		return;
	}

	Employee* temp = head;

	while (temp != nullptr) {
		if (temp->getId() == oldId) {
			temp->setId(newId);
			cout << "Node with ID " << oldId << " updated to " << newId << "." << endl;
			return;
		}
		temp = temp->getNext();
	}

	cout << "Node with ID " << oldId << " not found." << endl;
}

*/

/*
//search
void searchNode(int id) {
	if (head == nullptr) {
		cout << "List is empty. Cannot search." << endl;
		return;
	}

	Employee* temp = head;
	int position = 1;

	while (temp != nullptr) {
		if (temp->getId() == id) {
			cout << "Node with ID " << id << " found at position " << position << "." << endl;
			return;
		}
		temp = temp->getNext();
		position++;
	}

	cout << "Node with ID " << id << " not found in the list." << endl;
}

*/