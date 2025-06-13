#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>

using namespace std;


int highestBidAmount = 0;
string highestBidder = "";
mutex mtx;

void bidding(string name, int amount) {
	mtx.lock();
	if (amount > highestBidAmount) {
		highestBidAmount = amount;
		highestBidder = name;
		cout << name << " is a Highest Bidder in this Aution With $" << amount << endl;
	}
	else {
		cout << name << " is a Lowest Bidder in this Auction with $" << amount << endl;
	}
	mtx.unlock();
}

void bidderdetail(string name, int amount, int delaytime) {
	this_thread::sleep_for(chrono::seconds(delaytime));
	bidding(name, amount);
}

int main() {

	cout << "Auction Starts...SmartPhone!!" << endl;
	cout << "Minimum Price $100" << endl;

	thread t1(bidderdetail, "Ebi", 120, 2);
	thread t2(bidderdetail, "Emi", 200, 3);
	t1.join();
	t2.join();

	cout << "Auction Ending...." << endl;

	this_thread::sleep_for(chrono::seconds(1));
	cout << "3" << endl;
	this_thread::sleep_for(chrono::seconds(1));
	cout << "2" << endl;
	this_thread::sleep_for(chrono::seconds(1));
	cout << "1" << endl;

	if (highestBidder != "") {
		cout << "The Auction winner is " << highestBidder << " With Amount of $" << highestBidAmount << endl;
	}
	else {
		cout << "invalid Amount" << endl;
	}

}