#include<iostream>
using namespace std;

class car {
private:
	int licno;

public:
	void setNo(int b) {
		licno = b;
	}
	int getNo() {

		return licno;
	}
};

int main() {

	car c1;

	c1.setNo(8483);
	cout << c1.getNo();

}