#include<iostream>
using namespace std;

template<class T1,class T2>

class Box {
private:
	T1 data1;
	T2 data2;
public:



	Box(T1 value1, T2 value2) :data1(value1), data2(value2) {}
		void printData() {
			cout << "Data1:" << data1 << endl;
			cout << "data2:" << data2 << endl;
		}
	
};

int main() {
	Box<int,float>intBox(10,12.3);
	Box<float,string>stringBox(1.2,"abcde");

	intBox.printData();
	stringBox.printData();
}