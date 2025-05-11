//39.Write a Program to Calculate the Factorial of a Number Using Recursion

#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter Any Number:";
	cin >> num;

	int fact = 1;
	for (int i = 1;i <=num;i++) {
		fact = fact * i;
		
	}
	cout << fact;
	
}