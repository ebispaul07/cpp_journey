//28.Write a Program to Print a Pyramid Pattern

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter Any Number:";
	cin >> num;

	for (int i = 1;i < num;i++) {
		for (int j = 1;j <= num - i;j++) {
			cout << " "; 
		}
		for (int k = 0;k < 2 * i - 1;k++) {
			cout << "*";
		}
		cout << endl;
	}
}