#include<iostream>
using namespace std;

class Test {
private:
	int x;
	int y;
public:
	Test(int x,int y) {
            this->x = x;
		    this->y = y;
	}

	void setX(int x) {
		this->x = x;
	}
	int getX() {
		return this->x;
	}

	void setY(int y) {
		this->y = y;
	}
	int getY() {
		return this->y;
	}


	void display() {
		cout << this->x <<" " << this->y;
	}


};



int main() {

	Test t1(4,5);
	t1.display();

	t1.setX(10);
	cout << t1.getX();

	

}