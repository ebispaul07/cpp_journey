#include<iostream>
using namespace std;


void great() {
	cout << "Hello";
}

int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}


int main() {

	void(*fptr)()=great;//functionPointer

	fptr();

	int (*fptr1)(int,int) = add;
	cout << fptr1(10, 20);

	fptr1 = sub;
	cout << fptr1(20 , 5);
	
}