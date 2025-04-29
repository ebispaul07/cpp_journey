//Compound Interest

/*
#include<iostream>
using namespace std;

int main() {
	int p;
	cout << "Enter Principle:";
	cin >> p;

	int r;
	cout << "Enter Rate:";
	cin >> r;

	int t;
	cout << "Enter Time:";
	cin >> t;

	int A = p * (1 + r / 100) ^ t;

	cout << A;

	int CI = A - p;

	cout << CI;
}

*/

//Divisible by  Both 3 and 5

/*

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter any Number:";
	cin >> num;

	if (num % 3 == 0 && num % 5 == 0) {
		cout << "Divisible by Both"<<endl;
	}
	else {
		cout << "Not Divisible" << endl;;
	}
}

*/

//Remainder Without Using % Operator

/*
#include<iostream>
using namespace std;

int main() {
	int a;
	cout << "Enter a number:";
	cin >> a;

	int b;
	cout << "Enter a number:";
	cin >> b;

	int rem = a - (a / b) * b;

	cout << rem;
}

*/

//Check if a Character is an Uppercase Letter

/*
#include<iostream>
using namespace std;

int main() {
	

	char in;
	cout << "Enter any Char:";
	cin >> in;

	for (int i = 1;i <= 26;i++) {
		char ch = 'A';
		ch++;

		if (in==ch) {
			cout << "Uppercase";
			return 0;
		}

	}

	cout << "Lower Case";
}
*/


//Find the Maximum of Three Numbers

/*
#include<iostream>
using namespace std;

int main() {
	int a;
	cout << "Enter First num:";
	cin >> a;

	int b;
	cout << "Enter Second num:";
	cin >> b;

	int c;
	cout << "Enter Third num:";
	cin >> c;

	if (a<b) {
		if (b< c) {
			cout << c;
		}if (b > c && a < b) {
			cout << b;
		}
	}
	else {
		if (a > b) {
			if (b > c) {
				cout << a;
			}
		}
		
	}
}

*/

//Categorize Temperature into Hot, Warm, Cold
/*
#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter Temperature:";
	cin >> num;

	if (num >= 35) {
		cout << "HOT";
	}
	else if (num < 35 && num>20) {
		cout << "Warm";
	}
	else if (num<20) {
		cout << "Cold";
	}
}

*/

//Check Voting Eligibility

/*
#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter your age:";
	cin >> num;

	if (num >= 18) {
		cout << "Eligible";
	}
	else {
		cout << "Not Eligible";
	}
}

*/

//Print All Odd Numbers from 1 to N
/*
#include<iostream>
using namespace std;

int main() {
	for (int i = 1;i <= 10;i++) {
		cout << i;
	}
}

*/

//Find Sum of Digits of a Number
/*
#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter Any Numbers:";
	cin >> num;

	int sum=0;

		while (num > 0) {
			
			sum = sum + num % 10 ;
			num = num / 10;
	}
		cout << sum;
}
*/

//Reverse a Number

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter a number:";
	cin >> num;

	int rev = 0;

	while (num != 0) {
		int digit = num % 10;
		rev = rev * 10 + digit;
		num = num / 10;

	}
	cout << rev;
}