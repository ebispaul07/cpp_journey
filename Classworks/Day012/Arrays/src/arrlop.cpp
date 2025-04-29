#include<iostream>
using namespace std;

int main() {
	int arr[10];

	for (int i = 0;i <=9;i++) {
		cout << "Enter Some number "<<i<<"::";
		cin >> arr[i];
	}

	int num;
	cout << "Enter value to check is it in array:";
	cin >> num;
	for (int j = 0;j <= 9;j++) {
		if (arr[j] == num) {
			cout << "avail";
			return 0;
		}
		
	}

	cout << "not";




}