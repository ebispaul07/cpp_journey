#include<iostream>
using namespace std;


int baseTodecimal(int num) {
	int digit;
	int dec, place = 0;
	int sum = 0;

	while (num > 0) {
		digit = num % 10;

		dec = digit * pow(2, place);
		sum = sum + dec;
		num = num / 10;
		place++;
	}
	cout << sum;
	return 0;

}

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
	cout << "Enter yuor base:";
	cin >> num;

	cout << baseTodecimal(num) << endl;
	cout << decToBinary(num);



}