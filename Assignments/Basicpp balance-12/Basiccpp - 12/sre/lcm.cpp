/*

#include<iostream>

using namespace std;

int main() {
	int a = 1;
	int b = 3;

	while (b != 0) {
		int temp = b;
		b = a%b;
		a = temp;

	}
	cout << a;
}
*/

#include<iostream>
using namespace std;

int main() {

	int a = 70;
	int a1 = a;
	int b = 60;
	int b1 = b;
/*
	while (b!=0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	*/

	

	for (int i = 1;i < a + b;i++) {
		if (a % i == 0 && b % i == 0) {
			cout << i << endl;
		}
	}
	int na = a;

	int lcm = a1 * b1 / na;
		cout << lcm;
}
