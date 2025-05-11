//34.Write a Program to Print Floyd's Triangle

#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter Any Number:";
	cin >> num;

	int count = 1;

	for (int i = num;i >0;i--) {
		for (int j = 0;j <= num - i;j++) {
			cout << count<<" ";
			count++;
		}
		cout << endl;
	}

}