#include<iostream>
using namespace std;
#define MAX 100

class Array {

private:
	int arr1[MAX];
	int arr2[MAX];
	int size;
public:
	void setArray1(int a) {
		arr1[MAX] = a;
	}
	int getArray1() {
		return arr1[MAX];
	}
	void setArray2(int b) {
		arr2[MAX] = b;
	}
	int getArray2() {
		return arr2[MAX];
	}




	void userInput() {

		
		cout << "Enter Any Size: ";
		cin >> size;
		cout << "Enter Five Number: ";
		for (int i = 0;i < size;i++) {
			cin >> arr1[i];
		}

		arr2[MAX];
		for (int i = 0;i < size;i++) {
			arr2[i] = arr1[i];
		}

	}

	

	void biggestofArray() {
		int max = -100000;
		for (int i = 0;i < size;i++) {
			if (max < arr2[i]) {
				max= arr2[i];
				
			}
		}
		cout <<"Largest: "<< max<<endl;
	}

	void assendingOrder() {
		int temp = 0;
		for (int i = 0;i < size;i++) {
			for (int j = 0;j < size - 1;j++) {
				if (arr2[j] > arr2[j + 1]) {

					temp = arr2[j];
					arr2[j] = arr2[j + 1];
					arr2[j + 1] = temp;

				}

			}
		}

		cout << "Acessending order:";
		for (int i = 0;i < size;i++) {
			cout << arr2[i]<<" ";
		}
		cout << endl;
	}

	void descendingOrder() {
		int tem = 0;

		for (int i = 0;i < size;i++) {
			for (int j = 0;j < size-1;j++) {
				if (arr2[j] < arr2[j + 1]) {
					tem = arr2[j];
					arr2[j] = arr2[j + 1];
					arr2[j + 1] = tem;
				}
			}
		}
		cout << "Descending order:";
		for (int i = 0;i < size;i++) {
			cout << arr2[i]<<" ";
		}
	}

};

int main() {
	Array a1;
	a1.userInput();
	a1.biggestofArray();
	a1.assendingOrder();
	a1.descendingOrder();
}