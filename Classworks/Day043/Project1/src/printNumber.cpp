#include<iostream>
#include<thread>
using namespace std;


void from1to10(int n) {
	for (int i = 1;i <= n;i++) {
		cout << i << "->";
	}
	cout << "Done";

}

void from10to20(int k) {
	for (int i = 10;i <= k;i++) {
		cout << i << "->";
	}
	cout << "Done";
}

int main() {
	thread t1(from1to10, 10);
	t1.join();
	
	thread t2(from10to20, 20);

	
	
	t2.join();
	
}