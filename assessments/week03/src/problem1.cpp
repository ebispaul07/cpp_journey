#include<iostream>
using namespace std;

int main() {

	string str[20];
	cout << "Enter Any Sentence:";
	cin >> str[20];

	string are = "are";
	string in = "i";

	int substr1= str[20].substr(6, 12);
	int substr2 = str[20].substr(6, 12);

	if (str[20] == are) {
		cout << substr1;
	}
	
	if (str[20] == in) {
		cout << substr2;
	}

	int sum = substr1 + substr2;

	cout << "Sum:" << sum << endl;
	

	



}