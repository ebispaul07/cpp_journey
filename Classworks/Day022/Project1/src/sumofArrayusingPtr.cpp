#include<iostream>
using namespace std;


int sum(int*,int);

int sum(int *ptr,int num) {

	int sumN = 0;
	for (int i = 0;i < num;i++,ptr++) {
		sumN = sumN + *ptr;

		return sumN;
	}
}



int main() {

	int list[] = { 1,2,3,4,5 };
	int cap = sizeof(list) / sizeof(list[0]);

	cout << sum(list, cap);
	return 0;
}