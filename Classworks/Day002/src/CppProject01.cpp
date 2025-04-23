

#include <iostream>
using namespace std;


#include <addition.h>
#include <Substraction.h>
#include <Multiplication.h>
#include <Division.h>



int main()
{

	int a, b;
	char c;
	int ret = 0;
	cout << "Enter two numbers :" << endl;

	cin >> a >> b;

	cout << "Select Your Preference(+,-,*,/)" << endl;
	cin >> c;

	if (c == '+') {
		cout << "Add:" <<Add(a,b) << endl;
	}
	else if (c == '-') {
		cout << "Sub:" << sub(a,b) << endl;
	}
	else if (c == '*') {
		cout << "Multiplication:"<<mul(a,b) << endl;
	}
	else if (c=='/') {
		cout << "Division: "  << division(a, b) << endl;

	}
	else {
		cout << "Errror!!!!!" << endl;
	}

	

	return 0;
   

}




