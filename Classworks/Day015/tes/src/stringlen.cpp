#include<iostream>
using namespace std;

int main() {

	char ch[] = { 0 };
	cout << "Enter ur string:";
	cin >> ch;

	int count = 0;
	
	while (ch[count] != '\0') {
		count++;
	}
	

	cout << count;
}