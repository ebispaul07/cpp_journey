#include<iostream>
using namespace std;

int main() {
	int a;
	cout << "Enter 1st Number:";
	cin >> a;

	int b;
	cout << "Enter 2nd Number:";
	cin >> b;

	int c;
	cout << "Enter 3rd Number:";
	cin >> c;

	int d;
	cout << "Enter 4th Number:";
	cin >> d;

	int e;
	cout << "Enter 5th Number:";
	cin >> e;

		if (a>=b) {
			if (a >= c) {
				if (a >= d) {
					if (a >= e) {
						cout << a;
					}
				}

				
			}

		}

		else if (b >= a) {
			if (b >= c) {
				if (b >= d) {
					if (b >= e) {
						cout << b;
					}
				}
				
			}
		}

		else if (c >= a) {
			if (c >= b) {
				if (c >= d) {
					if (c >= e) {
						cout << c;
					}
				}

			}
		}

		else if (d >= a) {
			if (d >= b) {
				if (d >= c) {
					if (d >= e) {
						cout << d;
					}
				}

			}
		}

		else if (e >= a) {
			if (e >= b) {
				if (e >= c) {
					if (e >= d) {
						cout << e;
					}
				}

			}
		}
		
}