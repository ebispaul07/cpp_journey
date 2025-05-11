//20.Write a Program to Calculate the Greatest Common Divisor of Two Numbers

#include<iostream>
using namespace std;

int main() {

	int a;
	cout << "Enter any First Number:";
	cin >> a;

	int b;
	cout << "Enter any second Number:";
	cin >> b;

	int temp;

	while (b != 0) {
		 temp = b;
		b = a % b;
		a = temp;
	}
		cout << a;

	

}