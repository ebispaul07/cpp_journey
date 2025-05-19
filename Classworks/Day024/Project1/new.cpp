#include<iostream>
using namespace std;

typedef struct Employee {
	int id;
	string name;
}EMP;


int main() {
	
	int* ptr = (int*)malloc(sizeof(int));//one int
	*ptr = 10;//assign value 10 to the address pointed by ptr



	int* p = new int[10];

	cout << *ptr << *p << endl;
	cout << "Sizeofptr" << sizeof(*ptr) << endl;
	cout << "sizeofp" << sizeof(*p) << endl;



	int *a = new int[10];
	cout << sizeof(a)<<" " << sizeof(*a);

	for (int i = 0;i < 10;i++) {
		a[i] = (i + 1) * 2;
	}

	for (int i = 0;i < 10;i++) {
		cout << *a++<<endl;
	}

	EMP* e = new EMP[10];

	EMP* e1= new EMP{ 101,"EBi"};
	cout << e1->name;

	delete e1;

	delete[]e;
}