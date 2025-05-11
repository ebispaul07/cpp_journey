//43.Write a Program to Print the Maximum Value of an Unsigned int Using One's Complement (~) Operator

#include<iostream>
using namespace std;


int main() {

	unsigned int maxi ;
	maxi = 0;
	maxi = ~maxi;

	cout << maxi;

}