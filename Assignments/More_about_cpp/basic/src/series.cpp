#include<iostream>
using namespace std;

int main() {
	int term = 1;

	cout << 1 <<"+";
	for (int i=0;i <= 10;i++) {
		term = term * 2;
		cout << term << "+";
	}
}