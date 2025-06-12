#include<iostream>
#include<string>
#include<mutex>
#include<thread>
#include<vector>

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

	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}

	void setUsername(string username) {
		this->username = username;
	}
	string getUsername() {
		return username;
	}

	

};

class Buyer:public User{
protected:
	string name;
	int price;
public:
	Buyer(string name, int price) :User(name, username, password) {
		this->name = name;
		this->price = price;
	}
	
	
};

class seller :public User {
protected:
	string name;
	int bidAmount;
public:
	seller(string name, int bidAmount) :User(name, username, password) {
		this->name = name;
		this->bidAmount = bidAmount;
	}
};