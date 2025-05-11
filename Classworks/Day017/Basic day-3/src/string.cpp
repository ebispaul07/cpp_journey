#include<iostream>
using namespace std;
#define MAX 100

int main() {

	char arr[MAX];

	int size;
	cout << "Enter the size of the array:";
	cin >> size;

	cout << "Enter the array element:";
	for (int i = 0;i < size;i++) {
		cin >> arr[i];
	}

	char alp = 'a';
	int num=0 ;
		while (num <= 26) {
			
			cout << alp;
			alp++;
			
	}

		/*
	char a[MAX];
	char b[MAX];
	char c[MAX];
	for (int j = 0;j < size;j++) {
		if ('a' == arr[0]) {
			 arr[j]=a[j];
			cout << arr[j];
		}
		else if ('b' == arr[0]) {
			arr[j] == b[j];
			cout << arr[j];
		}
		else {
			arr[j] == c[j];
			cout << arr[j];
		}
	}

	*/


}