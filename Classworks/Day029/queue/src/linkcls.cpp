#include<iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
public:

	Node() {
		data = 0;
		next = NULL;
	}

	void setData(int d) {
		data = d;
	}
	int getData() {
		return data;
	}
	void setNext(Node* n) {
		next = n;
	}
	Node* getNext() {
		return next;
	}


};

class LinkedList {
private:
	Node* head;

public:
	LinkedList() {
		head = NULL;
	}

	Node* createNode() {
	     Node* nn = (Node*)malloc(sizeof(Node));
		
		int v = 0;
		cout << "Enter the value of node: ";
		cin >> v;
	     nn->setData(v);
		 nn->setNext(head);
		return nn;
	}

	void addNodebeg(Node*nn) {
		
	
		if (head == NULL)
		{
			head = nn;
			return ;
		}
		
		nn->setNext(head);
		nn->getNext();
		head = nn;
		return ;
	}
	void addNodeEnd(Node* nn)
	{
		Node* temp = head;
		if (head == NULL) {
			head = nn;
			return ;
		}
		while (head->next != NULL)
			head = head->next;
		head->next = nn;
		head = temp;
		cout << temp;
	}

	/*void addNodeend(Node* nn) {
		if (head == NULL) {
			head = nn;
			return;
		}
		while (head != NULL)
			head = head->getNext();
		head->getNext = nn;
		//head = temp;

	}*/
	/*
	Node* addNodeEnd(Node* head, Node* nn)
	{
		Node* temp = head;
		if (head == NULL) {
			head = nn;
			return head;
		}
		while (head->getNext() != NULL)
			head = head->getNext();
		head->getNext() = nn;
		head = temp;
		return head;
	}
	*/

void display() {
		cout << "\tList is " << endl;
		cout << "\t";
		Node* temp = head;
		while (temp != NULL)
		{
			cout << temp->getData() << " -> ";
			temp = temp->getNext();

			
		}
		cout << "NULL" << endl;
		
	}

	int dispMenu()
	{
		int ch;
		cout << "Press," << endl;
		cout << "1. Add Node Begining" << endl;
		cout << "2. Add Node End" << endl;
		cout << "3. Display List" << endl;
		cout << "4. Exit.." << endl;
		cout<<"Choice: ";
		cin >> ch;
		return ch;
	}

};


int main() {
	
	LinkedList l1;
	Node n1;
	int ch = 1;
	while (ch) {
		switch (l1.dispMenu()) {

		case 1:
			l1.addNodebeg(l1.createNode());
			
			break;
		case 2:
			l1.addNodeEnd(l1.createNode());
			break;
		case 3:
			l1.display();
			break;
		case 4:
			return 0;
		}
		
		
	}
}