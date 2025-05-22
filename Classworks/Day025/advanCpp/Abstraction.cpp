#include<iostream>
using namespace std;

class Car {
private:
	string color;
	string model;
	void change() {
		color = "color:" + model;
		cout << model << endl;
	}
public:
	void changemod(string name) {
		model = name;
		change();
	}

};

int main() {

	Car c1;

	c1.changemod("Benz");


}