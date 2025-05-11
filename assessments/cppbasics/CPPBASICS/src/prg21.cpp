//21.Write a Program to Calculate the Lowest Common Multiple (LCM) of Two Numbers

#include<iostream>
using namespace std;

int main() {

	int a;
	cout << "Enter first Number:";
	cin >> a;

	int b;
	cout << "Enter second Number:";
	cin >> b;

	int temp;
	int g = a;
	int c = b;

	while (b != 0) {
		temp = b;
		b = a % b;
		a = temp;
	}

	cout << (g * c) / a;

}