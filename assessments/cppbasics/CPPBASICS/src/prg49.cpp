//49.Write a Program for Decimal Octal Conversion

#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter:";
	cin >> num;

	int digit = 0;
	
	

	while (num>0) {
		digit =  num%8;
		num = num / 8;
		cout << digit;
		
		
	}
	

	
	


	
	
}