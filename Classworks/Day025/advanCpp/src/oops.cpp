///using main.....

/*
#include<iostream>
using namespace std;

class laptop {
public:
	int modelno;
	string brandName;

};

int main() {
	laptop acer, lenovo;

	acer.modelno = 293959;
	acer.brandName = "Aspire";
	lenovo.modelno = 33030;
	lenovo.brandName = "Gt";

	cout << acer.modelno << "\t" << acer.brandName;
}

*/

//using function....

#include<iostream>
using namespace std;

class laptop {
public:
	int modelno;
	string name;

	void details() {
		cout << modelno << endl;
		cout << name << endl;
	}
};

int main() {

	laptop lap1, lap2;
	lap1.modelno = 688;
	lap1.name = "Lenovo";
	lap1.details();
}