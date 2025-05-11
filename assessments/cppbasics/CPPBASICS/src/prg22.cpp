//22.Write a Program to Find the Smallest and Largest Element in an Array

#include<iostream>
using namespace std;
#define MAX 100

int main() {

	int num[MAX];

	int size;
	cout << "Enter Array Size:";
	cin >> size;



	cout << "Enter Any Number:";
	for (int i = 0;i < size;i++) {
		cin >> num[i];
	}

	int c[MAX];
	for (int i = 0;i < size;i++) {
		c[i] = num[i];
	}

	int min = 1000000;

	for (int i = 0;i < size;i++) {
		if (min > c[i]) {
			min = c[i];
		}
	}
	cout << "Small:" << min << endl;



	int max = -100;

	for (int i = 0;i < size;i++) {
		if (max < c[i]) {
			max = c[i];
		}
	}

	cout << "Largest:" << max << endl;


}