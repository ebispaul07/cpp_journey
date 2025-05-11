#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter:";
	cin >> num;
	int digit;
	for (int i = 0;i <= num;i++) {
		digit = num % 2;
		num = digit / 2;
		
	}
	cout << num;
	
}

//output dont get