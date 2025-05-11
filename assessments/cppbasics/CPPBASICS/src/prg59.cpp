//59.Calculator Using Switch-Case

#include<iostream>
using namespace std;

int main() {

	int num1;
	cout << "Enter 1st Number:";
	cin >> num1;

	int num2;
	cout << "Enter 2nd Number:";
	cin >> num2;

	cout << endl;

	char ch;
	cout << "Enter Any One Operation(+/-/*/%):";
	cin >> ch;

	

	switch (ch) {
	case '+':
		cout << num1 + num2;
		break;

	case'-' :
		cout << num1 - num2;
		break;

	case'*':
		cout << num1 * num2;
		break;

	case'%':
		cout << num1 % num2;
		break;
	}



}