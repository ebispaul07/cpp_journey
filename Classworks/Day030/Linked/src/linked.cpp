#include <iostream>
using namespace std;

class Node
{
private:
	int data;
	Node* next;
public:
	Node(int d = 0) {
		data = d;
		next = nullptr;
		cout << "Constr of Node got called: data=" << data << endl;
	}
	int getData();
	int setData(int);
	Node* getNext();
	void setNext(Node*);
	//void delnode(int);

};


int Node::getData()
{
	return data;
}

int Node::setData(int v) {
	data = v;
	return 0;
}


Node* Node::getNext()
{
	return next;
}

void Node::setNext(Node* nn)
{
	next = nn;
}


class LinkedList {
private:
	Node* head = nullptr;
public:
	LinkedList() {
		//createNode
		head =nullptr;
	}
	//LinkedList(int) {}

	int addBeg(int);
	int addEnd(int);
	void addAfter(int, int);
	void display();
	bool delNode(int);
};

void LinkedList::addAfter(int target, int val) {
	bool found = false;
	Node* temp = head;

	while (temp != nullptr) {
		if (temp->getData() == target) {
			found = true;
			break;
		}
		temp = temp->getNext();
	}

	if (found == true) {
		Node* nn = new Node;
		nn->setData(val);
		nn->setNext(temp->getNext());
		temp->setNext(nn);

	}
	else {
		cout << "Target" << target << "not Found in the list" << endl;
		//if requirement is add new element is mandaatory. it couldbe added at 
		//the end of the list if target not found...
	}
}


int LinkedList::addEnd(int v) {
	//cretae new node
	Node* nn = new Node;

	nn->setData(v);//setvalue

	if (head == nullptr)
	{
		//empty list and first node
		head = nn;
		//temp = n;
	}
	else
	{
		Node* temp = head;
		while (temp->getNext() != nullptr)
			temp = temp->getNext();
		temp->setNext(nn);
		//!(down) debugging statement using step into and step over
		cout << "New Node Add with value:" << temp->getData() << nn->getData();
		//head->setNode(n);
		//head = head->getNode();
	}

	return 0;
}



void LinkedList::display()
{
	Node*temp=head;
	while (head != nullptr) {
		cout << temp->getData() << endl;
		temp = temp->getNext();
	
	}
	cout << "Null"<<endl;

}


bool LinkedList::delNode(int target) {
	Node* temp = head;
	

	while ((temp!=nullptr))
	{	
		if (temp->getNext()->getData() == target)
			break;
			temp=temp->getNext();
	}
	Node* fptr = temp;
	Node* sptr = temp->getNext();

	cout << "fptr: " << fptr->getData() << "\tsptr: " << sptr->getData() << endl;
	fptr->setNext(sptr->getNext());
	delete sptr;


	return true;
}


int main()
{
	//LinkedList l1(10);
	LinkedList l2;
	l2.addEnd(10);
	l2.addEnd(11);
	l2.addEnd(12);

	l2.display();

	int target = 11;
	int val = 50;

	l2.addAfter(target, val);
	l2.display();

	l2.delNode(12);
	l2.display();

	return 0;
}



