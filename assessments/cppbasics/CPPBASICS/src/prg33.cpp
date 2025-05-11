//33.Write a Program to Print a Triangle Star Pattern

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter Your number:";
	cin >> num;

	for (int i = num;i >= 0;i--) {
		for (int j = 0;j < num - i;j++) {
			cout << "*";
		}
		
		cout << endl;
	}

}