#include<iostream>
#include<string>
#include<chrono>
#include<unordered_map>


using namespace std;

class User {
protected:
	string name;
	string username;
	string password;
public:
	User(string name,string username,string password) {
		this->name = name;
		this->username = username;
		this->password = password;
	}

	virtual void display() = 0;
	bool checkPassword(string p) {
		return this->password == p;
	 }
	string getUsername() {
		return this->username;
	}


};


class Bid {
	float bidAmt;
	chrono::time_point<chrono::steady_clock>bidTime;
public:
	Bid(float amt, chrono::time_point<chrono::steady_clock>time) :bidAmt(amt), bidTime(time) {};
		float getBidAmt() {
		return this->bidAmt;
	}
		chrono::time_point<chrono::steady_clock>getBidTime() {
			return this->bidTime;
	}
};

class Buyer :public User {
	unordered_map<string, Bid>buyerBids;
public:
	Buyer(string n, string u, string p):User(n,u,p) {}

	void addBid(string item, float amt) {
		buyerBids.insert({ item,Bid(amt,chrono::steady_clock::now()) });
	}
	void display() {

	}
};



int main() {

}