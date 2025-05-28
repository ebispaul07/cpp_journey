#include<iostream>
using namespace std;

class node {
private:
	int value;
	node* ptr;

public:
	void setValue(int v) {
		value = v;
	}
	int getValue() {
		return value;
	}
	void setPtr(node* p) {
		ptr = p;
	}
	node* getPtr() {
		return ptr;
	}

	void createNode() {
		cout << "Enter the new node:";
		cin >> ;
	}
};




class LinkedList
{
	node* head;
	node* createNode(int);
public:
	LinkedList();
	~LinkedList();
	void insertAtBeginning(int);
	void insertAtEnd(int);
	void deleteAtBeginning();
	void deleteAtEnd();
	void displayList();
	node* searchList(int);
	void updateList(node*, int);
};

void LinkedList::insertAtBeginning(int value) {
	cout << "Enter node:";
	cin >> value;
	
}

void LinkedList::displayList() {
	while (head != NULL) {
		cout << head->value << "->";
		head = head->getPtr;
	}
}

int main() {
	node n1;
	
	

}