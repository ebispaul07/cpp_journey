#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter A Year:";
	cin >> num;

	if (num / 4 == 0 && num % 100 || num % 400) {
		cout << "Leap Year";
	}
	else {

		cout << "Not Leap Year";
	}
}
