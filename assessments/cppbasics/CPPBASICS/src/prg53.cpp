//53.Write a program in C++ to find the area and circumference of a circle

#include<iostream>
using namespace std;

int main() {

	int r;
	cout << "Enter radius:";
	cin >> r;

	int PI = 3.14;

	int area = PI *( r * r);
	int circumference = 2 * (PI * r);

	cout << "Area:" <<area<< endl;
	cout << "Circumference:"<<circumference << endl;


}