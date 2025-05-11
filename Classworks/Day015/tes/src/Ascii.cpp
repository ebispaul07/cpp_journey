/*


#include<iostream>
using namespace std;

int main() {
	char ch;
	cout << "Enter Your Character:";
	cin >> ch;

	int val = ch;

	cout << val << endl;
	printf("%d", val);

	char con[10] = { 'A','E','I','O','U' };

	for (int i = 0;i <= 10;i++) {
		if (ch == con[i]) {
			cout << "vowel";
		}
		else {
			cout << "it contain consonent";
		}
		break;
	}
	
	
}

*/

//without using array

/*
#include<iostream>
using namespace std;

int main() {

	char ch;
	cout << "Enter Your Number:";
	cin >> ch;

	int num = ch;
	
	for (int i = 65;i <= 120;i++) {
		if (num < 121) {
			cout << "It is character";
		}
		else {
			cout << "Not a Character";
		}
		break;
	}

	
}

*/

#include<iostream>
using namespace std;

int main() {

	char ch;
	cout << "Enter Ur Chracter:";
	cin >> ch;


	char start1 = 'S',start2='s';
	char end1 = start1 + 25;
	char end2 = start2 + 25;

	if (ch >= start1 && ch <= end1) {
		cout << "it is a Character";
	}
	
	else if (ch >= start2 && ch >= end2) {
		cout << "it is a Character";
	}
	else {
		cout << "it is not a character";
	}
	

}