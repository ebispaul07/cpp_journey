//56. Calculate Compound Interest

//A = P * (1 + R/100)^T, CI = A - P

#include<iostream>
using namespace std;

int main() {
	int p;
	cout << "Enter Principle:";
	cin >> p;

	int r;
	cout << "Enter Rate:";
	cin >> r;

	int t;
	cout << "Enter Time:";
	cin >> t;

	float A = p * (1 + r / 100) ^ t;

	
	float CI = A - p;

	cout << CI;

}