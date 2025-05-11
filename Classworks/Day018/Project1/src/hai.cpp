#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter Any Number:";
	cin >> num;

	for (int i = 0;i < num;i++) {//rows
		for (int j = 0;j <= i;j++) {//spaces
			cout << "*";
		}
		for (int k = num-i;k>0;k--) {//stars
			cout << "  ";
		}
		for (int l = 0;l < i + 1;l++) {
			cout << "*";
		}
		

		cout << endl;
	}

	for (int i = 1;i <num;i++) {
		for (int j = num-i;j > 0;j--) {
			cout << "*";
		}
		for (int k = 0;k <=i ;k++) {
			cout << "  ";
		}
		for (int l = num - i;l > 0;l--) {
			cout << "*";
		}

		cout << endl;
	}
}