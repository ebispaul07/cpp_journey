#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter any number:";
	cin >> num;

	int decto=0;

	while (num > 0) {
		decto = num % 8;
		cout << decto;
		num = num / 8;
		
	}
}