#include<iostream>
#include<string>

using namespace std;

int main() {

	int num[3];
	cout << "Enter Any Numbers:";
	cin >> num[3];



	int len = to_string(num[3]).length();



	int powr1 = num[0] ^ len;
	int powr2 = num[1] ^ len;
	int powr3 = num[2] ^ len;

	int tot = powr1 + powr2 + powr3;

	cout << tot << endl;

	if (num[3] % 2 == 0) {
		cout << "Not An Armstrong Number.";
	}
	else {
		cout << "Its Armstrong Number.";
	}


}