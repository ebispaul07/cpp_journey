/*
#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter number:";
	cin >> num;

	int orig = num;
	int gou = orig;

	int count = 0;
	int digit;
	while (num > 0) {
		digit = num % 10;
		num = num / 10;
		count++;
	}

	//cout << count;

	
	int sum = 0;
	while(orig>0){

		digit = orig % 10;
		
		sum = sum + pow(digit,count);
		orig = orig / 10;
	}

	cout << sum<<endl;

	if ( gou== sum) {
		cout << "amstrong";
	}
	else {
		cout << "not";
	}

}

*/

#include<iostream>
using namespace std;

int countDigits(int num) {

	int count = 0;
	int digit;
	while (num > 0) {
		digit = num % 10;
		num = num / 10;
		count++;
	}
	
	return count ;
}


bool checkArmstrong(int orig, int p)
{   
	int digit,sum=0,gou=orig;
	while (orig>0) {
		digit = orig % 10;
		sum = sum + pow(digit, p);
		orig = orig / 10;
	}

	if (sum ==gou ) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	int num;
	cout << "Enter number:";
	cin >> num;

	int orig = num;
	int gou = orig;

	




}