#include<iostream>
#include<cstring>
using namespace std;

typedef struct node {
	int data;
	struct node* next;
}NODE;

void displayList(NODE*);


int main() {

	NODE* nn = NULL, * head = NULL, * temp = NULL;
	int  ch = 1;
	while (ch) {

		nn = (NODE*)malloc(sizeof(NODE));//create memory nodes
		cout << "Value of the Node:";
		cin >> nn->data; //initialize values
		nn->next = NULL;//initialize values
		 
		if (head == NULL) {
			//empty list
			head = nn;
			temp = nn;
		}
		else {
			head->next = nn;
			head = head->next;//make a relationship
		}
		cout << "Do you want to add a new node(0/1): ";
		cin >> ch;
	}

	head = temp;//head is again pointed to BA of list

	while (head != NULL) {
		cout << head->data << "->";
		head = head->next;
	}
	cout << "NULL" << endl;
}

void displayList(NODE* head) {
	cout << "List" << endl;
	while (head != NULL) {
		cout << head->data<<"->";
	}
	cout << "NULL";
}