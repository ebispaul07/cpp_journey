#include<iostream>
using namespace std;

class wheat {
public:
	string prod;
	int price;

	void display() {
		cout << "Product Name: " << prod << "\tPrice: " <<price<< endl;
		cout << endl;
	}
};

class Biscuit :public wheat {

};


int main() {
	wheat w1;

	w1.prod = "Jim Jam";
	w1.price = 20;
	w1.display();

	w1.prod = "parle G";
	w1.price = 5;
	w1.display();

	w1.prod = "Dark Fantacy";
	w1.price = 30;
	w1.display();


}