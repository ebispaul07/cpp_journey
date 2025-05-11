#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter Number:";
	cin >> num;

	int sum = 0;

	for (int i = 1;i <= num;i++) {
		num = num /i;
		
		sum = sum + num;
		
		
	}
	if (sum == num) {
		cout << sum;
	}
	
	//not got
}