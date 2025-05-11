#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter any Number:";
	cin >> num;
	int digit;
	int sum = 1;
	for (int i = 1;i <= num;i++) {
		digit = num % 10;
		sum = sum + digit;
		num = num / 10;
	}
	
	cout << sum;
}