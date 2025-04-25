#include<iostream>

using namespace std;

int main() {
	int num;
	cout << "Enter Number:";
	cin >> num;

	int sum = 0;
	int prod = 1;

	int i = 2;



	while (i<=num) {
		if (num%i==0) {
			sum = sum + i;
			prod = prod * i;

			while (num % i == 0) {
				num = num / i;
				

			}
		}
		i++;
	}
	cout << sum << endl;
	cout << prod << endl;
}