#include<iostream>
using namespace std;
#define MAX 100

class Flight {
private:
	string flightNumber;
	int totalSeats;
	int bookedSeats;
	int arr[MAX];
	int size;
	int siz=0;
	int arr1[MAX];
	int Avseat = 100;
	int availSeat;

public:
	void setFlightNo(string f) {
		flightNumber = f;
	}
	string getFlightNo() {

		return flightNumber;
	}

	void setTotalseat(int t) {
		totalSeats = t;
	}
	int getTotalseat() {
		return totalSeats;
	}
	void setBookedseat(int b) {
		bookedSeats = b;
	}
	int getBookedseat() {
		return bookedSeats;
	}

	void bookseats() {

		flightNumber;
		cout << "Enter the Flight Number:";
		cin >> flightNumber;

		size;
		cout << "Enter Total seats:";
		cin >> size;
		siz = size;
		

		arr[MAX];
		cout << "Enter the seat no:";
		for (int i = 0;i < size;i++) {
			cin >> arr[i];
		}

              

		arr1[MAX];

		for (int i = 0;i < size;i++) {
			arr1[i] = arr[i];
		}


		cout << "Successfully Booked Seats : ";
		for (int i = 0;i < size;i++) {
			cout << arr1[i] << " ";
			
			
		}
		cout << endl;
	}
	void showAvailability() {

		cout << "Enter Flight Number:";
		cin >> flightNumber;

		

		availSeat = Avseat - siz;

		
		cout << "Available seat in this Flight is " << availSeat << endl;
	}
};



int main() {

	Flight f1;

	cout << "\t\t\tWelcome to E-Flight Seat Reservation System" << endl;

	int num;
	cout << "Select," << endl;
	cout << "1.BookSeats" << endl;
	cout << "2.ShowAvailable seats" << endl;
	cout << "3.Exit"<<endl;
	cin >> num;

	switch (num) {
	case 1:
		cout << "Welcome To Seat Reservation!!!" << endl;
		f1.bookseats();
		
		break;
	case 2:
		cout << "To Available seats" << endl;
		f1.showAvailability();
		break;
	case 3:
		cout << "Exiting" << endl;
		break;
	default:
		cout << "Invalid input!!!" << endl;
	}


	
	


}