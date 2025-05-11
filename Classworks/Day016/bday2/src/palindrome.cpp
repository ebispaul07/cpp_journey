/*

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter Any Number:";
	cin >> num;

	int digit = 0,rev=0;
	int orig = num;

	while (num > 0) {
		digit = num % 10;
		rev = rev * 10 + digit;
		num = num / 10;
	}

	if (orig == rev) {
		cout << "Palindrome";

	}
	else {
		cout << "Not Palindrome";
	}
	

}

*/

//pallin array

#include<iostream>
using namespace std;
#define MAX 100

int main() {
	
	int palin[MAX];

	int size=0;
	cout << "Enter The Size:";
	cin >> size;

	cout << "Enter value of array:";
	for (int i = 0;i < size;i++) {
		cin >> palin[i];
	}

	int rev[MAX];
	int j = 0;
	cout << "reve";
	for (int i = size - 1;i >= 0;i--) {
		rev[j++] = palin[i];
	}

	for (int i = 0;i < size;i++) {
		cout << rev[i] << endl;
	}
	bool flag;
	
	for (int i = 0;i < size;i++) {
		flag = false;
		if (palin[i] == rev[i]) {
			cout << "Palindrome";
		}
		else {
			cout << "Not Palindrome";
		}
		break;
	}


}