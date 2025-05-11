//32.Write a Program to print an Inverted Pyramid

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter Any Number:";
	cin >> num;

	for (int i = 0;i <=num;i++) {
		for (int j = 0;j < num - i;j++) {
			cout << " ";
		}
		for (int k = 0;k < 2 * i - 1;k++) {
			cout << "*";
		}
		cout << endl;
	}
}