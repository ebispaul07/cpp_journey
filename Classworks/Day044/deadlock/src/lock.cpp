#include<iostream>
#include<mutex>
#include<thread>
#include<chrono>

using namespace std;

mutex mtx1;
mutex mtx2;

void thr1() {
	lock_guard<mutex>guard1(mtx1);
	this_thread::sleep_for(chrono::microseconds(100));
	lock_guard<mutex>guard2(mtx2);
	cout << "thread 1" << endl;

}
void thr2() {
	lock_guard<mutex>guard2(mtx2);
	this_thread::sleep_for(chrono::microseconds(100));
	lock_guard<mutex>guard1(mtx1);
	cout << "Thread 2" << endl;
}

int main() {

	thread t1(thr1);
	t1.join();

	thread t2(thr2);
	t2.join();

}