//16.Write a Program to Check the Prime Number

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter Your Number:";
	cin >> num;

	
		if (num % 2 != 0 && num % 3 != 0||num==3) {
			cout << "Prime Number";
		}
		else {
			cout << "Not Prime";
		}
	






}