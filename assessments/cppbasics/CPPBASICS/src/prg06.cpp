//6.Write a Program to Print Check Whether a Character is an Alphabet or Not

#include<iostream>
using namespace std;

int main() {

	char ch;
	cout << "Enter a Chacter to check Alphabet or Not:";
	cin >> ch;

	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
		cout << "Its an Alphabet"<<endl;
	}
	else {
		cout << "Not an Alphabet"<<endl;
	}
		

}