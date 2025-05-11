//48.Write a Program for Decimal to Binary Conversion

#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter any number:";
	cin >> num;

	int digit=0;
	

	

	while (num > 0) {
		digit = num % 2;
		
		num = num / 2;
		cout << digit;
	}
	
}