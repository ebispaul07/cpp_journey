#include<iostream>
using namespace std;
#define MAX 100

int main() {

	int num, arr[MAX], rev = 0, digit;
	cout << "Enter Any Number:";
	cin >> num;

	
	cout << "Enter the array number: ";
	for (int i = 0;i < num;i++) {
		cin >> arr[i];
	}

	cout << endl;

	int num3;
	cout << "Enter:";
	cin >> num3;

	while (num3 !=0) {
		
		digit = arr[2],arr[1],arr[0] % 10;
		rev = rev * 10 + digit;  
		num3 = arr[2], arr[1], arr[0] / 10;
		
	}
	cout << rev;
}