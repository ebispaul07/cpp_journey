//23.Write a Program to Find the Second Smallest Element in an Array

#include<iostream>
using namespace std;
#define MAX 100

int main() {

	int num[MAX];

	int size;
	cout << "Enter An Array Size:";
	cin >> size;

	cout << "Enter Element in the array:";
	for (int i = 0;i < size;i++) {
		cin >> num[i];
	}

	int num2[MAX];

	for (int i = 0;i < size;i++) {
		num2[i] = num[i];
	}

	int temp = 0;

	for (int i = 0;i < size-1;i++) {
		for(int j=0;j<size-1-i;j++){

			if (num[j] > num[j + 1]) {
				temp = num[i];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}

	for (int i = 0;i <size;i++) {
		if (num[1] > num[0]) {
			cout << "Second smallest:"<<num[1];
			break;
		}
		else {
			cout << num[1];
		}
	}



}