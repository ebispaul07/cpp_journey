#include<iostream>
using namespace std;

int main() {

	int* ptr = nullptr;
	int* temp = nullptr;
	int noofelem = 5;

	ptr = (int*)malloc(sizeof(int) * noofelem);

	temp = ptr;

	for (int i = 0;i < noofelem;i++,ptr++) {
		cout << "Enter the " << i + 1 << "value" << endl;
		cin >> * ptr;
	}

	ptr = temp;//reassign back base address to the pointer

	for (int i = 0;i < noofelem;i++,ptr++) {
		cout << (i + 1) << "value =" << ptr<<endl;
	}

	ptr = temp;

	for (int i = 0;i < noofelem;i++) {
		cout << (i + 1) << "value=" << ptr[i] << endl;
	}

	cout << "============================================" << endl;;

	for (int i = 0;i < noofelem;i++) {
		cout << (i + 1) << "value=" << ptr[i] << endl;
	}

}