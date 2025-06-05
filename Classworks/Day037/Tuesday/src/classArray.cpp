#include<iostream>
#include<array>
#include<algorithm>

using namespace std;

class STLArray {
protected:
	template<int, 5>;


	array<int,5 > arr = {};

public:


	void printArray() {
		cout << "Array Elements: ";
		for (int i = 0;i < arr.size();i++) {
			cout << arr[i]<<" ";
		}
		cout << endl;
	}


	void accessingElem() {
		cout << arr[1] << endl;
		cout << arr[0] << endl;

		cout << arr[arr.size() - 1] << endl;
	}

	void siz() {

		cout << arr.size() << endl;

		if (arr.size() == 0) {
			cout << "Empty" << endl;
		}
		else {
			cout << "Contain Elements" << endl;
		}
	}

	
	void accessingElements() {
		cout << arr.at(2) << endl;
		cout << arr.front() << endl;
		cout << arr.back() << endl;
	}
	

	


	void checkSizeAndEmpty() {
	
		cout << "Size of array: " << arr.size() <<endl;
		cout << "Is array empty? " << (arr.empty() ? "Yes" : "No") << endl;
	}

	


	void sortArray() {
		
		sort(arr.begin(), arr.end());
		cout << "After sorting: ";
		for (int i : arr) cout << i << " ";
		cout << endl;
	}

	void reverseArray() {
		reverse(arr.begin(), arr.end());
		cout << "After reversing: ";
		for (int i : arr) cout << i << " ";
		cout << endl;
	}

	
};


int main() {
	STLArray stl;
	
	cout << "\tSTL Container" << endl;

	array<int, 5> arr;
	
	

	stl.accessingElements();
	stl.checkSizeAndEmpty();
	stl.reverseArray();
	stl.sortArray();
	stl.printArray();
	stl.accessingElem();
	stl.siz();
}
