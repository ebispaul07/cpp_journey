#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter Any Number:";
	cin >> num;

    for (int i = num - 1;i >= 1;i--) {
        for (int j = 1;j < num - i;j++) {
            cout << " ";
        }
        for (int k = 1;k <= (2 * i) - 1;k++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 2;i < num;i++) {
        for (int j = 1;j < num - i;j++) {
            cout << " ";
        }
        for (int k = 1;k <= (2 * i) - 1;k++) {
            cout << "*";
        }
        cout << endl;
    }
}