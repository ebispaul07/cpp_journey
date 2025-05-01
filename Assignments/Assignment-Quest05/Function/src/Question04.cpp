
#include<iostream>
using namespace std;

int fun(int num ,int count) {

	if (num==0) {
		return count;
		
	}


	int digit;

	digit = num % 10;
	if (digit==0) {
		 count++;
	}
	
	return fun(num / 10, count);

}

int main() {
	int num;
	cout << "Enter:";
	cin >> num;
	int count=0;
	cout << fun(num,count);

}


