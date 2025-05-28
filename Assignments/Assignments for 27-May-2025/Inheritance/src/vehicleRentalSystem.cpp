#include<iostream>
using namespace std;

class Vehicle {
protected:
	string vehicleId;
	string type;
	int ratePerKm;
	int distance;
	int day;
public:

	Vehicle() {
		 distance = 0;
		 day = 0;
	}
	
	Vehicle(string vehicleId,string type,int ratePerKm,int distance ,int day) {
		this->vehicleId = vehicleId;
		this->type = type;
		this->ratePerKm = ratePerKm;
		this->distance = distance;
		this->day = day;
	}

	


	void calculateFare() {
		
		int total = ratePerKm * distance;
		cout << "Fare without discount: " << total << endl;
		if (0<day && day > 2) {
			int percntage = total/10;
			int discount = total - percntage;
			cout << "Fare with long - term discount :" << discount << endl;
		}
		
	}
	

	

};

class Car :public Vehicle {

};

class Bike :public Vehicle {

};

int main() {

	string type;
	cout << "Vehicle Type: ";
	cin >> type;

	string vehicleId;
	cout << "Vehicle Id: ";
	cin >> vehicleId;

	int ratePerKm;
	cout << "Rate: ";
	cin >> ratePerKm;

	float distance;
	cout << "Distance: ";
	cin >> distance;
	
	int day;
	cout << "Days: ";
	cin >> day;

	Vehicle v1(type,vehicleId,ratePerKm,distance,day);
	
	v1.calculateFare();

}