//3.C++ Program To Check Whether Number is Even Or Odd

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter Your Number To Check(Even/Odd):";
	cin >> num;

	if (num % 2 == 0) {
		cout << "It's Even Number"<<endl;
	}
	else {
		cout << "It's Odd Number"<<endl;
	}
}