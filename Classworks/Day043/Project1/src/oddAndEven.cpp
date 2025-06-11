#include<iostream>
#include<thread>
using namespace std;


void even(int n) {
	for (int i = 1;i < n;i++) {
		if (i % 2 == 0) {
			cout << i<<" ";
		}
	
	}
}

void odd(int k) {
	for (int i = 0;i < k;i++) {
		if (i % 2 != 0) {
			cout << i << " " ;
		}

	}
	cout << endl;
}


int main() {
	thread t1(even, 10);
	t1.join();



	thread t2(odd, 10);
	t2.join();
}