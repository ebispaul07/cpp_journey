#include<iostream>
using namespace std;

class node {
public:
	int v;
	node* ptr;

	void createNode() {
		cout << "Enter node:";
		cin >> v;
		node*ptr =NULL;

		ptr = &v;

	}
};

int main() {
	
	/*
	//Allocate
	 node n1, n2, n3;

	//initialize
	n1.v = 10;
	n1.ptr = NULL;

	n2.v = 20;
	n2.ptr = NULL;

	n3.v = 30;
	n3.ptr = NULL;

	//relation

	n1.ptr = &n2;
	n2.ptr = &n3;

	struct node* head = &n1;

	while (head != NULL) {
		cout << head->v << "->";
		head = head->ptr;
	}
	cout << "NULL" << endl;

	*/

}