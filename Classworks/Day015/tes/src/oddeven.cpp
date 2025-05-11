#include<iostream>
using namespace std;

int main() {

	int start ;
	cout << "Start:";
	cin >> start;

	int end ;
	cout << "End:";
	cin >> end;

	for (int i = start;i <= end;i++) {

		if (i % 2 == 0) {
			cout << "Even : " << i << endl;;
		}
		else {
			cout << "ODD : " << i << endl;;
		}

	}
}