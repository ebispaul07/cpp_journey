#include<iostream>
using namespace std;

int main() {
	int a;
	cout << "Enter 1st Number:";
	cin >> a;

	int b;
	cout << "Enter 2nd Number:";
	cin >> b;

	int c;
	cout << "Enter 3rd Number:";
	cin >> c;

	int d;
	cout << "Enter 4th Number:";
	cin >> d;

	int e;
	cout << "Enter 5th Number:";
	cin >> e;

	int max = a;

	if (max> b) {
		cout << max;
	}
	else if (b > c) {
		cout << b;
	}
	else if (c > d) {
		cout << c;
	}
	else if (d > e) {
		cout << d;
	}
	else {
		cout << e;
	}
}