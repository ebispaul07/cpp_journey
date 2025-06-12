#include<iostream>
#include<mutex>
#include<condition_variable>
#include<thread>

using namespace std;


mutex mtx;
condition_variable png;
bool flag = false;

void ping() {
	

		this_thread::sleep_for(chrono::seconds(2));
		cout << "PING" << endl;
		lock_guard<mutex>guard(mtx);
		flag = true;
		png.notify_one();
		
}

void pong() {

		this_thread::sleep_for(chrono::seconds(2));
		unique_lock<mutex>lock(mtx);
		png.wait(lock, [] {return flag;});
		cout << "PONG" << endl;
		
}

int main() {
	thread t1(ping);
	t1.join();

	thread t2(pong);
	t2.join();
}