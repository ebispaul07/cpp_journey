//40.Write a Program to Count the Sum of Numbers in a String

#include<iostream>
using namespace std;
#define MAX 100

int main() {

	char ch[MAX];
	cout << "Enter Any Numbers:";
	cin.getline(ch, 100);

	int sum=0;
	int num[MAX];
	for (int i = 0;i < strlen(ch);i++) {
		num[i] = ch[i];
	}
	

	for (int i = 0;i < strlen(ch);i++) {

		sum = sum + i;

	}

	cout << sum;




}