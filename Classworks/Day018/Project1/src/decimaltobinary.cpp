#include<iostream>
using namespace std;



int main() {
	int num;
	cout << "Enter the number:";
	cin >> num;

	int dec=0 ;

	while (num>0) {
		dec = num % 2;
		num = num / 2;
		cout << dec;
	}
	
	
}