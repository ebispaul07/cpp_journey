//50.Write a Program for Decimal to Hexadecimal Conversion

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter decimal Number:";
	cin >> num;

	int digit = 0;

	char ch[6] = { 'A','B','C','D','E','F' };
	ch[0] = 10;

	for(int i=0;i<num;i++) {
		digit = num % 16;
		num = num / 16;
		if (digit==ch[i]) {
			cout << ch[i];
			ch[i]++;
		}
	}

}