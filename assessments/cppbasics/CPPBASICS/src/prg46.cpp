//46.Write a Program for Octal to Decimal Conversion

#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter Your Number:";
	cin >> num;

	int digit = 0;
	int cub=0;
	int place = 0;
	int sum=0;

	while (num > 0) {
		digit = num % 10;
		cub = digit * pow(8, place);
		sum = sum + cub;
		num = num / 10;
		place++;
	}
	cout << sum;



}