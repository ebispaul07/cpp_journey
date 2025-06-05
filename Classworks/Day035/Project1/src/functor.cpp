#include<iostream>
using namespace std;

class Add {
public:
	
	int add(int a, int b) {
		return a + b;
	}

};

int main() {
	
	Add a;
	
	cout<< a.add(10, 3);

}