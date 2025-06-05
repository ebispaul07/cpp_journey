#include<iostream>
#include<vector>
using namespace std;

int main() {

	vector<int>number;
	number.push_back(10);
	number.push_back(20);
	number.push_back(30);
	number.push_back(40);

	cout << "The Numbers:" << endl;

	for (int num : number) {
		cout << num<<"->";
	}
	cout << "NULL";

	number.pop_back();
	//number.front();
	cout << "Afer the number:" << endl;

	for (int num : number) {
		cout << num << "->";
	}

	cout << "NULL";
}