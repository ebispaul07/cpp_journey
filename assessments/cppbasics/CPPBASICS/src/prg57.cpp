//57.Swap Two Numbers Using XOR Operator

#include<iostream>
using namespace std;

int main() {

	int a;
	cout << "Enter Any Number:";
	cin >> a;

	int b;
	cout << "Enter Any number:";
	cin >> b;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	cout << a << endl;
	cout << b << endl;



}