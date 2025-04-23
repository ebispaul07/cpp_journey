//For counting the odd and even number
/*
#include<iostream>

using namespace std;

int main() {
	cout << "Lets Start......" << endl;

	int a, b, even = 0, odd = 0;

	cout << "Enter any Number:"  << endl;
	cin >> a;
	

	for ( int i = 0;i <a;i++) {

		cout << "Enter : ";
		cin >> b;
		if(b%2==0){
			even++;
		}
		else {
			odd++;
		}

		cout << "Even:" << even << endl;
		cout << "odd:" << odd << endl;
	}



}
*/

//Program for reverse a number

/*
#include<iostream>

using namespace std;

int main() {

	int num, reverse = 0;

	cout << "Enter Some Number to Reverse:";
	cin >> num;

	while (num != 0) {

		reverse = reverse * 10 + num % 10;
		num = num / 10;
	}

	cout << "Reversed number is " << reverse << endl;

}
*/


//Program for reverse a string

/*
#include <iostream>

using namespace std;

int main() {

	string str;

	cout << "Enter a Word to reverse:";
	cin >> str;

	cout << "Reversed Word :" << " ";

	for (int i = str.length() - 1;i >= 0;i--) {
		cout  << str[i];
	}

}

*/

//program to sum of numbers

/*
#include<iostream>

using namespace std;

int main() {

	int num, sum = 0;

	cout << "Enter some Numbers to ADD:";
	cin >> num;

	while (num != 0) {
		sum += num % 10;

		num = num / 10;
	}
	cout << sum;
}

*/

//palindrome

#include<iostream>

using namespace std;

int main() {

	string str;

	cout << "Enter a string :";
	cin >> str;

	bool isPalindrom = true;
}
