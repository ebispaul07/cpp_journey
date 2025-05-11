//24.Write a Program to Calculate the Sum of Elements in an Array

#include<iostream>
using namespace std;
#define MAX 100

int main() {

	int arr[MAX];

	int size;
	cout << "Enter Your Array size:";
	cin >> size;

	cout << "Enter your Array Element:";
	for (int i = 0;i < size;i++) {
		cin >> arr[i];
	}


	int sum=0;

	for (int i = 0;i < size;i++) {
		sum = sum + arr[i];
		
	}
	cout << sum;
}