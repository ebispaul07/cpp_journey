//Number Star Pattern

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter Any Number:";
	cin >> num;

	int count = 0;

	for (int i = 1;i <= num;i++) {
		for (int j = 1;j <= i;j++) {

			cout << "*";
			count++;
			cout << count;


		}

		cout << endl;

	}



		for (int i = num - 1;i >= 1;i--) {
			for (int j = 1;j <= i;j++) {
				cout << "*";

				count--;
				cout << count;
			}
			cout << endl;
		}


	
}