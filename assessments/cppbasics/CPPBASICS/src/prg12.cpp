//12.Write a Program to Remove Spaces From a String

#include<iostream>
using namespace std;
#define MAX 100

int main() {

	char str[MAX];
	cout << "Enter Any String:";
	cin.getline(str,100);

	for (int i = 0;str[i] != '\0';i++) {
		if (str[i] != ' ') {
			cout << str[i];
		}
	}

}