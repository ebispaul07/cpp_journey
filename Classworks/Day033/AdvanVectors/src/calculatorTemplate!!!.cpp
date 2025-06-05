#include<iostream>
using namespace std;

template<class T1,class T2>


class Calculator {
private:
	T1 data1;
	T2 data2;
public:

	Calculator(T1 value1, T2 value2) :data1(value1), data2(value2) {}
	void printData() {
		cout << "Data1:" << data1 << endl;
		cout << "data2:" << data2 << endl;
		
	}



	void Nms() {
		T1 x;
		cout << "Enter The First Number:";
		cin >> x;

		T1 y;
		cout << "Enter The second number:";
		cin >> y;
	}

	T1 add(T1 x, T2  y) {
		T2 sum = x + y;
		return sum;
	}

	T1 sub(T1 x, T2 y) {
		T2 sub = x - y;

		return sub;
	}

	T1 mul(T1 x, T2 y) {
		T2 mul = x * y;
		return mul;
	}

	T1 div(T1 x,T2 y) {
		if (x/0 && y/0) {
			cout << "Divisible by 0" << endl;
			return 0;
		}
		else {
			T2 div = x / y;
			return div;

		}
	}


	

};

int main() {

	Calculator<int, int>Nms();
	
	

	Calculator<int, int>add(10, 20);
	
	add.printData();
	

}