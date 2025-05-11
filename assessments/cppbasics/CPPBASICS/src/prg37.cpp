//37.Write a Program to Check if the Given String is Palindrome or not Using Recursion

#include<iostream>
using namespace std;
#define MAX 100

int main() {
	char str[MAX];
	cout << "Enter Any String:";
	cin.getline(str, 100);

	bool flag = true;

	for (int i = 0;i < strlen(str);i++) {
		if (str[i] != str[strlen(str) - 1 - i]) {
			flag = false;
			break;
		}
	}

	if (flag) {
		cout << "Palindrome";

	}
	else {
		cout << "Not Palindrome";
	}
}