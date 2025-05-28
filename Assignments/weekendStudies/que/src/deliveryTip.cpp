#include<iostream>
using namespace std;

class DeliveryTip {
private:
	string orderID;
	int billAmount;
	int	distance;
	int tip;

	public:
	DeliveryTip(string id,int b,int d) {
		orderID = id;
		billAmount = b;
		distance = d;
	
	}
	
	DeliveryTip() {
		orderID = "";
		billAmount = 0;
		distance = 0;
	}

	
private:
	void calculateTip() {
		if (0<distance&&distance < 5) {
			tip = (billAmount / 100)*5;
		}
		else if (distance >= 5 && distance <= 10) {
			tip = (billAmount / 100)*10;
		}
		else if(distance>10) {
			tip = (billAmount / 100) * 15;
		}
	}
	/*DeliveryTip	d1("ORD1",	500,	3);
 d1.printDetails();
 Expected	Output:
 Order	ORD1	|	Tip:	₹25*/
public:
	void printDetails() {
		calculateTip();
		cout << "order " << orderID << "\t|\tTip:\t$" << tip;
	}

};

int main() {

	DeliveryTip d1("ORD1",500,3);
	d1.printDetails();
}