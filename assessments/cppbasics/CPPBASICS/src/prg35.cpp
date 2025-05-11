//35.Write a Program to Print the Given String in Reverse Order

#include<iostream>
using namespace std;
#define MAX 100

int main() {

	char str[MAX];
	cout << "Enter Your String:";
	cin.getline(str, 100);

	for (int i = strlen(str);i >= 0;i--) {
		cout << str[i];
	}

}