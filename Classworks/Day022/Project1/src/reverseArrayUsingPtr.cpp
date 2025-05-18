#include<iostream>
using namespace std;


void rev(int* ptr, int size) {

	int t;
	for (int i = 0;i < size / 2;i++) {
		t = ptr[i];
		ptr[i] = ptr[size - 1 - i];
		ptr[size - 1 - i] = t;
		

	}

	for (int i = 0;i < size;i++) {

		cout<< ptr[i]<<" ";
		
	
		
	}
	
}

int main() {

	int arr[] = { 1,2,3,4,5,6,7,8 };
	int size = sizeof(arr) / sizeof(arr[0]);

	 rev(arr, size);
	return 0;

}