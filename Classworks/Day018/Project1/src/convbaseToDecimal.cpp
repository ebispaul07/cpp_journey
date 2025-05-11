#include<iostream>
using namespace std;

int decToBinary(int num) {
	int dec = 0;

	while (num > 0) {
		dec = num % 2;
		num = num / 2;
		cout << dec;
	}
	return 0;
}

int main() {

	int num;
	cout << "Enter any base:";
	cin >> num;

	cout << decToBinary(num);




}