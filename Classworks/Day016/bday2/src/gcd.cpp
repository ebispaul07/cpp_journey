
/*
#include<iostream>
using namespace std;

int main() {

	int num1;
	cout << "Enter 1st number:";
	cin >> num1;

	int num2;
	cout << "Enter 2nd number:";
	cin >> num2;



	int rem = num1 % num2;
	rem = num2;
	num2 = num1;

	

	

	for (int i = 1;i < num1+num2;i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			cout << i << endl;
		}
	}


}

*/

#include<iostream>
using namespace std;

int main() {


	int a = 70;
	int b = 60;

	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}

	cout << b;

}