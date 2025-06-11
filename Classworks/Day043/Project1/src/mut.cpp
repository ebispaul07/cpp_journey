#include<iostream>
#include<mutex>
#include<thread>
using namespace std;

mutex mt;

int counter = 0;

void addMoney() {
	mt.lock();
	counter++;
	mt.unlock();

}

int main() {

	thread per1(addMoney);
	thread per2(addMoney);


	per1.join();
	per2.join();

	cout << "Count: " << counter++ << endl;
}