#include<iostream>
#include<thread>

using namespace std;

void ping() {
	cout << "PING" << endl;
}

void pong() {
	cout << "PONG" << endl;
}


int main() {

	int n = 0;

	while (n < 5) {

		thread t1(ping);
		t1.join();

		thread t2(pong);
		t2.join();

		n++;
	}
}