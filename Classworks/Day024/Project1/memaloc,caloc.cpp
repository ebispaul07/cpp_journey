#include<iostream>
using namespace std;


typedef struct Employee {
	int id;
	char name[20];
	char desig[20];
}EMP;

int main() {

	EMP e;

	//cin >> e.id >> e.name >> e.desig;

	

	//cout << e.id;
	//cout << e.name;
	//cout << e.desig;


	//EMP* e1 = (EMP*)malloc(sizeof(EMP) * 3);
	EMP* e1 = (EMP*)calloc(3,sizeof(EMP));

	EMP* temp = e1;
	
	cin>> e1->id;

	cout << e1->id;



}