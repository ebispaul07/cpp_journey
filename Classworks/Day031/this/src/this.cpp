#include<iostream>
using namespace std;

class Test {
	int id;
public:
	Test() {
		id = 0;
	}
	Test(int id) {
		this->id = id;
	}

	void setV(int id) {
	     this->id = id;
	}
	int getV() {
		return this->id;
	}
};


int main() {

	Test t1;
	t1.setV(10);
	cout << t1.getV();
}