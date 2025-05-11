#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter:";
	cin>>num;

	int digit;

	for (int i = 0;i<= num;i++) {
		digit = num % 10;

		if (digit != 0) {
			cout << num<<endl;
		}

		num = num / 10;
	}
}