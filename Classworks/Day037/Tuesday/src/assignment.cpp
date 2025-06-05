
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

	vector<int>number;

	int num;
	cout << "Enter any Numbers: ";
	for (int i = 0;i < 10;i++) {
		cin >> num;
		number.push_back(num);
	}

	for (int i = 0;i < 10;i++) {
		if (unique(number.begin(), number.end())== number[i]) {

		}

	}

}