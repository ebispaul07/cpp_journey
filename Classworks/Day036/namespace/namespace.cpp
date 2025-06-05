#include<iostream>
using namespace std;

namespace box1 {
	int v = 5;
}

namespace box2 {
	int v = 10;
}

int main() {
	cout << box1::v << endl;
	cout << box2::v << endl;
}