//#pragma once
#ifndef __ATM__
#define __ATM__
#include<string>

using namespace std;

class ATMAccount {
private:
    int balance;
    string accountHolder;

public:
    void setBalance(int);
    int getBalance();
    void setAcHolder(string);
    string getAcHolder();
    void deposit();
    void withdraw();
    void checkBalance();
};


#endif // !__ATM__
