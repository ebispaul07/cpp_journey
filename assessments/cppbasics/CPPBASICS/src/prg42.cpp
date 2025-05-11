//42.Write a Program to Swap the Values of Two Variables Without Using any Extra Variable

#include<iostream>
using namespace std;

int main() {

	int a;
	cout << "Enter your First Number:";
	cin >> a;

	int b;
	cout << "Enter Your Second Number:";
	cin >> b;

	a = a + b;
	b = a - b;
	a = a - b;

	cout <<"A:" << a << endl;
	cout <<"B:" << b << endl;

}