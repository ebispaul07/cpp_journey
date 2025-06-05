#include<iostream>
using namespace std;

template<class T>

void Swap(T& a, T& b) {
	T t = a;
	a = b;
	b = t;
}

 template<class T1,class T2>

float add(T1& x, T2& y){
	T2 sum = x + y;
	return sum;
}


int main() {

	int a = 10;
	int b = 20;

	cout << a << b << endl;

	Swap(a, b);

	cout << a << b << endl;

	float x, y;

	cout << add();


}