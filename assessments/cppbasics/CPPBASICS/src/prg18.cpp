//18.Write a Program to Check Whether a Number is an Armstrong Number or Not

#include<iostream>
#include <cmath>
using namespace std;

int main() {
		
	int num;
	cout << "Enter Your Number:";
	cin >> num;
	int orig = num;
	int digit ;
	int place = 0;
	int cub=0,rev=0;
	int sum=0;
	

	while (num > 0) {
		num = num / 10;
		place++;
	}

	int di;
	num = orig;

	while (orig> 0) {
		di = orig % 10;
		
		cub = pow(di, place);
		sum = sum + cub;
		orig = orig / 10;
		
		
	}
	

	if (sum == num) {
		cout << "Armstrong"<<endl;
	}
	else {
		cout << "Not Armstrong" << endl;
	}

}