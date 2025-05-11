//15.Write a Program to Find a Leap Year or Not

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter Any Year:";
	cin >> num;

	if (num % 4 == 0 && num % 100 != 0 || num % 400 == 0) {
		cout << "It's a Leap year";
	}
	else {
		cout << "Not a Leap year";
	}
}
