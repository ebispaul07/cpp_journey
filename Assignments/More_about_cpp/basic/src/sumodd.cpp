#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter integer:";
	cin >> num;

	int digit,sum=1;

	for (int i = 0;i <= num;i++) {
		digit = num % 10;
		if (digit % 2 != 0) {
			sum += digit;
		}
		num = num / 10;
	}
	cout << sum;
}