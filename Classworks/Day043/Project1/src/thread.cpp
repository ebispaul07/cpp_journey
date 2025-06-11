#include <iostream>
#include <thread>

using namespace std;

void hello(int x,int y) {
   cout << "Hello from thread!\n";
   cout << x +y;
}

void hell(int &x) {
    cout << x * x;
}

int main() {

    thread t(hello,5,5);// to initialize thread

  
    t.join();//it will attach a process to the main thread

    cout << "im Main" << endl;//it will print after the thread job done 
   
    //t.join();

    int num = 8;

    thread t1(hell, ref(num));
    t1.join();

    

    return 0;
}