#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter:";
	cin >> num;

	int a = 0, b = 1;

	int next;

	for (int i = 0;i<=num;i++) {
		cout << a << " ";

		next = a + b;
		a = b;
		b = next;

		
	}
}