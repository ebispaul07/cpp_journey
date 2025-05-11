/*

#include<iostream>
using namespace std;

int main() {


	int num;
	cout << "Enter Any Number:";
	cin >> num;

	int digit;
	int rev=0;
	int octb=0;
	int place = 0;
	while (num != 0) {
		digit = num % 10;
		rev = rev * 10 + digit;
		
		octb = digit * pow(8, place);
		place++;
		num = num / 10;

		} 

	

	cout << octb<<endl;


}

*/

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter Any Number:";
	cin >> num;

	int digit;
	int dec,place=0;
	int sum=0;

	while (num > 0) {
		digit = num % 10;
		
		dec = digit * pow(2, place);
		sum = sum + dec;
		num = num / 10;
		place++;
	}


	cout << sum;
}