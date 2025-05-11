//58.Check if a Character is an Uppercase Letter

#include<iostream>
using namespace std;

int main() {

	char ch;
	cout << "Enter Any Character:";
	cin >> ch;

	if (ch >=65 && ch <= 90) {
		cout << "Upper Case";
	}
	else {
		cout << "Lower case";
	}

}