//1.const

/*
#include<iostream>
using namespace std;

class BankAccount {
private:
	int accNo;
	static int accountCount;
public:
	BankAccount() {
		accountCount++;
		accNo = accountCount;
	}
	static int getAccountCount() {
		
		return accountCount ;
	}

	void display() {
		cout << "Account" << accNo << endl;
	}

};

int BankAccount::accountCount = 1000;


int main() {

	BankAccount acc1;
	BankAccount acc2;
	BankAccount acc3;

	cout << "Total number of accounts: " << BankAccount::getAccountCount() << endl;

	return 0;
}

*/

//2.const

#include <iostream>
using namespace std;

class BankAccount {
private:
	double balance;

public:
	BankAccount(double initialBalance) : balance(initialBalance) {}

	double getBalance() const {  // Const member function
		return balance;          // Ensures no modification to object
	}

	void deposit(double amount) {
		balance += amount;
	}
};

int main() {
	BankAccount acc(1000.0);
	acc.deposit(500.0);

	// Call to const function
	cout << "Current balance: $" << acc.getBalance() << endl;

	return 0;
}