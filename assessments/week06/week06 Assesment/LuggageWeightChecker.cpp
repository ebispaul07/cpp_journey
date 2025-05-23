#include<iostream>
using namespace std;

class Luggage {
private:
	string PassengerName;
	int lug_weight;
	int lug_limit=20;

public:

	void setName(string s) {
		PassengerName = s;
	}
	string getName() {
		return PassengerName;
	}
	void setlugWeight(int w) {
		lug_weight = w;
	}
	int getlugWeight() {
		return lug_weight;
	}
	void setLimit(int l) {
		lug_limit = l;
	}
	int getLimit() {
		return lug_limit;
	}


	void checkOverweight() {
	
		cout << "Passanger Name: "<< PassengerName<<endl;
		
		cout << endl;

		cout << "Luggage Weight: "<< lug_weight<<endl;
		cout << endl;
		
		if (lug_limit >= lug_weight && lug_weight > 0) {
			cout << "Luggage within Limits " << lug_weight <<"Kg." << endl;
		}
		else {
			cout << "Overweight! Exceeded by"<<" " << lug_weight - lug_limit<<"Kg."<<endl;
		}
	}

};

int main() {

	Luggage l1;
	l1.setName("Ebi");
	l1.setlugWeight(25);
	l1.checkOverweight();



}