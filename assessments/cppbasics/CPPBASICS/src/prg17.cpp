//17.Write a Program to Check Palindrome

#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter some Number to Check Wether (Palindrome/Not): ";
	cin >> num;

	int digit = 0;
	int rev=0;
	int orig = num;

	while (num > 0) {
		digit = num % 10;
		rev = rev * 10 + digit;
		num = num / 10;
	}

	if (orig== rev) {
		cout << "Palindrome : " << rev;
	}
	else {
		cout << "Not Palindrome : " << rev;
	}




}