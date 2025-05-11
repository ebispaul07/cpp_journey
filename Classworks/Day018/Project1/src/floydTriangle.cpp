#include<iostream>
using namespace std;

int main() {
	int num = 5;

	int count = 1;

	for (int i = 0;i < num;i++) {
		for (int j = 0;j < i;j++) {
			cout << count++<<" ";
		}
		cout << endl;
	}
}