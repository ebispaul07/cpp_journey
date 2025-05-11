#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter Any Number:";
	cin >> num;

	for (int i = 1;i <= num/2;i++) {

		for (int j = 1;j <= num;j++) {

			cout <<" " << "*";
			
			
		}
		cout << endl;
	}
	for (int i = 1;i <= num/2;i++) {

		for (int j = 1;j <= num;j++) {

			cout <<" " << "@";


		}
		cout << endl;
	}
}