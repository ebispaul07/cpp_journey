//44.Write a Program to Check for the Equality of Two Numbers Without Using Arithmetic or Comparison Operator

#include<iostream>
using namespace std;

int main() {

	int num1;
	cout << "Enter 1st Number:";
	cin >> num1;

	int num2;
	cout << "Enter 2nd Number:";
	cin >> num2;

	if (num1 ^ num2) {
		cout << "Not Equal";
	}
	else {
		cout << " Equal";
	}




}