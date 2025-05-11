#include<iostream>
using namespace std;
#define MAX 100

int main() {

	int arr[MAX] = { 0 };

	int size=0;
	cout << "Enter any Number:";
	cin >> size;

	cout << "Enter array value:";
	for (int i = 0;i < size;i++) {
		cin >> arr[i];
	}

	int small = arr[0];
	int sec = arr[1];
	int larg = arr[0];

	for (int i = 0;i < size;i++) {
		if (small > arr[i]) {
			sec = small;
			small = arr[i];
		}
		else if (arr[i] < sec && arr[i] > small) {
			sec = arr[i];
		}

		
		if (larg < arr[i]) {
			larg = arr[i];
		}
	}

	cout << small;
	cout << sec;
	cout << larg;
	
}