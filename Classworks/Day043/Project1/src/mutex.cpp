#include<iostream>
#include<thread>
#include<mutex>
using namespace std;


mutex mtx;

int counter = 0;

void addMoney() {

	//lock_guard<mutex>guard(mtx); here we dont need to unlock it will automatically does
	mtx.lock();
	counter++;
	mtx.unlock();
}

int main() {
	thread per1(addMoney);
	thread per2(addMoney);

	per1.join();
	per2.join();

	cout << counter;


}