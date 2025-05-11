//8.Write a Program to Toggle Each Character in a String

#include<iostream>
using namespace std;
#define MAX 100

int main() {

	char ch[MAX];
	cout << "Enter your String:";
	cin.getline(ch, 100);

	for (int i = 0; ch[i] != '\0'; i++) {


		if (isupper(ch[i])) {
			ch[i] = tolower(ch[i]);
		}
		else if (islower(ch[i])) {
			ch[i] = toupper(ch[i]);
		}

	}
	
	cout << ch;

}