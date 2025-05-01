
#include<iostream>
using namespace std;

int fun(int num) {
	if (num == 0) {
		return  0;
	}
	else {
		return num * num + fun(num - 1);
	}
}

int main() {
	int num;
	cout << "Enter:";
	cin >> num;
	cout << fun(num);
	

}
