#include<iostream>
using namespace std;

int main() {
	int num=1;
	cout << "Enter:";
	cin >> num;

	while (num>=0) {
		cout << num;
		num--;
	}
}