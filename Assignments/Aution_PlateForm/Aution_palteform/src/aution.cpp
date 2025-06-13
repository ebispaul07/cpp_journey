#include<iostream>
#include<thread>
#include<mutex>
#include<string>
#include<chrono>

using namespace std;

class User {
protected:
	string name;
	static string highestBidder;
	static int highestBidprice;
	static mutex mtx;

public:
	User(string name) {
		this->name = name;
	}

	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}

	void dispalyWinner() {
		if (highestBidder != "") {
			cout << "The Auction winner is " << highestBidder << " With Amount of $" << highestBidprice<< endl;
		}
		else {
			cout << "invalid Amount" << endl;
		}
	}

	
};

string  User::highestBidder = "";
int User::highestBidprice = 0;
mutex User::mtx;

class Buyer :public User {
public:
	
	Buyer(string name) :User(name) {
		this->name = name;
	};

	void placeBid(int amount) {
		mtx.lock();
		if (amount > highestBidprice) {
			highestBidprice = amount;
			highestBidder = name;
			cout << name << " is a Highest Bidder in this Aution With $" << amount << endl;
		}
		else {
			cout << name << " is a Lowest Bidder in this Auction with $" << amount << endl;
		}
		mtx.unlock();
	}
};

class seller :public User {
public:
	seller(string name) :User(name) {
		this->name = name;
	};

	void startAuction() {
		cout << "Auction Starts...SmartPhone!!" << endl;
		cout << "Minimum Price $100" << endl;
	}
	void endAuction() {
		cout << "Auction Ending...." << endl;

		this_thread::sleep_for(chrono::seconds(1));
		cout << "3" << endl;
		this_thread::sleep_for(chrono::seconds(1));
		cout << "2" << endl;
		this_thread::sleep_for(chrono::seconds(1));
		cout << "1" << endl;
		dispalyWinner();
	}
};

void bidderdetail(Buyer&buyer, int amount, int delaytime) {
	this_thread::sleep_for(chrono::seconds(delaytime));
	buyer.placeBid(amount);
}

int main() {

	seller s("Emi");
	s.startAuction();

	Buyer b1("Ebi");
	Buyer b2("EBBIIII");

	thread t1(bidderdetail,ref(b1), 250, 2);
	thread t2(bidderdetail, ref(b2),350, 3);

	t1.join();
	t2.join();

	s.endAuction();


}