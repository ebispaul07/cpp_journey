//#include <iostream>
//#include <chrono>
//#include<ctime>
//
//using namespace std;
//
//int main() {
//    auto now = chrono::system_clock::now();
//    time_t timeNow = chrono::system_clock::to_time_t(now);
//
//    cout << "Current time: " << ctime(&timeNow);
//}

#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    cout << "Running Seconds...\n";
    for (int i = 1;i <= 60;i++) {
        this_thread::sleep_for(chrono::seconds(1));
        cout << i << endl;
    }
    /*this_thread::sleep_for(chrono::seconds(1));
    cout << "two!\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "three!\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "four!\n";*/
}