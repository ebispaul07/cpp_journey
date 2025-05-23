#include<iostream>
using namespace std;


class MyArray {
private:
	int *arr;
	int size;
	int capacity;

public:
	int push_back(int);
	int biggest();
	int sortAsc();
	int desc();
	int printrray();
	int getSize()const;
	int getCapacity()const;
	int resize();

	MyArray() {
		capacity = 1;
			size = 0;
			arr = new int(capacity);
	}
	
};

int MyArray::getCapacity()const {
	return capacity;
}

int MyArray::getSize()const {
	return size;
}

int MyArray::push_back(int a) {

	if (size == capacity) {
		cout << "cap is equal to size when adding element " << a << endl;
		resize();
	}
	arr[size++] = a;

	return 0;

}

int MyArray::printrray() {
	for (int i = 0;i < size;i++) {
		cout << arr[i] << endl;
	}
	return 0;
}

int MyArray::resize() {
	capacity =capacity* 2;
	int* newData = new int[capacity];
	for (int i = 0;i < size;i++) {
		newData[i] = arr[i];
		delete[]arr;
		arr = newData;
	}
	return 0;
}

int main() {
	MyArray obj;
	cout << "size: " << obj.getSize() << obj.getCapacity() << endl;

	obj.push_back(10);
	obj.push_back(11);
	obj.printrray();

	return 0;


}