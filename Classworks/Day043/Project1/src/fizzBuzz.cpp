#include<iostream>
#include<thread>
using namespace std;

void mul3(int x) {
	cout << "Multiple By 3: "<<endl;
	for (int i = 1;i <= x;i++) {
		if (i % 3 == 0) {
			cout << "Fizz"<< endl;
		}
	}
	cout << endl;
}
void mul5(int x) {
	cout << "Multiple By 5: "<<endl;
	for (int i = 1;i <= x;i++) {
		if (i % 5 == 0) {
			cout << "Buzz" << endl;
		}
	}
	cout << endl;
}

void mul3nd5(int x) {
	cout << "Multiple By 3 And 5: "<<endl;
	for (int i = 1;i <= x;i++) {
		if (i%3==0&&i % 5 == 0) {
			cout << "Fizz Buzz" << endl;
		}
	}
	cout << endl;
}

void allothr(int x) {
	cout << "All other Values : ";
	for (int i = 1;i <= x;i++) {
		if (i % 3 != 0 && i % 5 != 0) {
			cout << i << " ";
		}
	}
	cout << endl;
}



int main() {
	thread t1(mul3, 20);
	t1.join();

	thread t2(mul5, 20);
	t2.join();

	thread t3(mul3nd5, 20);
	t3.join();

	thread t4(allothr, 20);
	t4.join();

}