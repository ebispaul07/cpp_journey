#include<iostream>
using namespace std;

int main() {

	int* ptr = NULL;

	int a[3] = { 10,2,3 };

	//cout << a[0] << a[1] << a[2] << endl;
	
	//ptr = a;

	//cout << *ptr<<endl;
	//cout << *ptr++ << endl;
	//cout << *ptr++ << endl;
	//cout << *ptr++ << endl;

	int* pt = a;

	cout << *pt++;
	


}