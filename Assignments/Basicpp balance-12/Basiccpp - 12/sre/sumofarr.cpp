#include<iostream>
using namespace std;
#define MAX 100

int main() {

	int add[MAX];

	int size;
	cout << "Enter the Size:";
	cin >> size;

	cout << "Enter the Array element:";
	for (int i = 0;i < size;i++) {
		cin >> add[i];
	}

	int sum = 0;

	for (int i = 0;i < size;i++) {
		sum = sum + add[i];
	}
	cout << sum;
}