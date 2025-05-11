//47.Write a Program for Hexadecimal to Decimal Conversion

#include<iostream>
using namespace std;
#define MAX 100

int main() {

	char num[MAX];
	cout << "Enter Hex Value:";
	cin.getline( num,100);

	int digit = 0;
	int cub;
	int place = 0;
	int sum = 0;

	char ch[6] = { 'A','B','C','D','E','F' };
	ch[0] = 10;
	for (int i = 0;i < num[i];i++) {

		
		digit = num[i],ch[i] % 10;
		cub = digit + pow(16, place);
		sum = sum + cub;
		place++;
		num[i] = num[i] / 10;
		ch[i]++;

	}

	cout << sum;


}