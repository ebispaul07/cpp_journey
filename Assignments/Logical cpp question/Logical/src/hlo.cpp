//smallest digit in a given Number

/*
#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter any numbers:";
	cin >> num;

	int digit;
	int smallest = 9;

	while (num>0) {

		int digit = num % 10;

		if (digit<smallest) {
			smallest = digit;
		}
		num = num / 10;
	}
	cout << smallest;
	
}

*/

//Odd Coin Counting

/*
#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter any Numbers:";
	cin >> num;

	int sum = 0,i = 1;

	while (num >=i) {
		sum = sum + i;
		i = i + 2;
	}

	cout << "The sum of odd digit is:"<<sum;
	
}

*/

//Broken Clock

/*
#include<iostream>
using namespace std;

int main() {
	int hr;
	cout << "Enter a number:";
	cin >> hr;

	
	for (int minu = 1;minu <= 60;minu++) {
		if (hr % minu == 0) {
			cout << minu<<",";
		}
}

}

*/

//Secret Message in Binary
/*
#include<iostream>
#include <bitset>
using namespace std;

int main() {
	int num;
	cout << "Enter any number:";
	cin >> num;
	int count = 1;

	string bin = bitset<8>(num).to_string();

	for (int i = 0;bin[i] != '10';i++) {
		if (bin[i] == '1') 
			count++;
		
	}
	cout << bin;
}

*/

//
#include<iostream>
using namespace std;

int main() {

	int num,digit;
	cout << "enter:";
	cin >> num;

	for (int i = 1;i < num;i++) {
		if (num % i == 0) {
			int digi = digit + digit + digit;
			cout << digi;
		}
	}
}