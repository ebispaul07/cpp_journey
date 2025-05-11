//11.Write a Program to Remove All Characters From a String Except Alphabets

#include<iostream>
using namespace std;
#define MAX 100

int main() {

	char str[MAX];
	cout << "Enter Any String:";
	cin.getline(str, 100);

	for (int i = 0;str[i] != '\0';i++) {
		if (str[i]) {
			if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') {
				cout << str[i];
			}
		}
	}

}