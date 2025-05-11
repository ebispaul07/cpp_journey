//2.Write a Program to Find the Greatest of the Three Numbers.

#include<iostream>
using namespace std;

int main() {

	int a;
	cout << "Enter Your First Number:";
	cin >> a;

	int b;
	cout << "Enter Your Second Number:";
	cin >> b;

	int c;
	cout << "Enter Your Third Number:";
	cin >> c;

	if (a >= b && a >= c) {
		cout << a << " is Greater" << endl;
	}
	else if (b >= a && b >= c) {
		cout << b << " is Greater" << endl;
	}
	else {
		cout << c << " is Greater" << endl;
	}

}