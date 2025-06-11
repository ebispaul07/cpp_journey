#include <iostream>
#include <thread>
#include<chrono>

void backgroundTask(int &x) {
    std::this_thread::sleep_for(std::chrono::seconds(10));
    std::cout << "Background task done." << std::endl;
    x = x * x;
    std::cout << x<<std::endl;
}

int main() {
    int val = 4;
    std::thread t(backgroundTask,std::ref(val));
    t.detach(); // Main won't wait
    std::cout << "Main is not blocked.\n";
    std::this_thread::sleep_for(std::chrono::seconds(5)); // Wait to see output
    std::cout << val;
    return 0;
}