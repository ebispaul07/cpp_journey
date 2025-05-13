#include<iostream>
using namespace std;

int main() {
	int a;
	a = 10;

	int *ptr = (int*)malloc(sizeof(int)*3);
	int*temp = ptr;
	cout << *ptr << endl;

	*ptr = 202;

	ptr++;

	cout << ptr << endl;

	*ptr = 203;
	ptr++;
	cout << ptr << endl;


	return 0;
}