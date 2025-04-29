
//Middle value
/*
#include<iostream>
using namespace std;

int main() {
	int a;
	cout << "Enter first Number:";
	cin >> a;
	int b;
	cout << "Enter Second Number:";
	cin >> b;
	int c;
	cout << "Enter Third Number:";
	cin >> c;


 if (a < b&&b< c) {
		cout << b;
 }
 else {
	 cout << "Enter in Acending order";
 }
	
}
*/

//Sum until single integer

/*

#include<iostream>
using namespace std;

int main() {
	int num ,sum=0;
	cout << "Enter Some Number:";
	cin >> num;

	while (num>=10)
	{
		sum = 0;
		while(num != 0) {
			sum = sum + num % 10;
			num = num / 10;
		}
		num = sum;
		
	}
	cout << sum;
}

*/

//Leap year

/*

#include<iostream>
using namespace std;

int main() {

	int year;
	cout << "Enter ANY Year:";
	cin >> year;


	if ((year%4==0 && year%100!=0) || year%400==0) {

		cout << "It is leap Year";
	}
	else {
		cout << "NOT Leap Year";
	}

}

*/

//Last second digit
/*
#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter:";
	cin >> num;

	int remdit = num / 10;

	int lastdigt = remdit % 10;

	cout << lastdigt;

}

*/

//Hour into minutes and seconds

/*
#include<iostream>
using namespace std;

int main() {

	int num,Minutes,Seconds;
	cout << "Enter any Hours (1-12):";
	cin >> num;

	Minutes = num * 60;
	Seconds = num * 3600;

	cout << "Minutes:" << Minutes << "  " << "Seconds:" << Seconds << endl;

}

*/

//Sum Of two number is even

/*
#include<iostream>
using namespace std;

int main() {
	int a;
	cout << "Enter First Number:";
	cin >> a;

	int b;
	cout << "Enter Second Number:";
	cin >> b;

	int sum = a + b;

	if (sum %2==0) {
		cout << "Even";

	}
	else {
		cout << "Odd";
	}
}
*/

//add last digit anf first digit

/*
#include<iostream>
using namespace std;

int main() {
	int num1;
	cout << "Enter first Number:";
	cin >> num1;

	int num2;
	cout << "Enter Second number:";
	cin >> num2;

	int lastD = num1 % 10;
	int firstD;

	while (num2 > 0 ) {
		firstD = num2 % 10;
		num2 = num2 / 10;
	}
	

	cout << lastD * 10 + firstD;
}
*/

//Swap numbers

/*
#include<iostream>
using namespace std;

int fun(int& a, int& b);

int main() {
	int a;
	cout << "Enter Frst:";
	cin >> a;
	int b;
	cout << "Enter secnd:";
	cin >> b;

	fun(a,b);
}

int fun(int& a, int& b) {

	
	a = a + b;
	b = a - b;
	a = a - b;

	cout << "a:" << a <<" " << "b:" << b;
	return 0;

}
*/

//Find poewrs using multiplication

/*
#include<iostream>
using namespace std;

int fun(int a, int b);

int main() {

	int a;
	cout << "Enter a 1st Number:";
	cin >> a;

	int b;
	cout << "Enter a 2nd Number:";
	cin >> b;

	cout << fun(a, b);

}

int fun(int a, int b) {
	
	if (b == 1)
		return a;
	else
		return a * fun(a, b - 1);
	
	
}
*/

//Angle from traingle

/*
#include<iostream>
using namespace std;

int main() {
	int a;
	cout << "Enter 1st Number:";
	cin >> a;
	int b;
	cout << "Enter 2nd Number:";
	cin >> b;
	int c;
	cout << "Enter 3rd Number:";
	cin >> c;

	int tot = a + b + c;
	if (tot==180) {
		cout << "It's a Triangle";
	}
	else {
		cout << "Not a triangle";
	}
}
*/