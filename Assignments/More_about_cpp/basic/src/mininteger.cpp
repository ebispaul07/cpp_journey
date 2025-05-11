#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter Some integer:";
	cin >> num;

	int digit;
	int small = 9;

	for (int i = 1;i <= num;i++) {
		digit = num % 10;
		
		small = min(small,digit);
		
		num = num / 10;

	}
	
	cout << small;
	
}