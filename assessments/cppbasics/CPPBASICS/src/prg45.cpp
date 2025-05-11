//45.Write a Program to Find the Maximum and Minimum of the Two Numbers Without Using the Comparison Operator

#include<iostream>
using namespace std;

int main() {
	int a;
	cout << "Enter 1st Number:";
	cin >> a;

	int b;
	cout << "Enter 2nd Number:";
	cin >> b;

	cout << "max :" << (((a + b) + abs(a - b)) / 2) << endl;
	cout << "min :" << (((a + b) - abs(a - b)) / 2) << endl;
}






