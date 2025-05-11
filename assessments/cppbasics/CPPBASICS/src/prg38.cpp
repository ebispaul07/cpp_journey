//38.Write a Program to Calculate the Length of the String Using Recursion

#include<iostream>
using namespace std;
#define MAX 100

int main() {
	char str[MAX];
	cout << "Enter your String:";
	cin.getline(str, 100);

	cout << strlen(str);
}