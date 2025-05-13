#include<iostream>
using namespace std;

int main() {

	int a[] = { 10,20,30 };
	
	int* ptr = a;

	//cout << *ptr++ << endl;
	//cout << ++*ptr << endl;
	cout << *ptr++ << endl;

	ptr = a;//reassign to base address

	int prod = *ptr * *ptr;
	cout << prod << endl;

	cout << sizeof(ptr) << endl;
	cout<<sizeof(void*) << endl;

	return 0;


}