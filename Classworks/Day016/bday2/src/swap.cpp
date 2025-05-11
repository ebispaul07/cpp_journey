/*

#include<iostream>
using namespace std;

int main() {
	int a;
	cout << "Enter First Number:";
	cin >> a;

	int b;
	cout << "Enter second Number:";
	cin >> b;

	a = a + b;
	b = a - b;
	a = a - b;

	cout << a << endl;
	cout << b << endl;

}
*/


//using function 

#include<iostream>
using namespace std;

void fun(int a, int b) {

	a = a + b;
	b = a - b;
	a = a - b;

	cout << a;
	cout << b;

}

int main() {

	int a;
	cout << "Enter 1:";
	cin >> a;

	int b;
	cout << "Enter 2:";
	cin >> b;

	fun(a, b);

}

