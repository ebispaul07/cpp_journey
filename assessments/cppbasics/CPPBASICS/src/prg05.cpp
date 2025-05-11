//5.Write a Program to Check Whether a Character is a Vowel or Consonant

#include<iostream>
using namespace std;

int main() {

	char arr[10] = { 'A','a','E','e','I','i','O','o','U','u' };
	
	char ch;
	cout << "Enter Your Character to check Vowel or Consonents:";
	cin >> ch;

		if (arr[0] == ch|| arr[1] == ch|| arr[2] == ch|| arr[3] == ch|| arr[4] == ch|| arr[5] == ch||
			arr[6] == ch|| arr[7] == ch|| arr[8] == ch|| arr[9] == ch) {
			cout << "It's Vowel";
		}
		else {
			cout << "It's Consonent";
		}
		
		
	

}