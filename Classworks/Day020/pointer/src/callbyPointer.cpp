#include<iostream>
using namespace std;

void swap1(int, int);//call by value
void swap2(int*, int*);//call by pointer
void swap3(int&, int&);//call by reference

int main() {

	int a = 10;
	int b = 20;
	cout << "In Main(Before swap)\n" << a << "\t" << b << endl;

	swap3(a, b);
	cout << "In Main(After swap)\n" << a << "\t" << b << endl;

	return EXIT_SUCCESS;

}

void swap1(int a, int b) {
	int t;
	t = a;
	a = b;
	b = t;
	cout << "In swap function\n" << a << "\t" << b << endl;
}

void swap2(int* a, int* b) {
	int t;
	t = *a;
	*a = *b;
	*b = t;

	cout << "In Swap2 Function \n" << a << "\t" << b << endl;
}

void swap3(int &a, int &b) {
	int t;
	t = a;
	a = b;
	b = t;

	cout << "In Swap3 Function \n" << a << "\t" << b << endl;
}

