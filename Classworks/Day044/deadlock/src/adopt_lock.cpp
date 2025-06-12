#include<iostream>
#include<mutex>
#include<thread>

using namespace std;


mutex mtx1;
mutex mtx2;

void thr1() {
    std::lock(mtx1, mtx2); 
    std::lock_guard<std::mutex> lock1(mtx1, std::adopt_lock);
    std::lock_guard<std::mutex> lock2(mtx2, std::adopt_lock);
    std::cout << "Thread 1 finished\n";
}

int main() {
    thread t1(thr1);
    t1.join();
}