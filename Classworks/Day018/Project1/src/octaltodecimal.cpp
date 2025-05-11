#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter the number:";
	cin >> num;

	int digit = 0,oct;
	int place = 0,sum=0;

	while (num > 0) {
		digit = num % 10;
		oct = digit * pow(8, place);
		sum = sum + oct;
		num = num / 10;
		place++;
	}
	cout << sum;

}