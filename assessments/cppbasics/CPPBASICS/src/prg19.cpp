//19.Write a Program to Find the Nth Term of the Fibonacci Series

#include<iostream>
using namespace std;
#define MAX 100

int main() {

	int num;
	cout << "Enter ur Number:";
	cin >> num;
	int a = 0;
	int next;
	int b=1;

	for (int i = 0;i <= num;i++) {
		cout << a<<" ";
		 next = a + b;
				a = b;
				b = next;

	}

	
}