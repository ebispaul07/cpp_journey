#include<iostream>
using namespace std;

class Vechicle {
protected:
	string brand;
	int modelNo;
	int seatCap;
	string ctrlOption;
public:
	void setOption(string brand,string ctrlOption,int modelNo,int seatCap) {
		this->brand = brand;
		this->ctrlOption= ctrlOption;
		this->modelNo = modelNo;
		this->seatCap = seatCap;
	}
	
};


class car :public Vechicle {
private:
	string brand;
	string fuelType;

public:
	void SetDetails() {
		cout << "Enter car Brand: ";
		cin >> brand;
		cout << "Enter ModelNo: ";
		cin >> modelNo;
		cout << "Enter Seat Capacity: ";
		cin>>seatCap;
		cout << "Enter the Control Option: ";
		cin >> ctrlOption;
	}

	void display() {
		cout << "Brand: " << brand<<endl;
		cout<< "Model: " << modelNo << endl;
		cout << "Seat Capacity: " << seatCap << endl;
		cout << "Control Type:" << ctrlOption << endl;
	}
};


int main() {

	car c1;
	c1.SetDetails();
	c1.display();

}