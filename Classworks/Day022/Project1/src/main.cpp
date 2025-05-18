#include<iostream>
using namespace std;

int main() {

	int* ptr = NULL;

	cout <<"Pointer Value: " << ptr << endl;
	cout <<"Address Of pointer: " << &ptr << endl;


	int a = 10;
	cout << "Value Of A: " << a << endl;
	cout << "Adress of a: " <<& a << endl;
	ptr = &a;
	*ptr = 20;
	cout <<"Pointer Points the content of A: " << *ptr<<endl;//derefernece (contents contents of ptr)




}