
//


/*
#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter:";
	cin >> num;

	int rev = 0;

	for (int i = 1; num!=0;i++) {

		int digit = num % 10;

		rev = rev * 10 + digit;
		num = num / 10;

	}
	cout << rev;
}
*/



#include<iostream>
using namespace std;

int fun(int num,int rev) {

	if (num == 0) {
		return rev;
	}
	int digit = num % 10;
	rev = rev * 10 + digit;
	return fun(num / 10, rev);
}

int main() {
	int num,rev=0;
	cout << "Enter:";
	cin >> num;
	cout<<fun(num, rev);
}
