//qestion-01


#include<iostream>
using namespace std;

void fun(int num) {

	cout << num;

	if (num > 1) {
		fun(num - 1);

	}

}

int main() {

	int num;
	cin >> num;
	fun(num);


}