#include<iostream>
using namespace std;

constexpr int sqr(int x) {
	return x * x;
}

int main() {

	constexpr int result = sqr(5);
	cout << result << endl;
}