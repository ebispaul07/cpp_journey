//13.Write a Program to Find the Sum of the First N Natural Numbers

#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter Any Number:";
	cin >> num;

	int digit = 0;
	int sum=0;

	while (num > 0) {
		digit = num % 10;
		sum = sum + digit;
		num = num / 10;
	}
	cout << sum;
}