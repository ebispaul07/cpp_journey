#include<iostream>
#include<thread>
using namespace std;


void a() {
	cout << "A" << endl;
}
void b() {
	cout << "B" << endl;
}
void c() {
	cout << "C" << endl;
}

int main() {

	int n = 0;
	while (n < 5) {

		thread t1(a);
		t1.join();
		thread t2(b);
		t2.join();
		thread t3(c);
		t3.join();

		n++;
	}
}