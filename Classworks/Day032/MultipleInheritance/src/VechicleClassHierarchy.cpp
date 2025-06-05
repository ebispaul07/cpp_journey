#include<iostream>
using namespace std;

class Vechicle {
protected:
	string make;
	string model;
public:
	Vechicle(string make,string model) {
		this->make = make;
		this->model = model;
	}
	void start() {
		cout << "Starting the " << make <<" " << model << endl;
	}
	void stop() {
		cout << "Stoping the " << make <<" " << model << endl;
	}
};

class Car:public Vechicle {
protected:
	int noofDoors;
public:
	Car(int noofDoors, string make, string model) :Vechicle( make,  model){
		this->noofDoors = noofDoors;
	}
	void honk() {
		cout << " Honking the horn of the " << make <<" " << model << endl;
	}
	
};

int main() {
	string make, model;
	int noofDoors;
	Car c(4,"generic", "vehicle");
	c.start();
	c.stop();
	Car c1(4,"Toyoto","Camry");
	c1.start();
	c1.honk();
	c1.stop();
	
}