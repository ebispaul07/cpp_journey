#include<iostream>
using namespace std;

class Vechicles {
protected:
	int price;
public:
	Vechicles() {

	}
	Vechicles(int price) {
		this->price = price;
	}

};

class Car:public Vechicles {
protected:
	int seatingCap;
	int noofDoors;
	string fuelType;
public:
	Car(int seatingCap,int noofDoors,string fuelType, int price):Vechicles( price) {
		this->seatingCap = seatingCap;
		this->noofDoors = noofDoors;
		this->fuelType = fuelType;
	}
};

class MotorCycle:public Vechicles {
protected:
	int noofCylinder;
	int noofGear;
	int noofWheel;
public:
	MotorCycle(int noofCylinder,int noofGear,int noofWheel, int price):Vechicles(price) {
		this->noofCylinder = noofCylinder;
		this->noofGear = noofGear;
		this->noofWheel = noofWheel;
	}
};

class Audi :public Car {
protected:
	string modelType;
public:
	Audi(string modelType,int seatingCap,int noofDoors,string fuelType,int price):Car( seatingCap,  noofDoors, fuelType,price) {
		this->modelType = modelType;
	}

	void dispAudi() {
		cout << "Price: " << price << endl;
		cout << "Seat Capacity: " << seatingCap << endl;
		cout << "No of Doors: "<<noofDoors << endl;
		cout << "Fuel Type: " << fuelType << endl;
		cout << "Model Type: " << modelType << endl;
	}


};

class Yamaha :public MotorCycle {
protected:
	string makeType;
public:
	Yamaha(string makeType,int noofCylinder,int noofGear,int noofWheel,int price): MotorCycle(noofCylinder, noofGear, noofWheel,price) {
		this->makeType = makeType;
	}
	void dispYamaha() {
		cout << "Price: " << price << endl;
		cout << "No Of Cylinders: " << noofCylinder << endl;
		cout << "No Of Gears: " << noofGear << endl;
		cout << "No of Wheels: "<<noofWheel << endl;
		cout << "Make Type: " << makeType << endl;
	}

};


int main() {
	int price,seatingCap,noofDoor,fuelType;
	string modelType,makeType;

	Audi a1("Electric",4,4,"petrol",10000);
	a1.dispAudi();
	cout << endl;

	Yamaha y1("Fiber",3,4,2,10000);
	y1.dispYamaha();
}