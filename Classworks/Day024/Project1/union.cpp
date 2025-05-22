#include<iostream>
using namespace std;

typedef union employee {
	int id;
	char name[20];
}EMP;

int main() {
	EMP e;

	e.id = 100;
	e.name[20] = 'e';
	cout << e.name[20] << endl;


}