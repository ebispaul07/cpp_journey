#include<iostream>

using namespace std;

int fun(int n);

int main() {
	fun(5);

}

int fun(int n) {
	int fact =1;

	for (int i = 1;i <= n;i++) {
		fact = fact * i;

		cout << fact << endl;


	}


	return 0;
}