//60.Find Sum of Digits of a Number

#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter Any Number:";
	cin >> num;

	int digit;
	int sum = 0;

	while (num > 0) {
		digit = num % 10;
		sum = sum + digit;
		num = num / 10;
	}
	cout << sum;
}