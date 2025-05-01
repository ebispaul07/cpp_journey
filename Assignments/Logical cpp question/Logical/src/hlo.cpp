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

//King's Perfect Army

/*
#include<iostream>
using namespace std;

int main() {

	int num,digit=0;
	cout << "enter:";
	cin >> num;

	for (int i = 1;i < num;i++) {
		if (num % i == 0) {
			
			cout << i;
		}
	}
}

*/

//Spaceship Countdown

/*
#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter:";
	cin >> num;

	

	while (num>=1) {

		cout << num << endl;

		num--;
	}
}

*/


//First Non-Zero Digit in Secret Code


/*
#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter:";
	cin >> num;

	for (int i = 0;i <= num;i++) {
		int digit = num % 10;
		

		if (digit % 2 == 0) {
			
			cout << digit<< endl;
		}
		
		num = num / 10;
		}
	}

	*/

//Energy Crystals

/*

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter:";
	cin >> num;
	int n = 2;


	while (num > n) {

		n = 2 * n;

		cout << n;



	}
	
}
	
*/

//Magic Multiplying Puzzle

/*
#include<iostream>
using namespace std;

int main() {
	bool flag = true;

	int num;
	cout << "Enter:";
	cin >> num;
	int pro=1;

	for (int i = 1;i <= num;i++) {
		int digit = num % 10;
		 pro = pro * digit;
		
		
		num = num / 10;
	}
	cout << pro << endl;

	for (int i = 2;i < pro;i++) {
		if (pro % i == 0) {
			flag = false;
			break;
		}
	}

	if (flag==true) {
		cout << "prime";
	}
	else {
		cout << "Not Prime";
	}

	
}

*/

//The Doubling Machine

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter:";
	cin >> num;

	int count = 1,sum=0;


	for (int i = 1; count <= num; count++) {
		i =i* 2;
	
		cout << i << endl;

		 sum = sum + i;


	}

	cout <<"Total:" << sum;

}