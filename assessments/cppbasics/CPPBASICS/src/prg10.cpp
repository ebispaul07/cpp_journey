//10.Write a Program to Remove the Vowels from a String

#include<iostream>
using namespace std;
#define MAX 100

int main() {

	char str[MAX];
	cout << "Enter Any String:";
	cin.getline(str, 99);

	for (int i = 0;i < str[i] != '\0';i++) {
		if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
			str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
			cout << str[i];
		}
	}


}