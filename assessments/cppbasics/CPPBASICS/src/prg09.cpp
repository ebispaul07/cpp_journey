//9.Write a Program to Count the Number of Vowels

#include<iostream>
using namespace std;

#define MAX 100

int main() {

	char ch[MAX] = { 'a','e','i','o','u' };

	char str[MAX];
	cout << "Enter a Word:";
	cin.getline(str, 100);

	int count = 0;

	for (int i = 0; str[i] != '\0'; i++) {

		for (int j = 0;j < 5;j++) {
			if (str[i] == ch[j]) {
				count++;
			}
		}
	}

	cout << count;


}