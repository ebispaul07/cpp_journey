//1.Write a C++ Program to Check Whether a Number is a Positive or Negative Number

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter your Number To Check (Positive/Negative):";
	cin >> num;

	if (num > 0) {
		cout << "Positive Number !" << endl;
	}
	else {
		cout << "Negative Number !" << endl;
	}
}