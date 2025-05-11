
/*
#include<iostream>
using namespace std;



int main() {
	 float PI = 3.14;

	int a;
	cout << "Enter:";
	cin >> a;

	int square = a * a;
	float cir = PI*a * a;

	float b;
	cout << "Enter Breadth:";
	cin >> b;

	float h;
	cout << "Enter Height:";
	cin >> h;

	float tri = 0.5 *(b * h);

	int rec = b * h;

	cout << square << endl;
	cout << cir<<endl;
	cout << tri<<endl;
	cout << rec<<endl;
}

*/


//using function

/*
#include<iostream>
using namespace std;

void fun(int a,int b,int h,int c) {
	float PI = 3.14;
	int square = a * a;
	float cir = PI * c * c;
	float tri = 0.5 * (b * h);
	int rec = b * h;
	

	cout << square << endl;
	cout << cir << endl;
	cout << tri << endl;
	cout << rec << endl;
}


int main() {
	

	int a;
	cout << "Enter any Number for Square:";
	cin >> a;

	int c;
	cout << "Enter any Number for circle:";
	cin >> c;



	float b;
	cout << "Enter Any value to calculate Triangle and Rectangle"<<endl;
	cout << "Enter Breadth:";
	cin >> b;

	float h;
	cout << "Enter Height:";
	cin >> h;

	fun(a, b, h,c);
}
*/


#include<iostream>
using namespace std;

void sqr(int a) {
	
	int square = a * a;

	cout << square << endl;
	
}

void rec(int b,int h) {

	int rect = b * h;
	cout << rect;
}

void tri(int b,int h) {
	float triangle = 0.5 * (b * h);
	cout << triangle;
}

void cir(int c) {
	int PI = 3.14;
	float cir = PI * c * c;
	cout << cir;
}

int main() {
	

	string enter;
	cout << "Enter For Any one [Square, Rectangle, Triangle, Circle] :";
	cin >> enter;

	if ("Square" == enter) {
		int a;
		cout << "Enter Any Value to calculate Square:";
		cin>>a;
		sqr(a);
	}
	else if ("Rectangle" == enter) {

		int b;
		cout << "Enter Any value to calculate Rectangle" << endl;
		cout << "Enter Breadth:";
		cin >> b;

		float h;
		cout << "Enter Height:";
		cin >> h;

		rec(b, h);
	}
	else if ("Triangle" == enter) {
		int b;
		cout << "Enter Any value to calculate Traingle" << endl;
		cout << "Enter Breadth:";
		cin >> b;

		float h;
		cout << "Enter Height:";
		cin >> h;

		tri(b, h);

	}
	else if ("Circle" == enter) {
		int c;
		cout << "Enter any Number for circle:";
		cin >> c;
		cir(c);
	}



}