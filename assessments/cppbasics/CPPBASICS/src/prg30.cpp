//30.Write a Program to Print the Rotated Hourglass Pattern

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter Any Number:";
	cin >> num;

	for (int i = num;i > 0;i--) {
		for (int j = 0;j < num - i;j++) {
			cout << "* ";
		}
		for (int k = 0;k < 2 * i - 2;k++) {
			cout << "  ";
		}
		for (int l = 0;l < num-i;l++) {
			cout << "* ";
		}
		cout << endl;
	}
	for (int i = 2;i <=num;i++) {
		for (int j = 0;j < num - i;j++) {
			cout << "* ";
		}
		for (int k = 0;k < 2 * i - 2;k++) {
			cout << "  ";
		}
		for (int l = num-i;l >0;l--) {
			cout << "* ";
		}
		cout << endl;
	}
}