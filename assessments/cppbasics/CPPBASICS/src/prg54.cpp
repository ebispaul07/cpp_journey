//54.Write a program in C++ to convert temperature in Fahrenheit to Celsius.

#include<iostream>
using namespace std;

int main() {
	int faren;
	cout << "Enter Fahrenheit:";
	cin >> faren;

	float celsi = (5.0 / 9.0 )* (faren - 32);

	cout <<"Celsius : " << celsi << endl;
}