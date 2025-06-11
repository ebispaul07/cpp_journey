#include<iostream>
#include<thread>
#include<mutex>

using namespace std;


mutex mt;

int counter = 1;

void ProCount() {
	mt.lock();
	while (counter < 1000) {
		
		cout << counter << endl;
			counter++;
	}
	mt.unlock();
}


int main() {
	thread t1(ProCount);
	t1.join();
}