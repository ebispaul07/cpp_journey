#include<iostream>
using namespace std;

int main() {
	char ch[10] = { 'A','E','I','O','U','a','e','i','o','u'};

	char word[] = {0};
	cout << "Enter your String:";
	cin >> word;

	int count = 0;

	for (int i = ch[0];i <= word[10];i++) {

		if (word==ch) {
			count++;
		}
		
		
		
	}

	cout << count;
}