//Linear Linked List..........

#include<iostream>
using namespace std;


struct node {
	int v;
	struct node* ptr;
};





int main() {

	// Step1: Allocating memory for different nodes
	struct node n1, n2, n3,n4,n5,n6;

	cout << sizeof(n1) << "Address of n1" << (unsigned long int) & n1 << endl;
	cout << sizeof(n2) << "Address of n1" << (unsigned long int) & n2 << endl;
	cout << sizeof(n3) << "Address of n1" << (unsigned long int) & n3 << endl;
	cout << sizeof(n4) << "Address of n1" << (unsigned long int) & n4 << endl;
	cout << sizeof(n5) << "Address of n1" << (unsigned long int) & n5 << endl;
	cout << sizeof(n6) << "Address of n1" << (unsigned long int) & n6 << endl;

	//step2: initialization 

	n1.v = 10;
	n1.ptr = NULL;

	n2.v = 20;
	n2.ptr = NULL;

	n3.v = 30;
	n3.ptr = NULL;

	n4.v = 40;
	n4.ptr = NULL;

	n5.v = 50;
	n5.ptr = NULL;

	n6.v = 60;
	n6.ptr = NULL;



	cout << "n1 value" << n1.v << "\tptr" << n1.ptr << endl;
	cout << "n2 value" << n2.v << "\tptr" << n2.ptr << endl;
	cout << "n3 value" << n3.v << "\tptr" << n3.ptr << endl;
	cout << "n2 value" << n4.v << "\tptr" << n4.ptr << endl;
	cout << "n3 value" << n5.v << "\tptr" << n5.ptr << endl;
	cout << "n2 value" << n6.v << "\tptr" << n6.ptr << endl;

	//STEP3:  make a relationship
	n5.ptr = &n1;
	n1.ptr = &n2;
	n1.ptr = &n4;
	n4.ptr = &n2;
	n2.ptr = &n3;
	n3.ptr = &n6;

	cout << "After Making RelationShip"<<endl;
	cout << "n1 value" << n1.v << "\tptr" << n1.ptr<< (unsigned long int) & n1 << endl;
	cout << "n2 value" << n2.v << "\tptr" << n2.ptr << (unsigned long int) & n2 << endl;
	cout << "n3 value" << n3.v << "\tptr" << n3.ptr<< (unsigned long int) & n3 << endl;
	cout << "n3 value" << n4.v << "\tptr" << n4.ptr << (unsigned long int) & n4 << endl;
	cout << "n3 value" << n5.v << "\tptr" << n5.ptr << (unsigned long int) & n5 << endl;
	cout << "n3 value" << n6.v << "\tptr" << n6.ptr << (unsigned long int) & n6 << endl;


	//step4: traveseing in a list

	struct node*head = &n5;//n1=> BA of the list

	/*

	cout << n1.v << endl;//10
	cout << head->v << endl;//10
	cout << "Address of headofptr" << (unsigned long int)head->ptr << endl;

	//head = &n2;

	head = head->ptr;

	cout << n2.v << endl;//20
	cout << head->v << endl;//20

	//head = &n3;

	head = head->ptr;

	cout << n3.v << endl;
	cout << head->v << endl;
	*/

	while (head!=NULL) {
		cout << head->v <<"->";
		head = head->ptr;
	}

	cout << "Null" << endl;



}