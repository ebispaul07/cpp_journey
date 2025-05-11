#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter Any Number:";
	cin >> num;

	cout << "*" << endl;
	for (int i = 1;i <= num;i++) {
		
		for (int j = 1;j <= i +1;j++) {
			cout << "*";

		}
		cout <<endl;
	}

		for (int i = 0;i <= num;i++) {
			
			for (int j = i;j <= num - 1;j++) {
				cout << "*";
			}
			cout << endl;
		}
	
}