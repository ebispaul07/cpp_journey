#include<iostream>
#include"atm3.h"
#include<string>

using namespace std;



void ATMAccount::setBalance(int b) {
    balance = b;
}
int ATMAccount::getBalance() {
    return balance;
}

void ATMAccount::setAcHolder(string a) {
    accountHolder = a;
}
string ATMAccount::getAcHolder() {
    return accountHolder;
}



void ATMAccount::deposit() {
    balance = 100000;

    int deposit;
    cout << "Deposit Amount: ";
    cin >> deposit;
    balance = balance + deposit;
    cout << "Balance Amount: " << balance << endl;


}

void ATMAccount::withdraw() {
    int withdraw;
    cout << "Withdraw Amount: ";
    cin >> withdraw;


    balance = balance - withdraw;
}

void ATMAccount::checkBalance() {

    if (balance >= 0) {
        cout << "Balance: " << balance;
    }
    else {
        cout << "sorry!!! Balance is Less than 0" << endl;
    }
}
