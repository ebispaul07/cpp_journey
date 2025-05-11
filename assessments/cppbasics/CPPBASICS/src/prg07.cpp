//3.Write a Program to Find the Length of the String Without using strlen() Function

#include<iostream>
using namespace std;

#define MAX 100

int main() {


	char str[MAX];
	cout << "Enter Your String:";
	cin.getline(str,100);

	int len = 0;
	
	while (str[len] != '\0') {
		 len;
		len++;
	}

	cout << len;
	
	




}