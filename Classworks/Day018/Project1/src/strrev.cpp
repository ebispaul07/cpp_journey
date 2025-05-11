#include<iostream>
using namespace std;
#define MAX 100

int main() {
	char arr[MAX];

	int size;
	cout << "Enter the Array size:";
	cin >> size;

	cout << "Enter array element:";
	for (int i = 0;i < size;i++) {
		cin >> arr[i];
	}
	int sum = 0;
	for (int j = 0;j < size;j++) {
		if (isdigit(arr == 0)) {
			sum = sum + arr[j] - 48;

		}
	}
	cout << sum;
	
}