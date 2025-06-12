#include<iostream>
#include<mutex>
#include<thread>
#include<condition_variable>

using namespace std;


mutex mtx;

condition_variable product;

bool flag = false;

void producer() {
	this_thread::sleep_for(chrono::milliseconds(300));
	cout << "Producer is producing an Item" << endl;
	lock_guard<mutex>guard(mtx);
	flag = true;
	product.notify_one();
}

void consumer() {
	cout << "Waiting for item" << endl;

	unique_lock<mutex>guard(mtx);
	product.wait(guard, [] {return flag;});
	cout << "Customer got The Item" << endl;
}

