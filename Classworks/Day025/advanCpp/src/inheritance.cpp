#include<iostream>
using namespace std;

class Mobile {
public:
	int phno;
	string modelName;

	void display() {
		cout << "Phone Number: " << phno << endl;
		cout << "Model: " << modelName << endl;
	}
};

class gaming :public Mobile {

};


int main() {

	gaming g1;

	g1.phno = 7598;
	g1.modelName = "Apple";
	g1.display();

}