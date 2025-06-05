#include<iostream>
#include<array>
using namespace std;

template<typename T>
 
class Sensor {
protected:
	array<array<T, 5>, 3> sensor_readings = {
	array<T, 5>{20.0, 21.0, 22.0, 20.5, 19.8},
	array<T, 5>{30.0, 30.2, 29.8, 30.1, 30.3},
	array<T, 5>{25.0, 26.0, 24.0, 25.5, 26.2}
	};

	// array<T, 5>sensor_readings = { 1,2,3,4,5 };

public:

	T sum = 0;
	void sensor1() {
		cout << "Sensor 1 Average (caliberated) : ";
		//array<T, 3>calibrate;

		for (T i = 0;i <3;i++) {
			sum = 0.0;
			for (T j = 0;j < 5;j++) {
				T sum = 0;
				sum = sum+ sensor_readings[i][j]+0.5f;
			}
			
		}
		
		cout << sum;

	}
	void sensor2() {
		cout << "sensor 2 Average(calibrated): ";
	}

	void sensor3() {
		cout << "sensor 3 Average(calibrated): ";
	}

};



int main() {

	Sensor<float>sen;

	sen.sensor1();

	

}