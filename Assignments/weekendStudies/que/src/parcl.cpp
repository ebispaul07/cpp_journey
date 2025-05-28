#include<iostream>
using namespace std;

class Parcel {
private:
	string parcelId;
	int weight;
	int distance;
	int cost;
public:


	Parcel(string id,int w,int c) {
		parcelId = id;
		weight = w;
		cost = c;
	}

	Parcel() {
		parcelId = "";
		weight = 0;
		cost = 0;
	}

	void setParcelid(string p) {
		parcelId = p;
	}
	string getParcelid() {
		return parcelId;
	}
	void setWeight(int w) {
		weight = w;
	}
	int getWeight() {
		return weight;
	}
	void setDistance(int d) {
		distance = d;
	}
	int getDistance() {
		return distance;
	}
	void setCost(int c) {
		cost = c;
	}
	int getCost() {
		return cost;
	}

	void calculateCost() {
		if (weight <= 5) {
			distance = cost * 5;
		}
		else {
			distance = cost * 8;
		}
	}

	void printCost() {
		cout << "ParcelId: " << parcelId << endl;
		cout << "Cost: " << distance << endl;
	}

};

int main() {
	Parcel p1("2e", 5, 4);
	
	//p1.setParcelid("S1");
	//p1.setWeight(3);
	//p1.setCost(50);
	p1.calculateCost();
	p1.printCost();
}