#include<iostream>
#include<array>
using namespace std;

template<typename T>

class STLArray {
protected:
	array<T, 5> arr = {10,20,30,40,50};
public:

	void printArray() {
		cout << "Array Elements: ";
		for (T i = 0;i < arr.size();i++) {
			T sum = 0;
			sum = sum[i] + arr[i];
			cout << sum << " ";
		}
		cout << endl;
	}
};

int main() {
	STLArray<int> stl;
	stl.printArray();
}