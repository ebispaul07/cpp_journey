//26.Write a Program to Check if Two Strings are Anagram or Not

#include<iostream>
using namespace std;
#define MAX 100

int main() {
	char str1[MAX];
	cout << "Enter your first word:";
	cin.getline(str1, 100);

	char str2[MAX];
	cout << "Enter your second word:";
	cin.getline(str2,100);

	int flag;

	for (int i = 0;i < strlen(str1);i++) {
		 flag = 1;
		for (int j = 0;j < strlen(str2);j++) {
			if (str1[i] == str2[j]) {
				
				flag = 0;
				break;
			}
			
		}
		if (flag == 1) {
			break;
		}
	}

	if (flag == 1) {
		cout << "not an anagram";
	}
	else {
		cout << "Anagram";
	}



}