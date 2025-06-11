#include<iostream>
#include<thread>
using namespace std;


void even(int n) {
	cout << "EVEN : ";
	for (int i = 1;i <= n;i++) {
		if (i % 2 == 0) {
			cout << i << " ";
		}

	}
}

void odd(int k) {
	cout << "ODD : ";
	for (int i = 1;i <= k;i++) {
		if (i % 2 != 0) {
			cout << i << " ";
		}

	}
	cout << endl;
}


int main() {
	thread t1(odd, 20);
	t1.join();

	thread t2(even, 20);
	t2.join();
}