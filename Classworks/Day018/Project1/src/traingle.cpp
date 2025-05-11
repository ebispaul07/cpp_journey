#include<iostream>
using namespace std;

int main() {


	int num = 5;

	for (int i = 0;i <= num;i++) {
		for (int j = 0;j <= 2*num-i;j++) {
			cout << " ";
		}

		for (int k = 0;k <=i;k++) {
			cout << "* ";
		}
		cout << endl;
	}


}